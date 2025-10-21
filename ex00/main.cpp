#include "easyfind.h"
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5};
    try {
        std::vector<int>::iterator it = easyfind(v, 3);
        std::cout << "Found value: " << *it << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}
