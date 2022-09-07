/*
    n = 4
    4444444
    4333334
    4322234
    4321234
    4322234
    4333334
    4444444

    Observations and steps:
        Divide pattern into upper and lower:
            Total number of rows to be printed = 2 * n - 1
            upper:
                1. Outer loop goes from i = n to 1
                2. print sequence from n to (i + 1)
                3. On ith row print i, (2 * i - 1) number of times
                4. print sequence from (i + 1) to n
            lower:
                1. Outer loop goes from i = 2 to n
                2. print sequece from n to (i + 1)
                3. on ith row print i, (2 * i - 1) number of times 
                4. print sequence from (i + 1) to n
*/

# include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Upper
    for(int i = n; i >= 1; i--)
    {
        // print sequence from n to i + 1
        for(int j = n; j >= (i + 1); j--)
            cout << j;
        // print i, 2 * i - 1 times
        for(int j = 1; j <= (2 * i - 1); j++)
            cout << i;
        // print sequence from (i + 1) to n
        for(int j = (i + 1); j <= n; j++)
            cout << j;
        cout << endl;
    }

    // Lower
    for(int i = 2; i <= n; i++)
    {
        // print sequence from n to i + 1
        for(int j = n; j >= (i + 1); j--)
            cout << j;
        // print i, 2 * i - 1 times
        for(int j= 1; j <= (2 * i - 1); j++)
            cout << i;
        // print sequence from (i + 1) to n
        for(int j = (i + 1); j <= n; j++) 
            cout << j;
        cout << endl;
    }
    return 0;
}