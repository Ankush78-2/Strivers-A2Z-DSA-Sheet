/*
    n = 5
    A
    BB
    CCC
    DDDD
    EEEEE

    Steps:
    1. Declare character variable(c) to A
    2. Outer loop goes from 1 to n (i)
    3. Inner loop goes from 1 to i (j)
    4. After inner loop increment c
*/

# include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char c = 'A';

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++) 
            cout << c;
        cout << endl;
        c++;
    }

    return 0;
}