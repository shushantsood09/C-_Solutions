#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    cout << "Numbers before swapping : " << endl;
    cout << "a = " << a << " b = " << b << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Numbers after swapping : " << endl;
    cout << "a = " << a << " b = " << b;
}