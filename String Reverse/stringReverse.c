#include<stdio.h>
#include<string.h>
/*
    string reverse printing
    input: string
    output: reverse string
*/

int main(){
    char name[50];
    gets(name);
    int size=strlen(name);
    //printf("%d", size);
    int count;
    for(count=size-1;count>=0;count--){
        printf("%c",name[count]);
    }


    return 0;
}
