/*
    1.  1
    2.  0 1
    3.  1 0 1
    4.  0 1 0 1 
    5.  1 0 1 0 1

    Observtions:
    1. For odd row number(like 1, 3, 5, ..) start with 1, and for even start with 0
*/

# include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        int prev;                   // Keep track of what is previously printed on ith row
        // printing 1st number in ith row, based on even or odd row number
        if(i % 2 != 0)
        {
            cout << 1 << " ";
            prev = 1;
        }
        else
        {
            cout << 0 << " ";
            prev = 0;
        }

        // printing rest of the sequence
        for(int j = 1; j < i; j++)
        {
            if(prev == 1)
            {
                cout << 0 << " ";
                prev = 0;
            }
            else
            {
                cout << 1 << " ";
                prev = 1;
            }
        }

        cout << endl;
    }

    return 0;
}