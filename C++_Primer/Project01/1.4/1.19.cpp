#include <iostream>

int main()
{
    int v1 = 0, v2 = 0;
    
    std::cout << "Enter two numbers:";
    std::cin >> v1 >> v2;

    if (v2 > v1) {
        int tamp = v1;
        v1 = v2;
        v2 = tamp;
    }

    while (v1 >= v2) {
        std::cout << v1;
        --v1;
    }

    return 0;
}