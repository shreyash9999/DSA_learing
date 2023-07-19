#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"What's your age?"<<endl;
    cin>>age;
    if(age<18){
        cout<<"Sorry you can't enter the party!"<<endl;
    }
    else if/*"else if" if know as "or" and you can add no. of else if*/(age==18){
        cout<<"You may enter with student pass!"<<endl;
    }
    else if (age==32){
        cout<<"Heyyy it works ";

    }
    else{
        cout<<"Welcome you welcome in party!"<<endl;
    }
    return 0;
}