#include <iostream>

int main()
{
    int X = 0, Y = 0, N = 0;
    std::cin >> X >> Y >> N;
    for (int i = 1; i <= N; i++) {
        if (i % X == 0 && i % Y == 0) {
            std::cout << "Fizzbuzz\n";
            continue;
        }
        else if (i % Y == 0) {
            std::cout << "Buzz\n";
            continue;
        }
        else if (i % X == 0) {
            std::cout << "Fizz\n";
            continue;
        }
        else {
            std::cout << i << "\n";
        }
    }
    return 0;
}