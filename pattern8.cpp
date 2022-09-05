/*
    Observation1 : For ith line number of stars = i + (i - 1)
    5.   *********   --> for 5th line number of stars = 5 + 4 = 9
    4.    *******    --> for 4th line number of stars = 4 + 3 = 7
    3.     *****     --> for 3rd line number of stars = 3 + 2 = 5
    2.      ***      --> for 2nd line number of stars = 2 + 1 = 3
    1.       *       --> for 1st line number of stars = 1 + 0 = 1

    Observation2 : For ith line number of spaces before stars = n - i
    for n = 5
    5.  *********   --> for 5th line number of spaces = 5 - 5 = 0
    4.  _*******    --> for 4th line number of spaces = 5 - 4 = 1
    3.  __*****     --> for 3rd line number of spaces = 5 - 3 = 2
    2.  ___***      --> for 2nd line number of spaces = 5 - 2 = 3
    1.  ____*       --> for 1st line number of spaces = 5 - 1 = 4   
*/

# include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = n; i >= 1; i--)
    {
        // number of spaces = n - i
        int spaces = n - i;
        // print spaces
        for(int j = 0; j < spaces; j++) cout << " ";

        // number of stars = i + (i - 1) for ith line
        int stars = i + (i - 1);
        // print stars
        for(int j = 0; j < stars; j++) cout << "*";
        cout << endl;
    }
    return 0;
}