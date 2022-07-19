#include<stdio.h>
int main()
{
    char ss[160],pp[2];
    int i,j,k,l,n=75,m=6;
    for(;;){
    if(n<138 && n>=0){
    for(i=0;i<n;i++){
        ss[i]=' ';
    }
    ss[i]='\0';
    }
    else if(n>=138){
        n=0;
        m++;
    }
    else if(n<0){
        n=137;
        m--;
    }
    for(i=0;i>=0;i++){
     if(i==m){
            printf("%s    O\n%s   O*O\n%sOOOOOOOOO\n",ss,ss,ss);
            printf("%sO  OOO  O\n%sO  OOO  O\n%s   OOO\n%s   O O\n%s   O O",ss,ss,ss,ss,ss);
            break;
        }
     else
        printf("\n");
    }
    for(i=0;i<2;i++){
    pp[i]=getch();
    }
    system("cls");

    if(toascii(pp[1])==77)
        n++;
    else if(toascii(pp[1])==75)
            n--;
    else if(toascii(pp[1])==72){
        if(m>0)
            m--;
        else
            m=m;
    }

    else if(toascii(pp[1])==80)
        m++;
    }
    return 0;
}

