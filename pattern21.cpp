/*
    ****
    *  *
    *  *
    *  *
    ****

    Steps:
    1. define spaces = (n - 1) - 2
    2. on 1st and last row print (n - 1) stars
    3. on remaining rows print 1 star and spaces and a 1 star
*/

# include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int spaces = n - 3;
    for(int i = 1; i <= n; i++)
    {
        if(i == 1 || i == n)
        {
            for(int j = 1; j < n; j++)
                cout << "*";
            cout << endl;
        }
        else
        {
            cout << "*";
            for(int j = 1; j <= spaces; j++)
                cout << " ";
            cout << "*";
            cout << endl;
        }
    }

    return 0;
}