/*
    n = 5
    *        *
    **      **
    ***    ***
    ****  ****
    **********
    ****  ****
    ***    ***
    **      **
    *        *

    Steps:
    1. Divide upper pattern into 2 patterns: Upper Pattern and Lower Pattern
    2. Print patterns in the sequence Upper Pattern and Lower Pattern
    3. Upper Pattern:
        *        *
        **      **
        ***    ***
        ****  ****
        **********
        a. defin spaces = 2 * n - 2
        b. Outer loop goes from i = 1 to n
        c. for every iteration of outer for loop do following:
            1. print i stars (inner loop1: j = 1 to i)
            2. print spaces  (inner loop2: j = 1 to spaces)
            3. print i stars (inner loop3: j = 1 to i)
            4. decrement spaces by 2 (spaces -= 2)
    3. Lower Pattern:
        ****  ****
        ***    ***
        **      **
        *        *
        a. define spaces = 2
        b. outer loop goes from i = n - 1 to 1
        c. for every iteration of outer loop do following:
            1. print i stars (inner loop1: j = 1 to i)
            2. print spaces  (inner loop2: j = 1 to spaces)
            3. print i stars (inner loop3: j = 1 to i)
            4. increment spaces by 2 (spaces += 2)
*/

# include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Upper Pattern:
    int spaces = 2 * n - 2;
    for(int i = 1; i <= n; i++)
    {
        // print i stars: inner loop1
        for(int j = 1; j <= i; j++)
            cout << '*';
        // print spaces: inner loop2
        for(int j = 1; j <= spaces; j++)
            cout << ' ';
        // print i stars: inner loop3
        for(int j = 1; j <= i; j++)
            cout << '*';
        spaces -= 2;
        cout << endl;
    }

    // Lower Pattern:
    spaces = 2;
    for(int i = n - 1; i >= 1; i--)
    {
        // print i stars: inner loop1
        for(int j = 1; j <= i; j++)
            cout << '*';
        // print spaces: inner loop2
        for(int j = 1; j <= spaces; j++)
            cout << ' ';
        // print stars: inner loop3
        for(int j = 1; j <= i; j++)
            cout << '*';
        spaces += 2;
        cout << endl;
    }
    return 0;
}