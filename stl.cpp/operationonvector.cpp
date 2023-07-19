#include<iostream>
#include<vector>
using namespace std;
// vector in an dynnamic array
//its dynamic vector means that it can decrease or increase the size of the array i.e. if we have the array of 4 and ele are 5 the vector will delect the previous array and make the doule one.

int main(){
    vector <int> v;
    cout<<"Size: "<<v.capacity()<<endl;

    return 0;
}