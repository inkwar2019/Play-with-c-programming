#include<stdio.h>
int main()
{
    char ss[160],pp[2],sp[160],ps[160];
    int i,j,k,l,n=75,m=6,x=4,y=30,p,q,a=60;

    srand(time(NULL));


    for(;;){
    for(i=0;i<n;i++){
        ss[i]=' ';
    }
    ss[i]='\0';


    for(i=0;i<y;i++){
        sp[i]=' ';
    }
    sp[i]='\0';



    for(i=0;i<a;i++){
        ps[i]=' ';
    }
    ps[i]='\0';



    for(i=0;i<20;i++){
        if(x==m && i==m){
            if(n>y)
                printf("%sX%sO",sp,ps);
            else if(y>n)
                printf("%sO%sX",ss,ps);
            else
                printf("%sO",ss);
        }

        else if(i==m){
            //printf("%s    O\n%s   O*O\n%sOOOOOOOOO\n",ss,ss,ss);
            printf("%sO\n",ss);
            //printf("%sO  OOO  O\n%sO  OOO  O\n%s   OOO\n%s   O O\n%s   O O",ss,ss,ss,ss,ss);
        }
        else if(i==x && x!=m)
            printf("%sX\n",sp);
        else
            printf("\n");
    }

    for(i=0;i<2;i++){
    pp[i]=getch();
    }
    system("cls");




    if(toascii(pp[1])==77)
    {
        if(x==m){
            n++;
            a--;
        }
        else
            n++;
    }

    else if(toascii(pp[1])==75)
        {
        if(x==m){
            n--;
            a++;
        }
        else
            n--;
    }
    else if(toascii(pp[1])==72)
        m--;
    else if(toascii(pp[1])==80)
        m++;
    }
    if(x==m && y==n){
        x=rand()%10;
        y=rand()%159;
    }
    else if(x==m && y!=n){
        if(y>n)
            a=y-n;
        else if(n>y)
            a=n-y;
        else
            a=n;
    }


}

