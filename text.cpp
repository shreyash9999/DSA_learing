#include<iostream>
using namespace std;

class complex{
public: 
    float real1;
    float real2;
    float img1;
    float img2;

    
    void getvalues(){
        
        cout<<"Give the real num"<<endl;
        cin>>real1;

        cout<<"Give the real num"<<endl;
        cin>>img1;

        cout<<"Give the second real num"<<endl;
        cin>>real2;

        cout<<"Give the second img num"<<endl;
        cin>>img2;
    
    }
    
    complex(){
        cout<<"You have complex number as "<<endl;
    }

    void display(){
        cout<<"the complex numbers are : "<<real1<<" + "<< img1<<"i"<<endl;
        cout<<"the complex numbers are : "<<real2<<" + "<< img2<<"i"<<endl;
    }
    void add(){
        cout<<"Your answere of addition is : " <<real1 + real2<<" + "<<img1 + img2<<"i"<<endl;
    }
     void mul(){
        cout<<"Your answere of multiplication is : " <<real1 * real2<<" + "<<img1 * img2<<"i"<<endl;
    }
     void div(){
        cout<<"Your answere of division is : " <<real1 / real2<<" + "<<img1 / img2<<"i"<<endl;
    }
     void sub(){
        cout<<"Your answere of substraction is : " <<real1 - real2<<" + "<<img1 - img2<<"i"<<endl;
    }
   
}; 
int main(){
    complex num;
    num.getvalues();
    num.display();
    num.add();
    num.sub();
    num.div();
    num.mul();
    return 0;
}