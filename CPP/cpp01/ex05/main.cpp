/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 23:30:47 by aurodrig          #+#    #+#             */
/*   Updated: 2025/04/18 20:18:27 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl a;
	std::string messages[7];
	messages[0] = "DEBUG";
	messages[1] = "OLA";
	messages[2] = "INFO";
	messages[3] = "WARNING";
	messages[4] = "ERROR";
	messages[5] = "OI";
	messages[6] = "";

	for (int i = 0; i < 7; i++)
		a.complain(messages[i]);
}
