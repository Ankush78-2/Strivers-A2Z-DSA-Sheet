/*
    Let n = 5
    1.  E
    2.  D E
    3.  c D E
    4.  B C D E
    5.  A B C D E

    Steps and Observations:
    1. Outer loop goes from n to 1
    2. Declare character sequence starting with character variable c = A + i
        if i = 5 => c = E
        if i = 4 => c = D
    3. Inner loop starts from j = 0 to n - i
        for each iteration print c and increment c
*/

# include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = n; i >= 1; i--)
    {
        char c = 'A' + i - 1;
        for(int j = 0; j <= (n - i); j++) {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
    return 0;
}