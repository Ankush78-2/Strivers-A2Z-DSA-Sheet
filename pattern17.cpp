/*
    Here n = 4,
    1.     A
    2.    ABA
    3.   ABCBA
    4.  ABCDCBA

    Observations:
    1. On 1st line only 1 character
    2. On ith line number of characters = no.of characters on (i - 1)th line + 2
    3. Number of spaces before starting characters on ith line are (n - i)
    4. How to print characters on ith line
        e.g. 3rd line (i = 3 and n = 4)
        a. no.of spaces = (n - i) => spaces = 4 - 3 = 1
        b. print spaces
        c. For every line character sequece start with A, so initialize c = A
        d. initialize number of characters to print using the formula, chars = chars_on_prev_line + 2
        e. initialize innner loop (j) goes from j = 1 to chars
        f. in each iteration print c and increment c till j becomes equal to i
        g. when j goes greater than i, then decrement c and print 
*/

# include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int chars = 1;              // characters on 1st line
    for(int i = 1; i <= n; i++)
    {
        // no.of spaces = n - i
        int spaces = n - i;
        // print spaces
        for(int j = 0; j < spaces; j++) 
            cout << " ";
        
        // print characters
        char c = 'A';
        for(int j = 1; j <= chars; j++)
        {
            cout << c;
            if(j < i)                  // point 4.f ->increment c till j is less than to i
                c++;
            else                       // else decrement 
                c--;
        }
        cout << endl;
        chars += 2;                 // increment chars by 2
    }

    return 0;
}