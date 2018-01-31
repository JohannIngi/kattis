#include <iostream>
#include <string>


int main()
{
    
    std::string first;
    std::string second;
    //std::cout << "max_size: " << first.max_size() << "\n";
    std::cin >> first;
    std::cin >> second;


    if (first.length() > second.length() || first.length() == second.length()) {
        std::cout << "go\n";
    }
    else {
        std::cout << "no\n";
    }

    return 0;
}