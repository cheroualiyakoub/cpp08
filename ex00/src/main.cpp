/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:37:52 by ycheroua          #+#    #+#             */
/*   Updated: 2025/01/15 22:20:57 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>
#include <map>

template <typename T>
void callEasy(const T &container, int value)
{
	try
	{
			std::cout << "Found: " << *easyfind(container, value) << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

int main()
{
    try {
		//change list to any other container type except for map and set (deque or vector)
        std::vector<int> vec = {1, 2, 3, 4, 5};
        callEasy(vec, 3);

        std::list<int> lst = {10, 20, 30, 40};
        callEasy(lst, 10);

        std::deque<int> deq = {100, 200, 300};
        callEasy(deq, 3);
    }
    catch (const std::exception& e)
	{
        std::cerr << e.what() << "\n";
    }
	return (0);
}
