#include<bits/stdc++.h>
using namespace std;

int getMax(int num[], int size)
{
    int maxNum = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        // if (num[i] > maxNum)
        // {
        //     maxNum = num[i];
        // }  

        //Shortcut:
        maxNum = max(maxNum, num[i]);
    }
    //returning maxNum value:
    return maxNum;
    
}
int getMin(int num[], int size)
{
    int minNum = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        // if (num[i] < minNum)
        // {
        //     minNum = num[i];
        // } 

        minNum = min(minNum, num[i]); 
    }
    //returning minNum value:
    return minNum;
    
}

int main(){
    int size;
    cin >> size;

    //Bad Practice:
    // int num[size];

    int num[100];

    //taking input in array:
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "MAXIMUM Value is " << getMax(num, size) << endl;
    cout << "minimum Value is " << getMin(num, size) << endl;

    return 0;
}