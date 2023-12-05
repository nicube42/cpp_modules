/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:08:40 by ndiamant          #+#    #+#             */
/*   Updated: 2023/12/05 16:21:47 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rpn.hpp"

Rpn::Rpn(void)
{
	
}

Rpn::Rpn(const Rpn &rpn) : _stack(rpn._stack)
{
	
}

Rpn		&Rpn::operator= (const Rpn &rpn)
{
	if (this != &rpn)
	{
		_stack = rpn._stack;
	}
	return (*this);
}

Rpn::~Rpn(void)
{
	
}

void Rpn::run(const std::string& str)
{
	std::istringstream iss(str);
	std::string token;
	std::string	lastToken = "";
	int i = 0;

	while (iss >> token)
	{
		if (isdigit(token[0]))
		{
			this->_stack.push(std::stoi(token));
			lastToken = token;
		}
		else if (token == "+")
		{
			int operand2 = this->_stack.top();
			this->_stack.pop();
			int operand1 = this->_stack.top();
			this->_stack.pop();
			this->_stack.push(operand1 + operand2);
			lastToken = token;
		}
		else if (token == "-")
		{
			int operand2 = this->_stack.top();
			this->_stack.pop();
			int operand1 = this->_stack.top();
			this->_stack.pop();
			this->_stack.push(operand1 - operand2);
			lastToken = token;
		}
		else if (token == "*")
		{
			int operand2 = this->_stack.top();
			this->_stack.pop();
			int operand1 = this->_stack.top();
			this->_stack.pop();
			this->_stack.push(operand1 * operand2);
			lastToken = token;
		}
		else if (token == "/")
		{
			int operand2 = this->_stack.top();
			this->_stack.pop();
			int operand1 = this->_stack.top();
			this->_stack.pop();
			if (operand2 != 0)
				this->_stack.push(operand1 / operand2);
			else
			{
				std::cerr << BLUE << "The result of " << RESET << MAG << str << RESET
					<< " is: " << RED << "invalid" << RESET << std::endl;
				return;
			}
			lastToken = token;
		}
		else
		{
			std::cerr << BLUE << "The result of " << RESET << MAG << str << RESET
				<< " is: " << RED << "invalid" << RESET << std::endl;
			return;
		}
		i++;
	}
	int result = this->_stack.top();
	this->_stack.pop();
	std::cout << std::endl << BLUE << "The result of " << MAG << str << RESET
		<< " is: " << RESET << GREEN << result << RESET << std::endl << std::endl;
}

