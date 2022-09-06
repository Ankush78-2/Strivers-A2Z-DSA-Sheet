/*
    1.  A
    2.  AB
    3.  ABC
    4.  ABCD
    5.  ABCDE

    Observation:
    1. On ith row, total i number of characters to be printed
*/

# include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for(int j = 1; j <= i; j++) 
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }

    return 0;
}