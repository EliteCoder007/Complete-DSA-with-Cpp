#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
        
    }
    return 1;
    
}

int main(){
    cout << setw(50) << "*** Prime Program***" << endl;

    int n;
    cout << "Enter the Number: ";
    cin >> n;

    if (isPrime(n))
    {
        cout << n << " is Prime";
    }
    else
    {
        cout << n << " is not Prime";
    }
    
    
    return 0;
}