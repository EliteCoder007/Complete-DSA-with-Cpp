#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;

    bool isPrime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
        
    }

    if (isPrime == 0)
    {
        cout << "Not a Prime Number" << endl;
    }
    else
    {
        cout << "Is a Prime Number" << endl;
    }
    
    
    
    return 0;
}