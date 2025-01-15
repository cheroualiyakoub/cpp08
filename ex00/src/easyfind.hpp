/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:12:37 by ycheroua          #+#    #+#             */
/*   Updated: 2025/01/15 22:01:58 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASUFIND_HPP
#define EASUFIND_HPP


#include <exception>
#include <list>
#include <iostream>


template<typename T>
typename T::const_iterator easyfind(const T &container, int value);


#include "easyfind.tpp"

#endif