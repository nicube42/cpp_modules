/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:07:36 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/20 15:03:32 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("(null)"),
                            _hit_points(10),
                            _energy_points(10),
                            _attack_damage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :  _name(name),
                                        _hit_points(10),
                                        _energy_points(10),
                                        _attack_damage(0)
{
    std::cout << "Constructor called with name" << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap) :  _name(claptrap._name),
                                                _hit_points(claptrap._hit_points),
                                                _energy_points(claptrap._energy_points),
                                                _attack_damage(claptrap._attack_damage)
{
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &claptrap)
{
    if (this != &claptrap)
    {
        this->setHitPoints(claptrap._hit_points);
        this->setEnergyPoints(claptrap._energy_points);
        this->setAttackDamage(claptrap._attack_damage);
        this->setName(claptrap._name);
    }
    return *this;
}


ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called" << std::endl;
}




std::string ClapTrap::getName(void)
{
    return (this->_name);
}

int ClapTrap::getHitPoints(void)
{
    return (this->_hit_points);
}

int ClapTrap::getEnergyPoints(void)
{
    return (this->_energy_points);
}

int ClapTrap::getAttackDamage(void)
{
    return (this->_attack_damage);
}

void    ClapTrap::setHitPoints(int hp)
{
    this->_hit_points = hp;
}

void    ClapTrap::setEnergyPoints(int ep)
{
    this->_energy_points = ep;
}

void    ClapTrap::setAttackDamage(int ad)
{
    this->_attack_damage = ad;
}

void    ClapTrap::setName(std::string name)
{
    this->_name = name;
}





void    ClapTrap::attack(const std::string& target)
{
    int tmpEnergy_points = getEnergyPoints();

    if (tmpEnergy_points <= 0)
        std::cout << "Not enough energy. What a save!" << std::endl;
    else
    {
        tmpEnergy_points--;
        setEnergyPoints(tmpEnergy_points);
        std::cout << getName() << " attacked " << target <<
            ", nice shot! He lost " << getAttackDamage() << " hp." << std::endl;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    int         tmpHitPoints = getHitPoints();
    std::string name = getName();

    tmpHitPoints -= amount;
    setHitPoints(tmpHitPoints);

    std::cout << name << " got attacked and took " << amount <<
        " damages." << std::endl;
    if (tmpHitPoints <= 0)
        std::cout << getName() << " died. Savage!" << std::endl;
    else
    {
        std::cout << getName() << " still has " << getHitPoints()
            << " hp. What a play!" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    int tmpHitPoints = getHitPoints();
    int tmpEnergy_points = getEnergyPoints();

    tmpHitPoints += amount;
    if (tmpEnergy_points <= 0)
        std::cout << "Not enough energy. What a save!" << std::endl;
    else
    {
        tmpEnergy_points--;
        setEnergyPoints(tmpEnergy_points);
        setHitPoints(tmpHitPoints);
        std::cout << getName() << " has a total of " << getHitPoints()
                << " hp after healing " << amount << " hp. Calculated." << std::endl;
    }

}
