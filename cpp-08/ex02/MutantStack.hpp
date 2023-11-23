/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:04:23 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/23 12:01:52 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP

# define MUTANTSTACK_HPP

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"

#define MAX_INT 2147483647

# include <iostream>
# include <string>
# include <stack>
# include <list>
# include <deque>
# include <iterator>
# include <stdexcept>
# include <random>

/*--------------------------------------------------------------------
	We can do this because std::stack doesn't store inside his class
	the content of the container, it uses an underlying container to
	store the data. By default it is deque for std::stack but we can
	chose another. I then access the begin() and end() member
	functions of the underlying container to use them in stack.
---------------------------------------------------------------------*/

template<typename T, typename Container = std::deque<T> >
class	MutantStack : public std::stack<T, Container>
{
	private:

	public:

		MutantStack(void){}

		MutantStack(const MutantStack &mutantstack) : std::stack<T>(mutantstack)
		{
		}

		MutantStack		&operator= (const MutantStack &mutantstack)
		{
			if (this != mutantstack)
			{
				this->c = mutantstack.c;
			}
			return (*this);
		}
		
		~MutantStack(void){}

		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;

		iterator begin()
		{
			return this->c.begin();
		}

		iterator end()
		{
			return this->c.end();
		}

		const_iterator begin() const
		{
			return this->c.begin();
		}

		const_iterator end() const
		{
			return this->c.end();
		}
};

#endif
