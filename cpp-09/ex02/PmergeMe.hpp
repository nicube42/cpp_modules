/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pmergeme.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:46:03 by ndiamant          #+#    #+#             */
/*   Updated: 2023/12/05 15:36:22 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP

# define PMERGEME_HPP

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BLUE	"\033[0;34m"
#define MAG		"\033[0;35m"
#define CYN 	"\033[0;36m"

#define MAX_INT 2147483647

# include <iostream>
# include <fstream>
# include <sstream>
# include <regex>
# include <string>
# include <vector>
# include <deque>
# include <iterator>
# include <stdexcept>
# include <random>
# include <algorithm>
# include <ctime>


class	PmergeMe
{
	private:

	/*
		vector = dynamic array, efficient at the end for insertion and deletion.
		Continuous memory makes vector cache friendly. This is what makes vector more efficient than deque in this algoritm.
	*/
	std::vector<int>	_stack1;

	/*
		deque = double ended queue, serie of fixed size arrays. Efficient at both ends for insertion and deletion.
	*/
	std::deque<int>		_stack2;
	int					_size;
	float				_durationVector;
	float				_durationDeque;
	
	void mergeSortVector(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	void mergeSortDeque(std::deque<int>::iterator begin, std::deque<int>::iterator end);

	public:

		PmergeMe(void);
		PmergeMe(int *arr, int size);
		PmergeMe(const PmergeMe &pmergeme);
		PmergeMe &operator= (const PmergeMe &pmergeme);
		~PmergeMe(void);

		void displayBeforeSort(void);
		void displayAfterSort(void);
		void displayDuration(void);
		void sortDeque(void);
		void sortVector(void);
};

#endif
