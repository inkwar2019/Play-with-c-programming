#include<stdio.h>
void addition();
void subtraction();
void multiplication();
void divition();
float a,b;

int main()
{
    int i;
    char ss;
    while(1){
        printf("\nnum  Operation  num\n");
        scanf("%f %c %f",&a,&ss,&b);
        i=(int)ss;
        system("cls");
        if(i==43){
            addition();
        }
        else if(i==45){
            subtraction();
        }
        else if(i==42){
            multiplication();
        }
        else if(i==47){
            divition();
        }
        else
            printf("Wrong Operation(%d).\n",i);
    }
    return 0;
}

void addition()
{
    printf("=%f\n",a+b);
}
void subtraction()
{
    printf("=%f\n",a-b);
}
void multiplication()
{
    printf("=%f\n",a*b);
}
void divition()
{
    printf("=%f\n",a/b);
}

