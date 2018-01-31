#include <iostream>
#include <string>


int main()
{
    
    int A = 0, B = 0, C = 0;
    int one = 0, two = 0, three = 0;
    std::string abc;

    std::cin >> one >> two >> three;
    
    if (one < two && one < three) {
        A = one;
        if (two < three) {
            B = two;
            C = three;
        }
        else {
            B = three;
            C = two;
        }
    }
    else if (two < one && two < three) {
        A = two;
        if (one < three) {
            B = one;
            C = three;
        }
        else {
            B = three;
            C = one;

        }
    }
    else if (three < one && three < two) {
        A = three;
        if (one < two) {
            B = one;
            C = two;
        }
        else {
            B = two;
            C = one;
        }

    }
    std::cin >> abc;
    if (abc == "ABC") {
        std::cout << A << " " << B << " " << C << "\n";
    }
    else if (abc == "ACB") {
        std::cout << A << " " << C << " " << B << "\n";
    }
    else if (abc == "BAC") {
        std::cout << B << " " << A << " " << C << "\n";
    }
    else if (abc == "BCA") {
        std::cout << B << " " << C << " " << A << "\n";
    }
    else if (abc == "CAB") {
        std::cout << C << " " << A << " " << B << "\n";
    }
    else if (abc == "CBA") {
        std::cout << C << " " << B << " " << A << "\n";
    }
    return 0;
}