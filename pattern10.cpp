/*
    Here n = 5,
    1. *
    2. **
    3. ***
    4. ****
    5. *****
    6. ****
    7. ***
    8. **
    9. *
*/

# include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Print upper: from row 1 to n
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < i; j++) cout << "*";
        cout << endl;
    }

    // Print lower: from row n + 1 to 2 * n
    for(int i = n - 1; i >= 1; i--)
    {
        for(int j = 0; j < i; j++) cout << "*";
        cout << endl;
    }
    return 0;
}