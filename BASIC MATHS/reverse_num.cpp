/*
    N = 123
    o/p: 321
*/

# include <bits/stdc++.h>
using namespace std;

void reverse(int n)
{
    int re = 0;
    while(n > 0)
    {
        int rem = n % 10;
        re = re * 10 + rem;
        n = n / 10;
    }

    cout << re << endl;
}

int main()
{
    int n;
    cin >> n;
    reverse(n);
    return 0;
}

/*
    Working of reverse: reverse(int n)
    let n = 123
    re = 0 -> This is reverse to be formed
    START OF WHILE LOOP:
    iteration 1: n > 0  -> 123 > 0 : yes
        rem = 123 % 10 ==> rem = 3
        re = 0 * 10 + 3 == > re = 3
        n = 123 / 10 ==> n = 12
    iteration 2: n > 0 -> 12 > 0: yes
        rem = 12 % 10 ==> rem = 2
        re = 3 * 10 + 2 ==> re = 32
        n = 12 / 10 ==> n = 1
    iteration 3: n > 0 -> 1 > 0: yes
        rem = 1 % 10 ==> rem = 1
        re = 32 * 10 + 1 ==> re = 321
        n = 1 / 10 ==> n = 0
    iteration 4: n > 0 -> 0 > 0: no
        break while loop
    
    print re

    Time Complexity: O(number of digits)
        Since while loop iterates for number of digits in n
*/