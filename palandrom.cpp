#include<cstring>
#include<stdio.h>
using namespace std;

int main(){
    char p[7];
    const char *s = "string";
    int i ,len;
    len = strlen(s);
    for(i=0;i<len+1;i++){
        p[i]=s[len-i];
        //printf("%s",p+1);
    }

    printf("%s",p+1);
    //print("%s",strlen(p+1);
    return 0;
}