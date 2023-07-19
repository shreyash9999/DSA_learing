#include<iostream>
using namespace std;


class Employee{


    int Id;
    static int count;
    public:
        void setData(void){
            cin>>Id;
            count++;
        }
        void getData(void){
            cout<<Id<<endl;
            cout<<"is the count"<<count<<endl;
        }
        static void getCount(void){
            cout<<"the value"<<count<<endl;//static function
        }
};

//Static variable we write  out of class
//need to define the static variable in class
//static variable will take only once the input() and will go on counting.for this eg.)
int Employee :: count = 1000;//Default value will be zero
//same work if we have to do with out static var then we have to set the static var as 0 then it will also have its garbage value... also with out static var it will show all objects count as 1 as all objects will have its own count, where as static var will share with all obects

//--what if you want to start the count from 1000 u need to specifty it in "int Employee :: count ==1000;"

int main(){
    Employee shre, raj, ram, sham;
    // shre.Id = 1;
    // shre.count = 2;
    //cannot do this as ID and count are private
    shre.setData();
    shre.getData();
    Employee :: getCount();

    raj.setData();
    raj.getData();
    Employee :: getCount();

    ram.setData();
    ram.getData();
    Employee :: getCount();

    sham.setData();
    sham.getData();
    Employee :: getCount();
    return 0;
}