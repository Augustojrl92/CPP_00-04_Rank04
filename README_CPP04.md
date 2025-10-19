# 🧬 CPP04 – Polimorfismo, clases abstractas y composición
<span id="cpp04"></span>

## 🧭 Introducción
El módulo **CPP04** representa el cierre del bloque inicial de C++ en el cursus de **42**.  
Aquí se consolidan los pilares de la **Programación Orientada a Objetos (POO)**: **polimorfismo**, **herencia**, **clases abstractas** y **composición**.  
A diferencia de los módulos anteriores, donde la herencia era estática, en este se introduce el **polimorfismo dinámico**, que permite que un mismo método se comporte de forma distinta según el tipo real del objeto.

Este módulo entrena la comprensión del **tiempo de ejecución** en C++ (virtual tables, destructores virtuales, copia profunda, etc.), preparando al estudiante para el diseño de arquitecturas orientadas a objetos más complejas y seguras.

---

## 🧠 Conceptos teóricos clave

| Concepto | Descripción |
|-----------|-------------|
| **Polimorfismo** | Capacidad de redefinir métodos en clases derivadas, permitiendo comportamientos diferentes en función del tipo real del objeto. |
| **Clase abstracta** | Clase base que no puede instanciarse y define una interfaz común con funciones `virtual = 0`. |
| **Función virtual** | Permite el **binding dinámico**, es decir, la llamada al método adecuado según el tipo de objeto en tiempo de ejecución. |
| **Destructor virtual** | Garantiza que al eliminar un objeto derivado desde un puntero base, se ejecuten todos los destructores correctamente. |
| **Composición** | Relación en la que una clase contiene instancias de otras clases como atributos. |
| **Deep Copy** | Copia completa del contenido de un objeto, especialmente necesaria cuando hay punteros o recursos dinámicos. |

---

## 🧩 Ejercicio ex00 – *Polymorphism Basics (Animal)*

### 🎯 Objetivo
Introducir el uso de **herencia y polimorfismo dinámico** mediante funciones virtuales.

### 💡 Descripción
Se crea una jerarquía de clases formada por una clase base `Animal` y dos derivadas `Dog` y `Cat`.  
Cada clase redefine el método `makeSound()` para producir un sonido diferente.

```cpp
class Animal {
protected:
    std::string type;
public:
    Animal();
    virtual ~Animal();
    virtual void makeSound() const;
    std::string getType() const;
};
```

```cpp
class Dog : public Animal {
public:
    Dog();
    ~Dog();
    void makeSound() const;
};
```

```cpp
class Cat : public Animal {
public:
    Cat();
    ~Cat();
    void makeSound() const;
};
```

```cpp
int main() {
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << " says: ";
    dog->makeSound();

    std::cout << cat->getType() << " says: ";
    cat->makeSound();

    delete dog;
    delete cat;
}
```

### 🧠 Conceptos aprendidos
- Uso de **métodos virtuales** para permitir la redefinición dinámica.  
- Importancia del **destructor virtual** en jerarquías con punteros a clases base.  
- Diferencia entre llamadas estáticas y dinámicas.  
- Primer contacto con el **binding dinámico**.

---

## 🧩 Ejercicio ex01 – *WrongAnimal vs Animal*

### 🎯 Objetivo
Demostrar la diferencia entre el uso correcto e incorrecto de las funciones `virtual`.

### 💡 Descripción
Se crean dos jerarquías paralelas: una con métodos virtuales (`Animal`, `Cat`, `Dog`) y otra sin ellos (`WrongAnimal`, `WrongCat`).  
El propósito es mostrar que, sin `virtual`, las llamadas a funciones miembro se resuelven en **tiempo de compilación**, no de ejecución.

```cpp
class WrongAnimal {
public:
    void makeSound() const; // No virtual
};

class WrongCat : public WrongAnimal {
public:
    void makeSound() const; // Redefine pero no sobrescribe dinámicamente
};
```

```cpp
int main() {
    const WrongAnimal* wrong = new WrongCat();
    wrong->makeSound(); // Llama a WrongAnimal::makeSound() en lugar de WrongCat::makeSound()
    delete wrong;
}
```

### 🧠 Conceptos aprendidos
- Sin `virtual`, el polimorfismo **no ocurre**.  
- Con `virtual`, la llamada se vincula al **tipo real del objeto**.  
- Diferencia entre **binding estático (compile-time)** y **binding dinámico (runtime)**.  
- Comprensión práctica del porqué del `virtual` en C++.

---

## 🧩 Ejercicio ex02 – *Brain & Deep Copy*

### 🎯 Objetivo
Aplicar **composición de clases** y manejar correctamente la **copia profunda (deep copy)** de recursos dinámicos.

### 💡 Descripción
Se define una clase abstracta `Animal` con método `makeSound()` puro, y clases derivadas `Dog` y `Cat` que contienen un objeto `Brain`.  
`Brain` tiene un array de 100 ideas (`std::string ideas[100]`).  
El reto consiste en implementar correctamente el **constructor de copia**, el **operador de asignación** y el **destructor** para evitar fugas o duplicaciones erróneas de memoria.

```cpp
class Brain {
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);
    ~Brain();
};
```

```cpp
class Animal {
protected:
    std::string type;
public:
    Animal();
    virtual ~Animal();
    virtual void makeSound() const = 0; // Clase abstracta
};
```

```cpp
class Dog : public Animal {
private:
    Brain* brain;
public:
    Dog();
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    ~Dog();
    void makeSound() const;
};
```

### 💡 Ejemplo de copia profunda
```cpp
Dog::Dog(const Dog& other) : Animal(other) {
    this->brain = new Brain(*other.brain);
}
```

### 🧠 Conceptos aprendidos
- Cómo implementar correctamente el **Rule of Three**:  
  `constructor de copia`, `operador de asignación`, y `destructor`.  
- Diferencia entre **copia superficial (shallow)** y **copia profunda (deep)**.  
- Aplicación del principio **RAII** (Resource Acquisition Is Initialization).  
- Uso de punteros dinámicos controlados para mantener independencia entre instancias.

---

## 📊 Diagrama CPP04

```mermaid
graph TD
    A[Animal (abstract)] --> B[Dog]
    A --> C[Cat]
    B --> D[Brain]
    C --> E[Brain]
    F[WrongAnimal] --> G[WrongCat]
```

---

## 🧾 Resumen CPP04

| Concepto | Descripción |
|-----------|-------------|
| Clases abstractas | Sirven como interfaces; no pueden instanciarse |
| Funciones virtuales | Permiten redefinir métodos en clases derivadas |
| Polimorfismo dinámico | Comportamiento dependiente del tipo real del objeto |
| Composición | Clases que contienen otras clases como atributos |
| Deep Copy | Copia completa de objetos con memoria dinámica |
| Rule of Three | Constructor de copia, operador de asignación, destructor |
| Destructor virtual | Garantiza destrucción correcta en jerarquías polimórficas |

💡 **CPP04** cierra el ciclo de fundamentos de C++ en 42, unificando todos los principios de la Programación Orientada a Objetos.  
Con este módulo, el estudiante está preparado para afrontar diseños complejos, jerarquías extensibles y el uso responsable de memoria dinámica.
