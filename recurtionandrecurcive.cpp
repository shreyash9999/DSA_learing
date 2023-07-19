#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1);
}   
int main(){
    int a;
    cout<<"Enter the number? \n";
     cin>>a;
     cout<<"The factorila of given number is : "<<factorial(a)<<endl;
    return 0;
}