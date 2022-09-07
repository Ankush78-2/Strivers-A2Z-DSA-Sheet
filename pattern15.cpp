/*
    n = 5
    ABCDE
    ABCD
    ABC
    AB
    A

    Steps:
    1. Outer loop goes from n to 1 (i)
    2. Declare character variable(ch) to A
    3. Inner loop goes from 1 to i
    4. print ch and increment it
*/

# include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = n; i >= 1; i--)
    {
        char c = 'A';
        for(int j = 1; j <= i; j++)
        {
            cout << c;
            c++;
        }
        cout << endl;
    }

    return 0;
}