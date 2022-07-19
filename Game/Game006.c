#include<stdio.h>
int main()
{
    int i,j,p=2;

    for(i=0;i<10;i++){
            for(j=0;j<100;j++){

        if(i==1 && (j%6==0 || j%6==1))
           printf("*");



        else if(i==2){
            if(p==3){
                printf("*");
                p=0;
            }
            else{
                printf(" ");
                p++;
            }
        }


       else if(i==3 &&(j%3==0 || j%3==1) && j>1)
            printf("*");
        else
            printf(" ");
       }
       printf("\n");
    }
    return 0;
}
