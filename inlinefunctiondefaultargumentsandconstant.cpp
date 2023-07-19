#include<iostream>
using namespace std;

//"inline function"----inline fun ---just replaces the called function with the expression when we have to execute a small function multipal times we can use inline function as that of to same time and comp. processing power but we shoudnt use inline function for larger functions as well 
//when not to use inline function === ricurction, static variable,
//eg static variable
int product(int a, int b)
{
static int c= 0;//will run onces i.e 1st time only
c = c+1;//here as c will get to 1 value the the next time c will get +1 and soo on (in simple c wil go on increasing)
return a*b+c;
}

/*inline int product(int a, int b)
{
return a*b;
}*/

int main(){

    int a,b;
    cout<<"Whast the val: "<<endl;
    cin>>a>>b;
    cout<<"The ans is: "<<product(a,b)<<endl;
    cout<<"The ans is: "<<product(a,b)<<endl;
    cout<<"The ans is: "<<product(a,b)<<endl;
    cout<<"The ans is: "<<product(a,b)<<endl;
    cout<<"The ans is: "<<product(a,b)<<endl;cout<<"The ans is: "<<product(a,b)<<endl;cout<<"The ans is: "<<product(a,b)<<endl;cout<<"The ans is: "<<product(a,b)<<endl;cout<<"The ans is: "<<product(a,b)<<endl;cout<<"The ans is: "<<product(a,b)<<endl;cout<<"The ans is: "<<product(a,b)<<endl;cout<<"The ans is: "<<product(a,b)<<endl;
    return 0;
}
