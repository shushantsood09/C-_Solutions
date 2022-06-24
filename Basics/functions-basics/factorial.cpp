#include<iostream>
using namespace std;
int factorial(int n){
    int ans =1;
    for(int i=n; i>=1; i--){
        ans = ans*i;
    }
    return ans;
}
int main(){
    int n =25;
    int fact = factorial(n);
    cout<<"Value of factorial is : "<<fact;
    return 0;
}