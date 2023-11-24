/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:08:40 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/24 15:59:58 by ndiamant         ###   ########.fr       */
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
			if (!isdigit(lastToken[0]) || i < 2)
			{
				this->_stack.push(std::stoi(token));
				lastToken = token;
			}
		}
		else if (token == "+")
		{
			if (lastToken == "+" || lastToken == "-" || lastToken == "*" || lastToken == "/")
			{
				std::cerr << "Invalid input, stopped calculation at this spot" << std::endl;
				break;
			}
			int operand2 = this->_stack.top();
			this->_stack.pop();
			int operand1 = this->_stack.top();
			this->_stack.pop();
			this->_stack.push(operand1 + operand2);
			lastToken = token;
		}
		else if (token == "-")
		{
			if (lastToken == "+" || lastToken == "-" || lastToken == "*" || lastToken == "/")
			{
				std::cerr << "Invalid input, stopped calculation at this spot" << std::endl;
				break;
			}
			int operand2 = this->_stack.top();
			this->_stack.pop();
			int operand1 = this->_stack.top();
			this->_stack.pop();
			this->_stack.push(operand1 - operand2);
			lastToken = token;
		}
		else if (token == "*")
		{
			if (lastToken == "+" || lastToken == "-" || lastToken == "*" || lastToken == "/")
			{
				std::cerr << "Invalid input, stopped calculation at this spot" << std::endl;
				break;
			}
			int operand2 = this->_stack.top();
			this->_stack.pop();
			int operand1 = this->_stack.top();
			this->_stack.pop();
			this->_stack.push(operand1 * operand2);
			lastToken = token;
		}
		else if (token == "/")
		{
			if (lastToken == "+" || lastToken == "-" || lastToken == "*" || lastToken == "/")
			{
				std::cerr << "Invalid input, stopped calculation at this spot" << std::endl;
				break;
			}
			int operand2 = this->_stack.top();
			this->_stack.pop();
			int operand1 = this->_stack.top();
			this->_stack.pop();
			this->_stack.push(operand1 / operand2);
			lastToken = token;
		}
		else
		{
			std::cerr << "Invalid input" << std::endl;
			return;
		}
		i++;
	}
	int result = this->_stack.top();
	this->_stack.pop();
	std::cout << result << std::endl;
}

