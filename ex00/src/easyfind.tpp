/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:12:55 by ycheroua          #+#    #+#             */
/*   Updated: 2025/01/15 21:43:24 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <exception>

class NotFoundException: public std::exception
{
	public:
			virtual const char *what() const throw()
			{
				return ("Not found");
			}
};

template <typename T>
typename T::iterator easyfind(T container, int value)
{
	typename T::iterator it;
	it = find(container.begin(), container.end(), value);
	if(it == container.end())
		throw (NotFoundException());
	return (it);
}
