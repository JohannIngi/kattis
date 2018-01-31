#include <iostream>

int main()
{
    int sum = 0, number = 0;
    for(int i = 0; i < 5; i++)
    {
        int sumOfN = 0;
        for(int j = 0; j < 4; j++)
        {
            int n;
            std::cin >> n;
            sumOfN = sumOfN + n;
        }
        if(sum < sumOfN)
        {
            sum = sumOfN;
            number = i + 1;
        }
    }
    std::cout << number << " " << sum << "\n";
    return 0;
}