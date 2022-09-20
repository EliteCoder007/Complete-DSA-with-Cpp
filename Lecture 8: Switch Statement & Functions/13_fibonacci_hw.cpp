#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    int a = 0;
    int b = 1;
    int nextNum;
    if (n == 1)
    {
        return a;
    }
    if(n == 2)
    {
        return b;
    }

    for (int i = 2; i < n; i++)
    {
        nextNum = a + b;
        a = b;
        b = nextNum;
    }
    return nextNum;
    
    
}

int main(){
    int n;
    cin >> n;

    cout << fibonacci(n);
    return 0;
}