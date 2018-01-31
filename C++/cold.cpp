#include <iostream>
#include <vector>
int main()
{
    int n = 0, p = 0, counter = 0;
    std::vector<int> tempetures, tempBelow;
    std:: cin >> n;

    for(int i = 0; i < n; i++)
    {
        std:: cin >> p;
        tempetures.push_back(p);
    }
    for(int i = 0; i < tempetures.size(); i++)
    {
        if( tempetures[i] < 0)
        {
            tempBelow.push_back(tempetures[i]);
            counter++;
        }

    }
    std::cout << counter;

    return 0;
}