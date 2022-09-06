/*
    1.  1
    2.  2 3
    3.  4 5 6
    4.  7 8 9 10
    5.  11 12 13 14 15

    Observation:
    1. If end of the ith row is j, then (i + 1)th row starts with (j + 1)
    e.g end of the 3rd row is 6, then 4th row started with 7
    2. On ith row i number of elements to be printed
*/

# include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int prev = 1;                   // Keep track of what is to be printed
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << prev << " ";
            prev++;                 // print and increment
        }
        cout << endl;
    }

    return 0;
}