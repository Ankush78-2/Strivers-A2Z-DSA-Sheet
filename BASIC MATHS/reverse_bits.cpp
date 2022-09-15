/*
    Link to the problem: https://practice.geeksforgeeks.org/problems/reverse-bits3556/1
    x = 5
    o/p = 2684354560

    Given problem is for 32 bits, but lets understand this problem for 8 bits, then instead
    of 8 bits, use 32 bits to solve given problem(working is similary for any number of bits).

    x = 6
        binary representation: 00000110
    
    Let us define res = 0
        binary representation: 00000000

    Now apply for loop for 8 bits:
    so, i goes from 1 to 8
    Operation: In each iteration we have to perform right shift on x and left shift on res
    Reason: consider 1st bit of x and 1st bit of res, when we perform above operation for
    8 times, then 1st bit of res is moved to 32th position.

    Whenever we get set bit in x, we increment res by 1

    Dry Run:
    res = 0 (00000000), x = 6(00000110)
    i = 1:
        left shift res -> res is 0, so remains same(00000000)
        check if last bit of x is set(i.e.1st bit)
            if yes: then res = res + 1
            last bit of x = 5 is 0, so, no effect
        right shift x => x = 3(00000011)
    i = 2:
        left shift res -> remains same as res = 0
        here last bit of x is set: res = res + 1 => res = 1(00000001)
        right shift x => x = 1(00000001)
    i = 3:
        left shift res -> 
            initially res = 1(00000001)
            Now res = 2(00000010)
        here last bit of x is set: res = res + 1 => res = 2 + 1 = 3(00000011)
        right shift x => x = 0(00000000)
    i = 4:
        left shift res->
            initially res = 3(00000011)
            now res = 5(00000110)
        x is 0 so last bit is not set
        right shift x -> no effect
    i = 5:
        left shift res ->
            initially res = 5(00000110)
            now res = 12(00001100)
        x is 0 no last bit is set
        right shift x-> no effect
    i = 6:
        left shift res -> 
            initially res = 12(00001100)
            now res = 24(00011000)
        x is 0, right shift -> no effect
    i = 7:
        left shift res -> initially res = 24(00011000)
        now res = 48(00110000)
        same here
    i = 8:
        left shift res ->
            initially res = 48(00110000)
            now res = 96(01100000)
            same here
    Now i = 8: break
    res is our final answer
    if we see initial binary representation of x = 6(00000110)
    and final binary representation of res = 96(01100000)
    They both are reversed of each other

    Now similar approach can be applied to 32 bits
*/
# include <bits/stdc++.h>
using namespace std;

void reverse(int n)
{
    long long res = 0;
    for(int i = 1; i <= 32; i++)
    {
        res = res << 1;
        if(n & 1)               // check if last bit is set or not
            res = res + 1;
        n = n >> 1;
    }

    cout << res << endl;
}

int main()
{
    int n;  // 32 bit integer
    cin >> n;
    reverse(n);
    return 0;
}