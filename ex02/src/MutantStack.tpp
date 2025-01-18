/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:12:55 by ycheroua          #+#    #+#             */
/*   Updated: 2025/01/18 15:16:26 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &copy) : std::stack<T>(copy) {}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack &copy)
{
    std::stack<T>::operator=(copy); // Call std::stack's assignment operator
    return (*this); // Return *this to allow chaining of assignments
}

template <typename T>
MutantStack<T>::~MutantStack() {}

// Begin Iterator
// Returns an iterator pointing to the first element of the underlying container (c).
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return (std::stack<T>::c.begin());
}

// End Iterator
// Returns an iterator pointing past the last element of the underlying container (c).
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return (std::stack<T>::c.end());
}

// Begin Iterator (Const Version)
// Returns a constant iterator pointing to the first element of the underlying container.
template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
    return (std::stack<T>::c.begin());
}

// End Iterator (Const Version)
// Returns a constant iterator pointing past the last element of the underlying container.
template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
    return (std::stack<T>::c.end());
}

// Reverse Begin Iterator
// Returns a reverse iterator pointing to the last element of the underlying container.
template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
    return (std::stack<T>::c.rbegin());
}

// Reverse End Iterator
// Returns a reverse iterator pointing before the first element of the underlying container.
template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
    return (std::stack<T>::c.rend());
}

// Reverse Begin Iterator (Const Version)
// Returns a constant reverse iterator pointing to the last element of the underlying container.
template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const
{
    return (std::stack<T>::c.rbegin());
}

// Reverse End Iterator (Const Version)
// Returns a constant reverse iterator pointing before the first element of the underlying container.
template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const
{
    return (std::stack<T>::c.rend());
}
