#include <iostream>
#include <cmath>
int main()
{
    int t = 0, k = 0;
    std::cin >> t;

    for(int i = 0; i < t; i++)
    {
        std::cin >> k;
        std::cout << static_cast<unsigned long>(pow (2.0, k)-1) << "\n";
    }


    return 0;
}