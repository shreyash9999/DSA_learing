#include<iostream>
using namespace std;

int main(){
    int marks[]= {23,43, 54,89};
    for(int i= 0; i< 4; i++){
        cout<<"The value of marks"<<i<<" is "<<marks[i]<<endl;
    }
    int* p = marks;
    cout<<"the value of *p is "<<*p<<endl;
    cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    return 0;
}