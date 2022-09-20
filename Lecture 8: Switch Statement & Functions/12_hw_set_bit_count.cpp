#include <bits/stdc++.h>
using namespace std;

int setBit(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int setA = setBit(a);
    // cout << setA << endl;
    int setB = setBit(b);
    // cout << setB << endl;
    int ans = setA + setB;
    cout << ans << endl;
    return 0;
}