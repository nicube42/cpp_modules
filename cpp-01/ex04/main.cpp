/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:10:54 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/18 15:01:51 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	replace_in_new_file(std::string str, char **av)
{
	std::ofstream	outfile;
	int				pos;

	outfile.open(std::string(av[1]) + ".replace");
	if (outfile.fail())
	{
		std::cout << "Error creating new file" << std::endl;
		return (1);
	}
	for (int i = 0; i < (int)str.size(); i++)
	{
		pos = str.find(av[2], i);
		if (pos != -1 && pos == i)
		{
			outfile << av[3];
			i += std::string(av[2]).size() - 1;
		}
		else
			outfile << str[i];
	}
	outfile.close();
	return (0);
}

int	main(int ac, char **av)
{
	std::ifstream	infile;
	std::string		str;
	char			c;

	if (ac != 4)
	{
		std::cout << "Usage: ./sed <filename> <word_to_replace> <new_word>" << std::endl;
		return (1);
	}
	infile.open(av[1]);
	if (infile.fail())
	{
		std::cout << av[1] << ": Couldn't open file" << std::endl;
		return (1);
	}
	while (!infile.eof() && infile >> std::noskipws >> c)
		str += c;
	return (replace_in_new_file(str, av));
}
