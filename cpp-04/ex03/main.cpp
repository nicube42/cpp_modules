/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:25:51 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 22:53:58 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main(void)
{
    IMateriaSource  *src = new MateriaSource();
    AMateria *ice = new Ice();
    AMateria *cure = new Cure();
    ICharacter   *chara = new Character("Nicolas");
    ICharacter   *badGuy = new Character("Fred");

    std::cout << std::endl;
    src->learnMateria(ice);
    src->learnMateria(cure);
    std::cout << "Ice type is: " << ice->getType() << std::endl;
    std::cout << "Cure type is: " << cure->getType() << std::endl;
    std::cout << std::endl;


    std::cout << std::endl;
    AMateria    *ice2 = src->createMateria("ice");
    AMateria    *cure2 = src->createMateria("cure");
    std::cout << std::endl;

    std::cout << std::endl;
    chara->equip(ice);
    chara->use(0, *badGuy);
    badGuy->equip(cure);
    badGuy->use(0, *chara);
    chara->equip(cure2);
    badGuy->equip(ice2);
    chara->use(1, *badGuy);
    badGuy->use(1, *chara);
    chara->unequip(1);
    badGuy->unequip(1);
    chara->unequip(0);
    badGuy->unequip(0);
    std::cout << std::endl;
    
    delete chara;
    delete badGuy;

    system("leaks polymorphism");
    
    return (0);
}

// int main()
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
//     ICharacter* me = new Character("me");
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     ICharacter* bob = new Character("bob");
//     me->use(0, *bob);
//     me->use(1, *bob);
    
//     delete bob; delete me; delete src;
//     return 0;
// }
