/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:08:40 by ndiamant          #+#    #+#             */
/*   Updated: 2023/12/05 17:17:20 by ndiamant         ###   ########.fr       */
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

void	printError(std::string str)
{
	std::cerr << BLUE << "The result of " << RESET << MAG << str << RESET
			<< " is: " << RED << "invalid" << RESET << std::endl;
}

void Rpn::run(const std::string& str)
{
	std::istringstream iss(str);
	std::string token;
	std::string	lastToken = "";
	int i = 0;

	try
	{
		while (iss >> token)
		{
			if (isdigit(token[0]))
			{
				this->_stack.push(std::stoi(token));
				lastToken = token;
			}
			else if (token == "+")
			{	
				if (this->_stack.size() < 2)
				{
					printError(str);
					return;
				}
				int operand2 = this->_stack.top();
				this->_stack.pop();
				int operand1 = this->_stack.top();
				this->_stack.pop();
				if ((!isdigit(operand1) && !isdigit(operand2)) || this->_stack.size() == 0)
					this->_stack.push(operand1 + operand2);
				else
				{
					printError(str);
					return;
				}
				lastToken = token;
			}
			else if (token == "-")
			{
				if (this->_stack.size() < 2)
				{
					printError(str);
					return;
				}
				int operand2 = this->_stack.top();
				this->_stack.pop();
				int operand1 = this->_stack.top();
				this->_stack.pop();
				if ((!isdigit(operand1) && !isdigit(operand2)) || this->_stack.size() == 0)
					this->_stack.push(operand1 - operand2);
				else
				{
					printError(str);
					return;
				}
				lastToken = token;
			}
			else if (token == "*")
			{
				if (this->_stack.size() < 2)
				{
					printError(str);
					return;
				}
				int operand2 = this->_stack.top();
				this->_stack.pop();
				int operand1 = this->_stack.top();
				this->_stack.pop();
				if ((!isdigit(operand1) && !isdigit(operand2)) || this->_stack.size() == 0)
					this->_stack.push(operand1 * operand2);
				else
				{
					printError(str);
					return;
				}
				lastToken = token;
			}
			else if (token == "/")
			{
				if (this->_stack.size() < 2)
				{
					printError(str);
					return;
				}
				int operand2 = this->_stack.top();
				this->_stack.pop();
				int operand1 = this->_stack.top();
				this->_stack.pop();
				if ((operand2 != 0 && (!isdigit(operand1) && !isdigit(operand2))) || this->_stack.size() == 0)
					this->_stack.push(operand1 / operand2);
				else
				{
					printError(str);
					return;
				}
				lastToken = token;
			}
			else
			{
				printError(str);
				return;
			}
			i++;
		}
	int result = this->_stack.top();
	this->_stack.pop();
	std::cout << std::endl << BLUE << "The result of " << MAG << str << RESET
		<< " is: " << RESET << GREEN << result << RESET << std::endl << std::endl;
	}
	catch (std::exception &e)
	{
		printError(str);
		return;
	}
}
