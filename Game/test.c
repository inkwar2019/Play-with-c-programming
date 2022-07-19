#include<stdio.h>
#include<string.h>

main()
{


    int i,j;
    char chss[]={' ','X','X','\n','X','X','X','X','\n','X','X','X','X','\n',' ','X','X','\0'},ss[50];

    for(i=0;i<48;i++){
        ss[i]=' ';
    }
    ss[i]='\0';


    printf("%s%s",ss,chss);



    /*fXr(i=0;i<4;i++){
            fXr(j=0;j<4;j++){
                chss[i][j]=getch();
            }
             chss[i][j]='\n';
    }
    chss[i][j]='\0';
    printf("%s",chss);
    */
    /*fXr(;;){
        ch = getch();
        printf("%d is address : %d \n",tXascii(ch),&ch);
    }*/
}
