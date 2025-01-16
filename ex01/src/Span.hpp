/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:12:37 by ycheroua          #+#    #+#             */
/*   Updated: 2025/01/16 22:45:16 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASUFIND_HPP
#define EASUFIND_HPP


#include <exception>
#include <list>
#include <iostream>
#include <vector>

class Span
{
	private:
		std::vector<int> numbers;
		unsigned int size;
		
		
	public:
		Span(void);
		Span(unsigned int n);
		Span(const Span& copy);
		~Span();

		Span& operator=(const Span& copy);

		void addNumber(int value);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int shortestSpan(void);				
		unsigned int longestSpan(void);

		class fullContainerException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

};

#endif