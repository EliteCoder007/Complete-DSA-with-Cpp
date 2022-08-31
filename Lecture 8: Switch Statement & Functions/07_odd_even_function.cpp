#include<bits/stdc++.h>
using namespace std;

bool isEven(int num)
{
    //odd
    if (num & 1)
    {
        cout << (num&1);
        return 0;
    }
    //even
    return 1;
    
}

int main(){
    
    int num;
    cin >> num;

    if (isEven(num))
    {
        cout << "Number is Even" << endl;
    }
    else
    {
        cout << "Number is Odd" << endl;
    }
    
    

    return 0;
}