#include<iostream>
using namespace std;

int main(){
    // pointer --> data type
    // * ----- dereference of operator 
    // & -----address of operator
    int a=3;
    int *b= &a;//int* means pointer variable
    //when we run the code the code will be added into the ram and also it has it address the address we can acess using the concept of pointer.(& is used to get that address).
    //lly the * called as derefrence operator used to get the value out of the address
      // * Address of 
    cout<<"The address of a is: "<<b<<endl;
    //or
    cout<<"The adress at a is: "<<&a<<endl;

    cout<<"value at b is: "<<*b<<endl;
    //or
    cout<<"the value of a is: "<<a<<endl;
    // & Value at

    // A pointer who stores the adress of pointer
    int** c= &b;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The value at address  value at(value at (c)) is "<<**c<<endl;
    return 0;
}
