#include<iostream>
#include<string>
using namespace std;



class bianary{
        string s;
        // BY default class members are private
        public:
            void read(void);
            void chk_bin(void);
            void onces(void);
            void display(void);
};
void bianary :: read(void){
    cout<<"Enter a bianary number ";
    cin>>s;
}
void bianary :: chk_bin(void){
    for (int i = 0; i< s.length(); i++)
    {
            if (s.at(i)!='0' && s.at(i) != '1'){
               cout<<"INcorrect binnary formate"<<endl;
               exit(0); 
            }
    }
    }
void bianary :: onces(void){
    for (int i = 0; i< s.length(); i++)
        {
            if (s.at(i)=='0'){
                s.at(i)= '1';
            }
        else{
                s.at(i)= '0';
            }
        }
}

void bianary :: display(void){
    cout<<"dasplayomg your bianary number: "<<endl;
    for(int i = 0; i< s.length(); i++){
        cout<< s.at(i);
    }
       
}

int main(){
    //class can have methodes and properties
    //Nesting of member function
    bianary d;
    d.display();
    d.read();
    d.chk_bin();
    d.onces();
    d.display();
    return 0;
}