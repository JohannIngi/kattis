#include <iostream>

using namespace std;

int main()
{
    unsigned long long a = 0, b = 0, c = 0;
    while (cin >> a >> b){
        if (a < 0 && b < 0){
            return main();
        }
        else{
            if (a > b) {
                c = a - b;
            }
            else {
                c = b - a;
            }
            cout << c << endl;
        }
    }

    return 0;
}