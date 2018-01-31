#include <iostream>

using namespace std;

int main()
{
    int R1 = 0, R2 = 0, S = 0;
    cin >> R1 >> S;
    if (R1 > 1001 || R1 < -1001 || S > 1001 || S < -1001)
    {
        cout << "Not a valid number." << endl;
        cout << "Start again!" << endl;
        return main();
    }
    else
    {
        R2 = (2 * S) - R1;
        cout << R2 << endl;
    }
    return 0;
}