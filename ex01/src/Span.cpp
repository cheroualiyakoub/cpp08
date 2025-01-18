/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:12:55 by ycheroua          #+#    #+#             */
/*   Updated: 2025/01/16 22:59:21 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void):size(0)
{
	
}

Span::Span(unsigned int value):size(value)
{
	this->numbers.reserve(value);
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span::~Span()
{
	
}

Span& Span::operator=(const Span& copy)
{
	if (this != &copy)
	{
		this->size = copy.size;
		this->numbers = copy.numbers;
	}
	return (*this);
}

void Span::addNumber(const int value)
{
	if (this->numbers.size() >= this->size)
		throw(Span::fullContainerException());
	this->numbers.push_back(value);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (std::distance(begin, end) + this->numbers.size() > this->size)
		 throw(std::logic_error("Not enough space to add all numbers"));
	this->numbers.insert(this->numbers.end(), begin, end);
}

unsigned int Span::shortestSpan(void)
{
    if (this->numbers.size() < 2)
        throw std::logic_error("Not enough numbers to calculate a span.");
    unsigned int shortest = std::numeric_limits<unsigned int>::max();
	unsigned int diff = shortest - std::numeric_limits<unsigned int>::min();
	std::vector<int> sorted = this->numbers;
    std::sort(sorted.begin(), sorted.end());
    for (size_t i = 1; i < sorted.size(); ++i) 
	{
		diff = sorted[i] - sorted[i - 1];
        if (diff < shortest)
            shortest = diff;
    }
    return shortest;
}

unsigned int Span::longestSpan(void)
{
  if (this->numbers.size() < 2)
        throw std::logic_error("Not enough numbers to calculate a span.");
    int minElement = *std::min_element(this->numbers.begin(), this->numbers.end());
    int maxElement = *std::max_element(this->numbers.begin(), this->numbers.end());
    return maxElement - minElement;
}

const char *Span::fullContainerException::what() const throw()
{
	return ("Span container is full. Cannot add more numbers.");
}
