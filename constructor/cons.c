#include<stdio.h>
typedef struct MyCode{
    char name[100];
    int id;
    char course[50]
} MyCode;

struct result{
    char course[50];
    float cgpa;
};

int main(){
    MyCode c[20];
    struct result res[20];
    int count;
    for(count=0;count<5;count++){
        printf("Input Name: ");
        gets(c[count].name);
        printf("Input Course: ");
        gets(c[count].course);
        strcpy(res[count].course, c[count].course);
        printf("Insert CGPA: ");
        scanf("%f",&res[count].cgpa);
        fflush(stdin);
    }
    for(count=0;count<5;count++){
        printf("%s %s %f",c[count].name,res[count].course,res[count].cgpa);
    }

    //strcpy(c.name,"MXZBN");
    //puts(c.name);


    return 0;
}
