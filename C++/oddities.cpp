#include <iostream>
#include <vector>

int main()
{
    int n = 0, x = 0;
    std::cin >> n;
    std::vector<int> myVec;
    for (int i = 0; i < n; i++) {
        std::cin >> x;
        myVec.push_back(x);
    }
    for (int i = 0; i < myVec.size(); i++) {
        if (myVec[i] % 2 == 0) {
            std::cout << myVec[i] << " is even \n";
        }
        else {
            std::cout << myVec[i] << " is odd \n";
        }
    }
    return 0;
}