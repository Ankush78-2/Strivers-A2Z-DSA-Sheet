/*
        *
       ***
      *****
     *******
    *********
*/

# include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int stars = 1; // we have declared a variable to keep track of how many stars to print on each row
                   // for row = 1: stars = 1
                   // for row = 2: stars = 2
                   // for row = 3: stars = 5 and so on till row = n
    for(int row = 1; row <= n; row++)
    {
        int spaces = n - row;
        for(int j = 1; j <= spaces; j++) cout << " ";
        for(int j = 1; j <= stars; j++) cout << "*";
        cout << endl;
        stars += 2;     // for every row number of stars are increased by 2
    }
    return 0;
}