#include <iostream>

int main()
{
    std::cout << "Enter two numbers:";

    int v1 = 0, v2 = 0;

    std::cin >> v1 >> v2;

    std::cout << "The sum of " << v1;           //error ;
              << " and " << v2;                 //error ;
              << " is " << v1 + v2 << std::endl;
    
    return 0;
}