/*
        *
       ***
      *****
     *******
    *********
    *********
     *******
      *****
       ***
        *   
    

    Print upper then print lower
    Logic of upper in pattern7.cpp 
    Login of lower in pattern8.cpp
*/

# include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // UPPER
    for(int i = 1; i <= n; i++)
    {
        // spaces = n - i
        int spaces = n - i;
        // print spaces
        for(int j = 0; j < spaces; j++) cout << " ";
        
        // stars = i + (i - 1)
        int stars = i + (i - 1);
        // print stars
        for(int j = 0; j < stars; j++) cout << "*";
        cout << endl;
    }

    // LOWER
    for(int i = n; i >= 1; i--)
    {
        // spaces = n - i
        int spaces = n - i;
        // print spaces
        for(int j = 0; j < spaces; j++) cout << " ";

        // stars = i + (i - 1);
        int stars = i + (i - 1);
        // print stars
        for(int j = 0; j < stars; j++) cout << "*";
        cout << endl;
    }
    return 0;
}