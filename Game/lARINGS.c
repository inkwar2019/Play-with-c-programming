#include<stdio.h>
#include<math.h>


main()
{
    int i,j,n=2,x;
    char ss[30];


    for(;;){
            system("cls");
        for(i=0;i<10;i++){
            for(x=0;x<n;x++){
                if(x%2==0)
                    ss[x]=' ';
                else
                    ss[x]='*';
            }
            ss[x]='\0';
            for(j=0;j<=pow(11,7);j++){
                j=j;
            }
            system("cls");
            printf("%s\n",ss);
            printf("%s\n",ss);
            printf("%s",ss);


            for(x=0;x<n;x++){
                    ss[x]='\0';
            }
            n=n+2;
        }
        n=2;
    }
}
