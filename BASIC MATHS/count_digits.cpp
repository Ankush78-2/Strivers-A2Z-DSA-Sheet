// Link to the problem: https://practice.geeksforgeeks.org/problems/count-digits5716/1

/*
    Explanation:
        We are given a number N, we have to count the number of digits present in N, that evenly divides N.
        For example, if N = 12 
            Total number of digits in N are 2 (1, 2), and both of them divides N so return 2
        For example, if N = 16
            Total number of digits in N are 2 (1, 6), but 6 cannot divide N and 1 can so return 1
        For example, if N = 23
            Total number of digits in N are 2 (2, 3), but neither 2 nor 3 divides N so return 0

    Approach:
        step1: declare cnt = 0
        step2: for every digit of N, check if it divides N
            if yes: increase count by 1
        step3: return cnt
*/
# include <bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
    int cnt = 0;                // for counting digits
    int t = n;                  // copy value of n into t, so that operations are done on t not on n
    while(t > 0)                
    {
        int rem = t % 10;       // take the last digit of t in rem  
        if(rem != 0 && n % rem == 0)        // check for rem = 0, if rem divides n then increase count
            cnt++;
        t = t / 10;             // remove the last digit of t
    }
    return cnt;
}

int main()
{
    int N;
    cin >> N;
    cout << countDigits(N) << endl;
    return 0;
}
