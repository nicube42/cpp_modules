/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:15:30 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 09:37:24 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal* base_animal = new Animal();
    const WrongAnimal* base_wrong_animal = new WrongAnimal();
    const Animal* cat = new Cat();
    const WrongAnimal* wrong_cat = new WrongCat();
    const Animal* dog = new Dog();

    std::cout << "Type of animal is " << base_animal->getType() << std::endl;
    std::cout << "Type of wrong animal is " << base_wrong_animal->getType() << std::endl;
    std::cout << "Type of cat is " << cat->getType() << std::endl;
    std::cout << "Type of wrong cat is " << wrong_cat->getType() << std::endl;
    std::cout << "Type of dog is " << dog->getType() << std::endl;

    base_animal->makeSound();
    base_wrong_animal->makeSound();
    cat->makeSound();
    wrong_cat->makeSound();
    dog->makeSound();

    delete base_animal;
    delete base_wrong_animal;
    delete cat;
    delete wrong_cat;
    delete dog;
    
    return (0);
}

// int main()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound();
//     j->makeSound();
//     meta->makeSound();
//     return 0;
// }
