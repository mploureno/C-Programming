#include<stdio.h>
int main(){
    int array[]={5,10,25,2,36,69,87,59,45,69};
    int size=10;
    int *ptr;
    ptr=&array;
    int count, count2;

    //Basic Bubble Sort
    for(count=0;count<size-2;count++){
        for(count2=0;count2<size-1;count2++){
            if(*(ptr+count2)>*(ptr+count2+1)){
                int swap=*(ptr+count2+1);
                *(ptr+count2+1)=*(ptr+count2);
                *(ptr+count2)=swap;
            }
        }
    }
    //print
    for(count=0;count<size;count++){
        printf("%d ",*(ptr+count));
    }


    return 0;
}
