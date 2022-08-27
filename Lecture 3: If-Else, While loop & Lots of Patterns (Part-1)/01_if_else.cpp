#include<bits/stdc++.h>
using namespace std;

int main(){
    // int a;
    // cin >> a;

    //cout << " Value of a is : " << a << endl;

    //if a is positive:
   /* 
   if(a > 0)
    {
        cout << "A is Positive" << endl;
    }
    else
    {
        cout << "A is Negative" << endl;
    }
    
   int a, b;
   //cin --> space , tab, enter doesn't count.
   //cin >> a >> b;
   a = cin.get();
   //cin.get() --> counts space , tab, enter.

   cout << "Value of a and b is " << a <<" "<< b << endl;


    int a, b;
    cout <<"Enter the value of a"<< endl;
    cin >> a;
    cout <<"Enter the value of b"<< endl;
    cin >> b;

    if (a > b)
    {
        cout << "A is greater" << endl;
    }
    if (b > a)
    {
        cout << "B is greater" << endl;
    }

    int a;
    cout <<"Enter the value of a"<< endl;
    cin >> a;

    if (a > 0)
    {
        cout << "A is Positive";
    }
    else if(a < 0)
    {
        cout << "A is Negative";
    }
    else
    {
        cout << "A is Zero";
    }
*/
    char ch;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout <<"This is Lowercase";
    }
    else if (ch >= 'A' && ch <= 'Z')        
    {
        cout <<"This is Uppercase";
    }
    else
    {
        cout <<"This is Number";
    }
    
    

    return 0;
}