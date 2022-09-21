#include<bits/stdc++.h>
using namespace std;

int main(){
    //Declaration:
    int number[15];

    //Initialization:
    int array1[3] = {2, 4, 5};
    cout << array1[2] << endl;

    //Initialize with zero:
    int array [10] = {0};
    cout << array[9] << endl;

    //Initializing all locations with 5 [not possible with below line]
    int fifth[5] = {5};
    for (int i = 0; i < 5; i++)
    {
        cout << fifth[i] << " ";
    }
    cout << endl;
    
    //Initialize with other num:
    int arr[10];
    fill_n(arr,10,5);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    

    int third[3] = {2, 7};
    cout << "Printing the array" << endl;
    //print an array:
    for (int i = 0; i < 3; i++)
    {
        cout << third[i] << " ";
    }
    cout << endl;
    

    //Accessing an array:
    cout << "Value at 1 index " << number [1] << endl;

    cout << endl << "Everything is Fine" << endl << endl;

    cout << "Value at 20 index " << number [20] << endl;
    return 0;
}