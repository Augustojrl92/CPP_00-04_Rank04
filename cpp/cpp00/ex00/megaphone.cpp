/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 12:12:46 by aurodrig          #+#    #+#             */
/*   Updated: 2025/03/23 12:12:47 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include <cctype> 


int main(int argc, char** argv) 
{
    if (argc == 1) 
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
    for (int i = 1; i < argc; ++i) 
    {  
        for (int j = 0; argv[i][j] != '\0'; ++j) 
            std::cout << (char) std::toupper(argv[i][j]);
        if (argv[i] != NULL)
				std::cout << " ";
    }
        std::cout << std::endl;
    }
    return 0;
}
