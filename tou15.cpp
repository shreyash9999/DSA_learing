#include<iostream>
using namespace std;

// to compile the data of same variables we can use array but wh if we dont have same type of datatypes so for that purpose we use Structures, Unions, Enums
struct employee
// typedef "struct employee" ::: here type means instead of "struct employee" we can say it as "ep"
{
    /* data */
    int eId;
    char favChar;
    float salary;
};
// union is use to allocate better membory in comp. i.e if u have different data types and wants to use one a time only the unioun just skipps the other 3 and stores the one requested and same goes on

union money
{
    /* data */
    int rice;
    char elem;
    float amout;
};

int main(){
    struct employee pega;
    pega.eId = 1;
    pega.favChar = 'h';
    pega.salary = 12333333;

    cout<<pega.favChar<<endl;

    union money m1;
    m1.rice = 12332;
    cout<<m1.rice<<endl;
    //using enum we can get the index number of the any charater in list
    
    enum Meal{breakfast, lunch, dinner};
    cout<<breakfast<<endl;//enum will give the values for the breakfast... , like as that of 0,1,2,3,... 
    Meal m1 = lunch;
    cout<<m1;//here enum creates a datatype called Meal in which we can store the terms as follows also will be given the number as from 0 till the given number later we can make variables of it like as that of m1 and the 
 
    return 0;
}


