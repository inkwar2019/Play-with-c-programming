#include<stdio.h>
main()
{
    int i,j,p=0;
    char ss[50];
    for(i=0;i<41;i++){
        ss[i]=' ';
    }
    ss[i]='\0';


    for(;;){
        if(p==0){

            for(i=29;i>0;i--){
                system("cls");
                for(j=0;j<=30;j++){
                    if(j==0)
                        printf("***********************************************************************************\n");
                    else if(j==i){
                        printf("%s OO\n%sOOO\n%sOOO\n%s OO",ss,ss,ss,ss);
                    }
                    else if(j==30)
                        printf("***********************************************************************************\n");
                    else
                        printf("\n");
                }
            }
            p=1;
        }

        else if(p==1){

        for(i=1;i<30;i++){
                system("cls");
                for(j=30;j>=0;j--){
                    if(j==0)
                    printf("***********************************************************************************\n");
                    else if(j==i){
                        printf("%s OO\n%sOOO\n%sOOO\n%s OO",ss,ss,ss,ss);
                    }
                    else if(j==30)
                        printf("***********************************************************************************\n");
                     else
                        printf("\n");
                }
            }
            p=0;
        }

    }
}
