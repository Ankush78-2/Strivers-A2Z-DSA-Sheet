/*
    Here, n = 4:    spaces = 2 * n - 2 * i
    1.  1      1    spaces = 6
    2.  12    21    spaces = 4
    3.  123  321    spaces = 2
    4.  12344321    spaces = 0

    Observations:
    1. If n = 4, total number of integers on last line = 8, i.e, a rectangle of 4x8 is formed
    2. Initially from 1st row, number of spaces are 2*n - 2, then in subsequent rows decrease it by 2
    3. Direct formula for spaces is 2 * n - 2 * i, here i is the row number (indexing from 1)
*/

# include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        // print 1st sequence from 1 to i
        for(int j = 1; j <= i; j++) 
            cout << j;

        // print spaces 
        int spaces = 2 * n - 2 * i;
        for(int j = 1; j <= spaces; j++) 
            cout << " ";
        
        // print last subsequence from i to 1
        for(int j = i; j >= 1; j--)
            cout << j;
        cout << endl;
    }

    return 0;
}