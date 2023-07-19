#include<stdio.h>
using namespace std;

int *g(){
    static int x=10;
    return &x;
}

int main(){
    int *p;
    p=g();
    printf("%d",p);
    return 0;
}