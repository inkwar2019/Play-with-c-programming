#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char ss[160],pp[2];
    int i,j,k,l,n=75,m=6;


    for(;;){
    for(i=0;i<n;i++){
        ss[i]=' ';
    }
    ss[i]='\0';



    for(i=0;i>0;i++){
        if(i==m){
            printf("%s OOOOOOOOO",ss);
            break;
        }
        else
            printf("\n");
    }

    for(i=0;i<2;i++){
    pp[i]=getch();
    }




    if(toascii(pp[1])==77)
        n++;
    else if(toascii(pp[1])==75)
        n--;
    else if(toascii(pp[1])==72)
        m--;
    else if(toascii(pp[1])==80)
        m++;
    }
    return 0;
}
