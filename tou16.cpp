#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if (a==b && a!=0 && b!=0 ){
            cout<<"Yes"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
} 