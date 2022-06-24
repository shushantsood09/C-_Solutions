#include <iostream>
using namespace std;
// Linear search of array.
bool search(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // cout<<"Enter the values of arrauy : "<<endl;
    cout << "Enter the size of array " << endl;
    int n;
    cin >> n;
    int arr[n]; // It's a bad pratice.
    // becouse may be whatever value we input in our array and our program doesn't have the amount of memeory in that case code phat jayega...

    // Taking input in a array.
    cout << "Enter array values: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (search(arr, n, 4))
    {
        cout << "Element found!!"<<endl;
    }
    else
    {
        cout << "Element not found!!!"<<endl;
    }
    cout << "Printing the values of array : " << endl;
    printArray(arr, n);
    return 0;
}
