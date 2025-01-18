/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:37:52 by ycheroua          #+#    #+#             */
/*   Updated: 2025/01/18 15:12:22 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>


void testSubject1()
{
    std::cout << "=== Test 0,0: Subject Test 1 ===" << std::endl;

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
}

void testSUbject2()
{
    std::cout << "=== Test 0,1: Subject Test 2 ===" << std::endl;
	
	std::list<int> mstack2;
	mstack2.push_back(5);
	mstack2.push_back(17);
	std::cout << *(--mstack2.end()) << std::endl;
	mstack2.erase(--mstack2.end());
	std::cout << mstack2.size() << std::endl;
	mstack2.push_back(3);
	mstack2.push_back(5);
	mstack2.push_back(737);
	//[...]
	mstack2.push_back(0);
	std::list<int>::iterator it = mstack2.begin();
	std::list<int>::iterator ite = mstack2.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::list<int> s(mstack2);
}

void testListComparisonSUbject3() {
    std::cout << "\n=== Test 0,2: Subject Test 3 ,Comparison with std::list ===" << std::endl;

    MutantStack<int> mstack;
    std::list<int> lst;

    mstack.push(5);
    lst.push_back(5);
    mstack.push(17);
    lst.push_back(17);
    mstack.push(3);
    lst.push_back(3);

    std::cout << "MutantStack elements: ";
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "std::list elements: ";
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void testIteration(MutantStack<int> &mstack) {
    std::cout << "\n=== Test 2: Iteration ===" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    std::cout << "Stack elements using iterators: ";
    for (MutantStack<int>::iterator i = it; i != ite; ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}

void testReverseIteration(MutantStack<int> &mstack) {
    std::cout << "\n=== Test 3: Reverse Iteration ===" << std::endl;
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    std::cout << "Stack elements in reverse order: ";
    for (MutantStack<int>::reverse_iterator i = rit; i != rite; ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}

void testCopyAndAssignment(MutantStack<int> &mstack) {
    std::cout << "\n=== Test 4: Copy and Assignment ===" << std::endl;
    MutantStack<int> copyStack(mstack);
    std::cout << "Copy stack elements: ";
    for (MutantStack<int>::iterator i = copyStack.begin(); i != copyStack.end(); ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    MutantStack<int> assignedStack;
    assignedStack = mstack;
    std::cout << "Assigned stack elements: ";
    for (MutantStack<int>::iterator i = assignedStack.begin(); i != assignedStack.end(); ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}

void testEmptyStackBehavior() {
    std::cout << "\n=== Test 5: Empty Stack Behavior ===" << std::endl;
    MutantStack<int> emptyStack;
    if (emptyStack.empty()) {
        std::cout << "Stack is empty as expected." << std::endl;
    }
    try {
        if (!emptyStack.empty()) {
            std::cout << "Top element of empty stack: " << emptyStack.top() << std::endl;
        }
    } catch (const std::exception &e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
}

void testCompatibilityWithSTL(MutantStack<int> &mstack) {
    std::cout << "\n=== Test 6: Compatibility with STL Algorithms ===" << std::endl;
    std::cout << "Original stack elements: ";
    for (MutantStack<int>::iterator i = mstack.begin(); i != mstack.end(); ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    std::cout << "Sorted stack elements using STL: ";
    std::list<int> sortedList(mstack.begin(), mstack.end());
    sortedList.sort();
    for (std::list<int>::iterator i = sortedList.begin(); i != sortedList.end(); ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}

int main()
{

	testSubject1();
	testSUbject2();
	testListComparisonSUbject3();


    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    mstack.pop();
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    testIteration(mstack);
    testReverseIteration(mstack);
    testCopyAndAssignment(mstack);
    testEmptyStackBehavior();
    testCompatibilityWithSTL(mstack);
	return (0);
}
