#include <iostream>


int convert(char a, char b, char c)
{
    std::string blah = "";
    blah += a;
    blah += b;
    blah += c;

    if( blah == "000")
    {
        return 0;
    }
    else if( blah == "001")
    {
        return 1;
    }
    else if( blah == "010")
    {
        return 2;
    }
    else if( blah == "011")
    {
        return 3;
    }
    else if( blah == "100")
    {
        return 4;
    }
    else if( blah == "101")
    {
        return 5;
    }
    else if( blah == "110")
    {
        return 6;
    }
    else if( blah == "111")
    {
        return 7;
    }
}
int main()
{

    std::string octalnumber;
    std::string abc;
    std::cin >> octalnumber;
    if(1 == octalnumber.length() % 3)
    {
        octalnumber = "00" + octalnumber;
    }
    else if (octalnumber.length() % 3 == 2)
    {
        octalnumber = "0" + octalnumber;
    }

    for(int i = 0; i < octalnumber.length(); i += 3)
    {
        char a = octalnumber[i];
        char b = octalnumber[i+1];
        char c = octalnumber[i+2];
        std:: cout << convert(a, b, c);
    }
    std::cout << "\n";
    return 0;
}