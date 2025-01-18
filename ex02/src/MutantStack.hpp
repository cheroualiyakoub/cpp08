/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:12:37 by ycheroua          #+#    #+#             */
/*   Updated: 2025/01/17 17:51:21 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iostream>
#include <iterator>

#ifndef MutantStack_HPP
#define MutantStack_HPP


// std::stack Source Code: In the Standard Template Library (STL), 
// std::stack is typically defined like this:

// template <class T, class Container = std::deque<T>>
// class stack {
// protected:
//     Container c;  // Underlying container
// public:
//     // Interface for stack operations (push, pop, top, etc.)
// };


template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(const MutantStack &copy);
		MutantStack& operator=(const MutantStack &copy);
		~MutantStack(void);

		typedef typename std::stack<T>::container_type::iterator  iterator;
		typedef typename std::stack<T>::container_type::const_iterator  const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator  reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator  const_reverse_iterator;


		iterator begin();
		iterator end();

		const_iterator begin() const;
		const_iterator end() const;

		reverse_iterator rbegin();
		reverse_iterator rend();

		const_reverse_iterator rbegin() const;
		const_reverse_iterator rend() const;
};

#include "MutantStack.tpp"

#endif