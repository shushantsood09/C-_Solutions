#include<iostream>
using namespace std;

void rahul(int x){
    cout<<"rahul value : "<<x<<endl;
}

void suresh(int num){
    cout<<"suresh integer : "<<num<<endl;
    num++;
    rahul(num);
}

void ramesh(int n){
    cout<<"Ramesh Integer : "<<n<<endl;
    suresh(n);
}

int printEven(int n){
    for(int i=2; i<=n; i=i+2){
        cout<< i <<" ";
    }
    return 1;
}


int main(){
    int n =10;
    // ramesh(n);      // Calling of first function.
    printEven(n);

    cout<<"vapas in main"<<endl;
    return 0;
}