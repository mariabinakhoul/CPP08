#include "easyfind.h"
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v;
	v.push_back(1);
	v.push_back(6);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

    try {
        std::vector<int>::iterator it = easyfind(v, 3);
        std::cout << "Found value: " << *it << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}
