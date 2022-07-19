#include<stdio.h>
int main()
{
    int i,j,k,n=20;
    char ss[150];

    for(;;){
        if(n>=20 && n<119){
            for(j=0;n<119;j++){

            for(i=0;i<n;i++){
            ss[i]=' ';
            }
            ss[i]='\0';

            printf("%sOOOOO\n",ss);
            n++;
            }
        printf("%sOOOOO\n%sOOOOO\n%sOOOOO\n%sOOOOO\n%sOOOOO\n%sOOOOO\n",ss,ss,ss,ss,ss,ss);
        }
        else if(n<=119 && n>20){
            for(j=0;n>20;j++){

            for(i=0;i<n;i++){
            ss[i]=' ';
            }
            ss[i]='\0';

            printf("%s\bOOOOO\n");
            n--;
            }
            printf("%s\bOOOOO\n%s\bOOOOO\n%s\bOOOOO\n%s\bOOOOO\n%s\bOOOOO\n%s\bOOOOO\n",ss,ss,ss,ss,ss,ss);
        }

    }
    return 0;
}
