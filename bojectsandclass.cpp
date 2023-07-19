#include<iostream>
using namespace std;


class Employee
{
    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int a,int b,int c);
        void getData(){
            cout<<"The value is "<<a<<endl;
            cout<<"The value is "<<b<<endl;
            cout<<"The value is "<<c<<endl;
            cout<<"The value is "<<d<<endl;
            cout<<"The value is "<<e<<endl;

        }
};

void Employee :: setData(int a1, int b1, int c1){
    a= a1;
    b=b1;
    c=c1;
}
int main(){
    Employee harry;
    harry.d = 34;
    //harry.a  = 23; // will give an error as a is been decalared in private 
    harry.e = 56;
    harry.setData(1,2,3);
    harry.getData();
    
    return 0;
}