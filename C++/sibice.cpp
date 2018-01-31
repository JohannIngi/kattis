#include <iostream>
#include <cmath>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
    vector<int> inputVec;
    int number = 0, width = 0, height = 0, input = 0, pythagoras = 0;
    cin >> number;
    cin >> width;
    cin >> height;
    pythagoras = sqrt(pow(width, 2) + pow(height, 2));
    
    for (int i = 0; i < number; i++){
        cin >> input;
        inputVec.push_back(input);
    }
    for (int i = 0; i < inputVec.size(); i++){
        if (inputVec[i] <= pythagoras) {
            cout << "DA" << endl;
        }
        else {
            cout << "NE" << endl;
        }
    }
    return 0;
}