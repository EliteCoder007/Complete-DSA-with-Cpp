#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;

    int i = 2;
    while (i < num)
    {
        if (num % i == 0)
        {
            cout << "Not Prime for "<< i<< endl;
        }
        else
        {
            cout << "Prime for "<< i << endl;
        }
        i++;
        
    }
    
    return 0;
}