#include <iostream>
#include <vector>

int main() {
    int N = 0, P = 0;
    std::cin >> N >> P;
    std::vector<std::string> myVec;
    for(int i = 0; i < N; i++)
    {
        std::string stuff;
        std::cin >> stuff;
        myVec.push_back(stuff);

    }
    std::cout << P << std::endl;
    return 0;
}