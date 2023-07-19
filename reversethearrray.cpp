#include<bits/stdc++.h>
using namespace std;

void reverse_arr(int arr[], int start, int end){
    while (start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
};

void print_arr(int arr[],int n){
    for (int i=0; i<n;i++)
        cout<<arr[i]<<" ";
};

int main()
{
    int arr[]= {1,2,3,4,5,6,7,8};
    //cout<<sizeof(arr)<<" "<<sizeof(arr[0]);
    int n = sizeof(arr)/sizeof(arr[0]);

    print_arr(arr,n);
    reverse_arr(arr,0, n-1);
    cout<<"\n your reversed array is: "<<endl;
    print_arr(arr,n);



    return 0;
}