/*
Before Update : 3 4 5 
Inside the function : 120 4 5 
Going back to main function
After Update : 120 4 5 

Why updated??
-->Because main function  gives base address of array to update function 
*/

#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void updateArray(int arr[], int size)
{
    cout << "Inside the function : ";

    //Updating array's first element
    arr[0] = 120;
    printArray(arr, 3);

    cout << "Going back to main function" << endl;

}

int main(){
    int arr[3] = {3,4,5};

    cout << "Before Update : ";
    printArray(arr, 3);

    updateArray(arr, 3);

    cout << "After Update : ";
    printArray(arr, 3);



    return 0;
}