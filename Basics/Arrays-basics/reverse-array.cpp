#include <iostream>
using namespace std;

// Function to swap two values.

//Pending...
// void swapOwn(int arr[], int arr1[])
// {
//     int temp = arr[];
// }
// Function to reverse an array.
void reverseArray(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);       // Using in-built swap function.
        // swapOwn(arr[i], arr[j]); // Using my own swap function.
        i++;
        j--;
    }
}
int main()
{
    int arr[] = {3, 5, 6, 7, 2, 9, 1};
    reverseArray(arr, 7);

    // print the array
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}