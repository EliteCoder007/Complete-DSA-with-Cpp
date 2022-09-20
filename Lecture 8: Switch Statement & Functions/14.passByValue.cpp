#include<bits/stdc++.h>
using namespace std;

int dummy(int n)
{
    n++;
    cout << n << endl;
    return n;
}

int main(){
    int n;
    cin >> n;
    int ans = dummy(n);
    cout << n;
    return 0;
}