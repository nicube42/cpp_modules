/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:45:00 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 13:48:35 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP

# define BRAIN_HPP

# include <iostream>
# include <string>

class	Brain
{
	private:
        std::string *_ideas;

	public:
        Brain(void);
        Brain(const Brain &brain);

        ~Brain(void);

        Brain  &operator= (const Brain &brain);
        
        const std::string get1Ideas(void);
        void printAddress(void);

};

#endif
