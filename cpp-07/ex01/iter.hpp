
#ifndef ITER_HPP

# define ITER_HPP

# include <iostream>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"

template <typename T>

void	iter(const T *array, size_t len, void function(const T &))
{
	for (size_t i = 0; i < len; i++)
	{
		function(array[i]);
	}
}

template <typename T>

void	print_array(const T &value)
{
	std::cout << value << std::endl;
}

#endif
