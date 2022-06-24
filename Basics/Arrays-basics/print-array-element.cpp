#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void util(int arr[], int size)
{
    arr[0]= 23;
    cout<<"Printing array in UTIL function"<<endl;
    printArray(arr, 5);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    // printArray(arr, 5);
    util(arr, 5);
    cout<<"Printing in main function"<<endl;
}