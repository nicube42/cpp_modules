/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:15:30 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 14:11:25 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    //const AAnimal* animal = new AAnimal(); Doesn't work because not instantiable
    const AAnimal* cat = new Cat();
    const AAnimal* dog = new Dog();

    std::cout << std::endl;
    std::cout << "Type of cat is " << cat->getType() << std::endl;
    std::cout << "Type of dog is " << dog->getType() << std::endl;

    std::cout << std::endl;
    cat->makeSound();
    dog->makeSound();
    std::cout << std::endl;

    std::cout << "Cat is thinking: ";
    cat->printIdeas();
    std::cout << "Dog is thinking: ";
    dog->printIdeas();
    std::cout << std::endl;

    Cat cat2;
    Cat &cat_ref = cat2;
    Cat copy_cat(cat_ref);
    std::cout << "Copy of cat is thinking: ";
    copy_cat.printIdeas();
    std::cout << std::endl;

    Dog dog2;
    Dog &dog_ref = dog2;
    Dog copy_dog(dog_ref);
    std::cout << "Copy of dog is thinking: ";
    copy_dog.printIdeas();
    std::cout << std::endl;

    std::cout << std::endl;
    delete cat;
    delete dog;

    const AAnimal* (animal_array[4]);
    for (int i = 0; i < 2; i++)
        animal_array[i] = new Cat();
    for (int i = 2; i < 4; i++)
        animal_array[i] = new Dog();
    for (int i = 0; i < 4; i++)
        delete animal_array[i];

    system("leaks polymorphism");
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
