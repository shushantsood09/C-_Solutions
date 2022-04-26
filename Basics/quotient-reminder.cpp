#include<iostream>
using namespace std;
int main()
{
    int divisor, divident, quotient, remainder;
    cout<<"Enter divident : ";     // The number which we have to divide.
    cin>>divident;
    cout<<"Enter divisor : ";       // the number which we use to divide.
    cin>>divisor;
    quotient = divident / divisor;
    remainder = divisor % divident;
    cout<<"Quotient is : "<<quotient<<endl;
    cout<<"Remainder is : "<<remainder;
    return 0;
}