#include<stdio.h>
void Main();
int MAIN();
int fact(int i);

int main(){
    int num;
    printf("Let's try Factorials!");
    scanf("%d",&num);
    printf("%d",fact(num));
    printf("Now access one Function from another!");
    Main();


    return 0;
}
int fact(int i){
    if(i==1){
        return 1;
    }
    else{
        return (i*fact(i-1));
    }
}

void Main(){
    printf("This is a different Main Just like a brother from a different mother :P");
    printf("\n\t\tNow let's call another MAIN!!!");
    MAIN();
    printf("%d",MAIN());
}
int MAIN(){
    printf("\nYou call me and I am responding here from the MAIN!!!\n");
    printf("I have a return value of 5000\nIf you wanna see it, just print it!\n");
    printf("At that case 5000 will be printed after all these messages!\n");
    return 5000;
}
