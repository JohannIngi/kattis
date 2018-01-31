#include <iostream>
int main()
{
    std::string word;
    std::cin >> word;
    for (char c : word) {
        if (('A' <= c) && (c <= 'Z')) {
            std::cout << c;
        }
    }
    std::cout << "\n";

    return 0;
}