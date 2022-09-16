#include<bits/stdc++.h>
using namespace std;

int power(int a, int b)
{
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans *= a;
    }
    return ans;
}

int main(){
    //pow(a,b);
    int a, b;
    cin >> a >> b;

    // int ans = 1;
    // for (int i = 0; i < b; i++)
    // {
    //     ans*=a;
    // }
    // cout << ans;

    int answer = power(a, b);
    cout << "Answer is : " << answer <<endl;
    return 0;
}