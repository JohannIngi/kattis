#include <iostream>
#include <bitset>
int main()
{
    std::bitset<42> numbers;
    int n = 0;
    for(int i = 0; i < 10; i++)
    {
        std::cin >> n;
        numbers.set(n%42);
    }
    std::cout << numbers.count();
    return 0;
}