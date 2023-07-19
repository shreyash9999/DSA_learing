#include<iostream>
using namespace std;


class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(void) {counter = 0;}
        void getPrice(void);
        void setPrice(void);
        void displayPrice(void);

};


void Shop :: setPrice(void){
    cout<<"Enter Id of your Item : "<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price of your item : "<<endl;
    cin>>itemPrice[counter];
    counter ++;
}

void Shop :: displayPrice(void){
    for (int i =0; i<counter; i++)
    cout<<"The price of the Item with Id : "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
}

int main(){
    Shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();
    return 0;
}