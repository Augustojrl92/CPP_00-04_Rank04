<!-- Section CPP02 -->
# 🔢 CPP02 – Clases canónicas y sobrecarga de operadores

## 🎯 Objetivo del módulo
Profundizar en el diseño de clases en C++, introduciendo los **constructores canónicos**, la **sobrecarga de operadores**, y el uso de **conversiones implícitas y explícitas**.  
Este módulo busca dominar la **gestión de copias** y la **semántica de valor**, fundamentales para escribir código C++ robusto y seguro.

---

## 🧠 Conceptos teóricos clave
- **Forma canónica de una clase:**  
  Cualquier clase debe definir correctamente su **constructor por defecto**, **constructor de copia**, **operador de asignación** y **destructor** si maneja recursos.
- **Regla de los tres (Rule of Three):**  
  Si una clase necesita uno de los tres (copia, asignación o destructor personalizado), probablemente necesita los tres.
- **Sobrecarga de operadores:**  
  Permite redefinir el comportamiento de operadores (`+`, `-`, `=`, `<<`, etc.) para tipos definidos por el usuario.
- **Conversión de tipos:**  
  Posibilidad de definir constructores o funciones de conversión para adaptar tipos (`int` a `Fixed`, etc.).
- **Encapsulación y coherencia de estado:**  
  Mantener siempre valores válidos dentro de la clase.

---

## 🧩 Ejercicio ex00 – *Fixed-point number (parte 1)*

### 🎯 Objetivo
Implementar una clase `Fixed` que represente números de punto fijo y aplicar los conceptos de **constructores** y **destructores**.

### 💡 Descripción
El primer ejercicio introduce una clase simple con un atributo privado `_rawBits` que almacena un valor entero.  
El objetivo es practicar el ciclo de vida completo de un objeto.

```cpp
class Fixed {
private:
    int _rawBits;
public:
    Fixed();
    Fixed(const Fixed& other);
    ~Fixed();
    Fixed& operator=(const Fixed& other);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};
```

### 🧠 Conceptos aprendidos
- Ciclo de vida de objetos: creación, copia, asignación y destrucción.  
- Diferencias entre **copia superficial** y **profunda**.  
- Uso de `this` para acceder al contexto de la instancia.  
- Introducción al **canon de las cuatro funciones**.

---

## 🧩 Ejercicio ex01 – *Fixed-point number (parte 2)*

### 🎯 Objetivo
Agregar conversión entre **enteros**, **flotantes** y la representación de punto fijo.

### 💡 Descripción
La clase `Fixed` ahora puede construirse desde un `int` o un `float`, convirtiendo los valores a un formato de punto fijo.  
También se implementa `toInt()` y `toFloat()` para convertir en sentido inverso.

```cpp
class Fixed {
private:
    int _fixedPointValue;
    static const int _fractionalBits = 8;
public:
    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    Fixed(const Fixed& other);
    ~Fixed();
    Fixed& operator=(const Fixed& other);

    float toFloat(void) const;
    int toInt(void) const;
};
```

Y la sobrecarga de operador de salida:
```cpp
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
```

### 🧠 Conceptos aprendidos
- Sobrecarga de constructores.  
- Conversiones implícitas entre tipos primitivos y objetos.  
- Sobrecarga del operador `<<` para imprimir objetos.  
- Constantes `static` dentro de la clase.  

---

## 🧩 Ejercicio ex02 – *Fixed-point number (parte 3)*

### 🎯 Objetivo
Implementar **operadores aritméticos y de comparación** en la clase `Fixed`.

### 💡 Descripción
Se añaden operadores como `>`, `<`, `>=`, `<=`, `==`, `!=`, `+`, `-`, `*`, `/` y operadores de incremento (`++`, `--`).

```cpp
bool operator>(const Fixed& other) const;
bool operator<(const Fixed& other) const;
Fixed operator+(const Fixed& other) const;
Fixed operator-(const Fixed& other) const;
Fixed operator*(const Fixed& other) const;
Fixed operator/(const Fixed& other) const;
Fixed& operator++();   // Pre-incremento
Fixed operator++(int); // Post-incremento
```

También se introducen las funciones estáticas:
```cpp
static Fixed& min(Fixed& a, Fixed& b);
static const Fixed& min(const Fixed& a, const Fixed& b);
static Fixed& max(Fixed& a, Fixed& b);
static const Fixed& max(const Fixed& a, const Fixed& b);
```

### 🧠 Conceptos aprendidos
- Sobrecarga de operadores aritméticos y de comparación.  
- Implementación de funciones estáticas.  
- Diferencia entre **pre** y **post** incremento.  
- Diseño orientado a expresividad (`a + b * c`).  
- Encadenamiento de operadores.  

---

## 🧩 Ejercicio ex03 – *Point class*

### 🎯 Objetivo
Combinar la clase `Fixed` en una nueva clase `Point` para representar coordenadas 2D inmutables.

### 💡 Descripción
Cada `Point` contiene dos objetos `Fixed` (`x` y `y`) y se implementa una función `bsp()` (*Binary Space Partitioning*) para determinar si un punto está dentro de un triángulo.

```cpp
class Point {
private:
    const Fixed _x;
    const Fixed _y;
public:
    Point();
    Point(const float x, const float y);
    Point(const Point& other);
    Point& operator=(const Point& other);
    ~Point();

    Fixed getX() const;
    Fixed getY() const;
};
```

La función `bsp()` aplica la fórmula del área para comprobar si un punto está dentro del triángulo:

```cpp
bool bsp(Point const a, Point const b, Point const c, Point const point);
```

### 🧠 Conceptos aprendidos
- **Composición de clases:** una clase utiliza otra.  
- **Inmutabilidad:** uso de `const` para garantizar objetos no modificables.  
- **Operaciones matemáticas con clases personalizadas.**  
- **Reutilización:** integración del trabajo anterior (`Fixed`).  

---

## 📊 Diagrama CPP02
```mermaid
graph TD
    A[Main] --> B[Fixed]
    B --> C[Operadores + - * /]
    B --> D[toInt / toFloat]
    A --> E[Point]
    E -->|usa| B
    E --> F[bsp() función externa]
```

---

## 🧾 Resumen CPP02

| Concepto | Descripción |
|-----------|-------------|
| Forma canónica | Conjunto de funciones básicas: constructor, copia, asignación, destructor |
| Rule of Three | Si una clase necesita uno, probablemente necesita los tres |
| Sobrecarga de operadores | Permite extender operadores para clases personalizadas |
| Conversión de tipos | Constructores y funciones de conversión (`toFloat`, `toInt`) |
| Inmutabilidad | Uso de `const` para proteger datos |
| Composición | Reutilización de clases previas (`Fixed` dentro de `Point`) |

💡 **CPP02** refuerza la comprensión profunda de la estructura de clases en C++, fomentando un estilo limpio, reutilizable y expresivo.