/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:25:51 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 16:56:56 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void)
{
    AMateria *ice = new Ice();
    AMateria *cure = new Cure();
    ICharacter   *chara = new Character("Nicolas");
    ICharacter   *badGuy = new Character("Fred");

    std::cout << "Ice type is: " << ice->getType() << std::endl;
    std::cout << "Cure type is: " << cure->getType() << std::endl;
    chara->equip(ice);
    chara->use(1, *badGuy);
    badGuy->equip(cure);
    badGuy->use(1, *chara);
    chara->unequip(1);
    badGuy->unequip(1);
    return (0);
}
