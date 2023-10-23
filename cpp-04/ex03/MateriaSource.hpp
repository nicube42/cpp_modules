/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:17:05 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 17:20:00 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP

# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class	MateriaSource
{
    private:
		AMateria	*(_inventory[4]);

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &materiasource);
		~MateriaSource();
		MateriaSource & operator=(MateriaSource const & ref);
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);
};

#endif
