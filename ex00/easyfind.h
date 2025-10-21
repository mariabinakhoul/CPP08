#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& a, int b)
{
	typename T::iterator it = std::find(a.begin(), a.end(), b);
	if (it == a.end())
		throw std::runtime_error("couldn't find the value in the container.");
	return it;
}



#endif