/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:43:23 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/06 10:58:51 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;

    i = 0;
    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (ac > 1 && av && av[++i])
    {
        j = -1;
        while (av[i][++j])
            std::cout << (char)std::toupper(av[i][j]);
    }
    std::cout << std::endl;
}
