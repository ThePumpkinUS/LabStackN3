#include <iostream>
#include "stdlib.h"

#include "header.hpp"

int main()
{
    std::cout << "=== Test1 ===\n";
    {
        GrandStack<int> s(5);
        int data[] = { 10, 20, 30, 40, 50 };
        s.StackNum(data);

        std::cout << s << "\n\n";
    }

	return 0;


}

