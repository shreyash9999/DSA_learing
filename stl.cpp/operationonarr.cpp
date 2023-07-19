#include<iostream>
#include<array>
using namespace std;


int main(){
    // using the normal array.
    int arr[3] = {1,2,4};
// using stl array
    // array<"data type", number of elements> "name of array"={...};
    array<int,4> a= {1,3,4,5};
    int size = a.size();
    for (int i = 0; i<size;i++){
        cout<<a[i]<<endl;
    }
    // emenmets at second index
    cout<<"Element at 2nd index: "<<a.at(2)<<endl;
    cout<<"empty or not empty: "<<a.empty()<<endl;
    cout<<"1st element: "<<a.front()<<endl;
    cout<<"last element: "<<a.back()<<endl;
    return 0;
}