/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:37:52 by ycheroua          #+#    #+#             */
/*   Updated: 2025/01/16 22:55:13 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Span.hpp"
#include <iostream>
#include <vector>
#include <ctime>  
#include <cstdlib> 

int main() {
    try {
        // Test 1: Basic functionality
        std::cout << "=== Test 1: Basic Functionality ===" << std::endl;
        Span sp(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl; 
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

        // Test 2: Exception when adding numbers beyond capacity
        std::cout << "\n=== Test 2: Exceeding Capacity ===" << std::endl;
        try {
            sp.addNumber(20); // Should throw an exception
        } catch (const std::exception &e) {
            std::cout << "Caught Exception: " << e.what() << std::endl;
        }

        // Test 3: Exception for span calculation with insufficient numbers
        std::cout << "\n=== Test 3: Insufficient Numbers for Span ===" << std::endl;
        Span sp2(5);
        sp2.addNumber(42);
        try {
            std::cout << "Shortest Span: " << sp2.shortestSpan() << std::endl;
        } catch (const std::exception &e) {
            std::cout << "Caught Exception: " << e.what() << std::endl;
        }

        // Test 4: Using a range of iterators
        std::cout << "\n=== Test 4: Adding a Range of Numbers ===" << std::endl;
        Span sp3(10);
        std::vector<int> range = {1, 2, 3, 4, 5};
        sp3.addNumber(range.begin(), range.end());
        sp3.addNumber(10);
        std::cout << "Shortest Span: " << sp3.shortestSpan() << std::endl; 
        std::cout << "Longest Span: " << sp3.longestSpan() << std::endl;

        // Test 5: Performance with large datasets
        std::cout << "\n=== Test 5: Large Dataset ===" << std::endl;
        Span sp4(10000);
        srand(time(0));
        for (int i = 0; i < 10000; ++i) {
            sp4.addNumber(rand());
        }
        std::cout << "Shortest Span: " << sp4.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp4.longestSpan() << std::endl;

        // Test 6: Edge cases
        std::cout << "\n=== Test 6: Edge Cases ===" << std::endl;
        Span sp5(1);
        sp5.addNumber(100);
        try {
            std::cout << "Shortest Span: " << sp5.shortestSpan() << std::endl;
        } catch (const std::exception &e) {
            std::cout << "Caught Exception: " << e.what() << std::endl;
        }
        try {
            std::cout << "Longest Span: " << sp5.longestSpan() << std::endl;
        } catch (const std::exception &e) {
            std::cout << "Caught Exception: " << e.what() << std::endl;
        }

    } catch (const std::exception &e) {
        std::cout << "Unexpected Exception: " << e.what() << std::endl;
    }

    return 0;
}
