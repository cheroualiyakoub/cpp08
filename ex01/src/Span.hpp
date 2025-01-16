/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:12:37 by ycheroua          #+#    #+#             */
/*   Updated: 2025/01/16 17:25:51 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASUFIND_HPP
#define EASUFIND_HPP


#include <exception>
#include <list>
#include <iostream>
#include <list>

class Span
{
	private:
		std::list<int> numbers;
		unsigned int n;
		
		
	public:
		Span(void);
		Span(unsigned int n);
		Span(const Span& copy);
		~Span();

		Span& operator=(const Span& copy);

		void addNumber(unsigned int value);
		unsigned int shortestSpan(void);				
		unsigned int longestSpan(void);

		class NoNumberStoredEX : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class onlyOneNumberStoredEX : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class noSpanCanBeFound : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif