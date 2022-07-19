#include<stdio.h>
main()
{
    int i,j;
    char ss[50];


    for(i=0;i<41;i++){
        ss[i]=' ';
    }
    ss[i]='\0';


    for(;;){
    for(i=1;i<100;i++){
                system("cls");
                for(j=100;j>=0;j--){
                    if(j==0)
                    printf("***********************************************************************************\n");
                    else if(j==i){
                        printf("\t\t\tOOOO\n\t\t\tOOOO\n\t\t\tOOOO\n");
                    }
                    else if(j==100)
                        printf("***********************************************************************************\n");
                     else
                        printf("\n");
                }
            }
    }
}
