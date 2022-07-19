#include<stdio.h>

main()
{
    char ss[]="sozib hossain";
    int i,j=0,k;


    for(;;){
    for(i=j;i<15;i++){
        if(i<14){
            system("cls");
            printf("%c",ss[i]);
        }
        else
            j=0;
    }
    }
}
