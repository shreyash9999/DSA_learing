#include<iostream>
using namespace std;

//Following is the function created and called !!

//two types of parameters--- 'formal' and actual 'parameters'
int sum(int a, int b)
{//formal parameters a and b will be taking values from actual parameters num1 and num2
    int c = a+b;
    return c;

}
void g(void);//following doesnt takes anything nor gives anything 
//can also write "void g();"

int main()
{// here num1 and num2 are actual paraemeters
    int num1, num2;
    cout<<"enter the numbers?"<<endl;
    cin>>num1;
    cout<<"enter the num? :"<<endl;
    cin>>num2;
    cout<<"the sum is :"<<sum(num1, num2);
    g();
    return 0;

}

//function prototype-------------------------------
//syantax for function prototype---- type function-name (arguments);
//int sum(int a, int b);
// int sum(int a ,b); //=== not acceptable
// int sum(int  , int ); //===also acceptable
//function prototype is some that helps code to search for the function in the code eg. if u create the function befpre main teh code will run but if after the main it wont run so to get rid of this issue function prototype is created.
void g()
{
    cout<<"\nhello good morning";
}