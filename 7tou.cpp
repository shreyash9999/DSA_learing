#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"What's  your age?"<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"Your 18 years old."<<endl;
        break;
    case 22:
        cout<<"Youe 22 years old."<<endl;
        break;
    case 33:
        cout<<"Your 33 years old."<<endl;
        break;
    default:
    cout<<"No special Allowed."<<endl;
        break;
    return 0;
    }
    

}