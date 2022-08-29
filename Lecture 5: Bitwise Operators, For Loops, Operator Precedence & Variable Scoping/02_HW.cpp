#include<bits/stdc++.h>
using namespace std;

int main(){
//Q-01: ans  --> 1.
    // int a, b = 1;
    // a = 10;
    // if (++a)
    // {
    //     cout << b;
    // }
    // else
    //     cout << ++b;

//QS-02: ans --> Stage1 - Inside If 0 3
    // int a = 1;
    // int b = 2;

    // if (a-->0 && ++b > 2)
    // {
    //     cout <<"Stage1 - Inside If ";
    // }
    // else
    // {
    //     cout <<"Stage2 - inside else ";
    // }
    // cout << a << " " << b << endl;


//QS-03: ans --> 100.
    // int number = 3;
    // cout << (25 * (++ number));


//QS-04: ans --> 13.
    int a = 1;
    int b = a++;
    int c = ++a;
    cout << b;
    cout << c;    
    return 0;
}