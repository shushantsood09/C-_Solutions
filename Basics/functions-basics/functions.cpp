#include <iostream>
using namespace std;

void printNumber(int num)
{
    num=10;
    cout << "Printing number : " << num << endl;
}

int main()
{

    int num =5;
    printNumber(num);
    cout<<"Before pass by reference : "<<num<<endl;
    return 0;
}