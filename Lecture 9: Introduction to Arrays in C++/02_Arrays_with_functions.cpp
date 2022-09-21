#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing the array " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "Printing DONE! " << endl;
}

int main()
{

    // Initializing all locations with 5 [not possible with below line]
    int fifth[5] = {5};
    printArray(fifth, 5);

    // Initialize with other num:
    int arr[10];
    fill_n(arr, 10, 5);
    printArray(arr, 10);

    int third[3] = {2, 7};
    printArray(third, 3);

    char ch[5] = {'E', 'l','i','t', 'e'};
    cout << "Printing the array " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << " ";
    }
    cout << endl << "Printing DONE! " << endl;

    double firstDouble[5];
    float firstFloat[5];
    bool firstBool[5];

    return 0;
}