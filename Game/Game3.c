#include<stdio.h>
int main()
{
    int x,y,i;
    char ss[160],aa[32],bb[32];
    srand(time(NULL));


    for(;;){
        x=rand()%160;
        y=rand()%50;


        for(i=0;i<x;i++){
            ss[i]=' ';
        }
        ss[i]='\0';



        system("cls");
        for(i=0;i<51;i++){
            if(i==y){
                printf("%s **\n%s****\n%s****\n%s **\n",ss,ss,ss,ss);
            }
            else
                printf("\n");
        }
        printf("\a");
    }


    return 0;
}
