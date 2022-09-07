/*
    n = 5:
    1.  **********
    2.  ****  ****
    3.  ***    ***
    4.  **      **
    5.  *        *
    6.  *        *
    7.  **      **
    8.  ***    ***
    9.  ****  ****
    10. **********

    Observations:
    1. Divide the pattern into 2 parts: Upper pattern and lower pattern
        a. Upper Pattern
            **********
            ****  ****
            ***    ***
            **      **
            *        *
        b. Lower Pattern
            *        *
            **      **
            ***    ***
            ****  ****
            **********
    2. Print first Upper Pattern then Lower Pattern
    3. Print Upper Pattern:
        1. define spaces = 0
        1. outer loop goes from i = n to 1
        3. for every iteration of outer loop do following: 
            a. initial sequence of stars: print i stars
            b. print spaces: print spaces and increment by 2 (spaces += 2)
            c. print sequence of stars: print i stars
    4. Print Lower Pattern:
        1. define spaces = 2 * n - 2
        2. outer loop goes from i = 1 to n
        3. for every iteration of outer loop do following:
            a. print initial sequence of stars: inner loop j = 1 to i and print stars
            b. print spaces and decrement by 2
            c. print sequence of stars: inner loop j = 1 to i and print stars
*/

# include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Upper Pattern:
    int spaces = 0;
    for(int i = n; i >= 1; i--)
    {
        // print i stars
        for(int j = 1; j <= i; j++) 
            cout << '*';
        // print spaces and increment by 2
        for(int j = 1; j <= spaces; j++)
            cout << " ";
        spaces += 2;
        // print i stars
        for(int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    // Lower Pattern
    spaces = 2*n - 2;
    for(int i = 1; i <= n; i++)
    {
        // print stars
        for(int j = 1; j <= i; j++)
            cout << "*";
        //print spaces and decrement by 2
        for(int j = 1; j <= spaces; j++)
            cout << " ";
        spaces -= 2;
        // print stars
        for(int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}