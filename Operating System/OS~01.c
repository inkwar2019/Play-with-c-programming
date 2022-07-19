#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>

main()
{
    void menu(int i,int j);
    void turn_on();
    int i,j,n=0,x,main=1,p=1,q=1;
    char on,choice[2],choice2[2];




    for(i=1;i>0;i++){
        on=getch();
        if(on==13){
            n++;}
        else
            continue;
        if(n==30)
            break;
    }
    turn_on();

    for(;;){
        if(main==1){
            system("cls");
            printf("\t\t*\n\t\t*\n\t\t*\n\t\t*\n\t\t*\n\t\t*\n\t\t*\n\t\t*\n\t\t*\nMENU\t    NAME*\n^^^^\t        *\n*****************\n");

        }
        else if(main==2){
            system("cls");
            printf("\t\t*\n\t\t*\n\t\t*\n\t\t*\n\t\t*\n\t\t*\n\t\t*\n\t\t*\n\t\t*\nMENU\t    NAME*\n\t    ^^^^*\n*****************\n");

        }
        for(i=0;i<2;i++){
            choice[i]=getch();
            if(choice[0]==13)
                break;
        }
        if(choice[1]==77)
            main=2;
        else if(choice[1]==75)
            main=1;
        else
            continue;



            if(main==1 && choice[0]==13){
                for(;;){
                system("cls");
                menu(p,q);
                for(i=0;i<2;i++){
                    choice2[i]=getch();
                    if(choice2[0]==13)
                        break;
                }
                if(choice2[1]==72){
                    if(p>1)
                        p--;
                    else
                        p=4;
                }
                else if(choice2[1]==80){
                    if(p<4)
                        p++;
                    else
                        p=1;
                }
                else if(choice2[1]==77){
                    if(q<2)
                        q++;
                    else{
                        q=1;
                    if(p<4)
                        p++;
                    else
                        p=1;
                    }
                }
                else if(choice2[1]==75){
                    if(q>1)
                        q--;
                    else{
                        q=2;
                    if(p>1)
                        p--;
                    else
                        p=4;
                    }
                }


                }
            }
            if(main==2 && choice[0]==13){
                 system("cls");
                printf("NAME");
                getch();
            }
    }
}
void turn_on()
{
    int i,j,n,x,p;
    char ss[]="SOZIB";
    for(i=0;i<5;i++){
            system("cls");
        for(j=0;j<12;j++){
                for(n=0;n<16;n++){
                    printf("%c",ss[i]);
                    for(x=0;x<pow(10,6);x++){
                        p=9;
                    }
                }
            printf("\n");
        }
    }


}


void menu(int i,int j)
{
if(i==1 && j==1)
    printf(" SmS       Clock*\n^^^^    \t*\n\t\t*\nCalender    Game*\n\t\t*\n\t\t*\nCalculator  Call*\n\t\t*\n\t\t*\n FM        Alarm*\n\t\t*\n*****************\n");
else if(i==1 && j==2)
    printf(" SmS       Clock*\n\t   ^^^^^*\n\t\t*\nCalender    Game*\n\t\t*\n\t\t*\nCalculator  Call*\n\t\t*\n\t\t*\n FM        Alarm*\n\t\t*\n*****************\n");
else if(i==2 && j==1)
    printf(" SmS       Clock*\n\t\t*\n\t\t*\nCalender    Game*\n^^^^^^^^\t*\n\t\t*\nCalculator  Call*\n\t\t*\n\t\t*\n FM        Alarm*\n\t\t*\n*****************\n");
else if(i==2 && j==2)
    printf(" SmS       Clock*\n\t\t*\n\t\t*\nCalender    Game*\n\t    ^^^^*\n\t\t*\nCalculator  Call*\n\t\t*\n\t\t*\n FM        Alarm*\n\t\t*\n*****************\n");
else if(i==3 && j==1)
    printf(" SmS       Clock*\n\t\t*\n\t\t*\nCalender    Game*\n\t\t*\n\t\t*\nCalculator  Call*\n^^^^^^^^\t*\n\t\t*\n FM        Alarm*\n\t\t*\n*****************\n");
else if(i==3 && j==2)
    printf(" SmS       Clock*\n\t\t*\n\t\t*\nCalender    Game*\n\t\t*\n\t\t*\nCalculator  Call*\n\t    ^^^^*\n\t\t*\n FM        Alarm*\n\t\t*\n*****************\n");
else if(i==4 && j==1)
    printf(" SmS       Clock*\n\t\t*\n\t\t*\nCalender    Game*\n\t\t*\n\t\t*\nCalculator  Call*\n\t\t*\n\t\t*\n FM        Alarm*\n^^      \t*\n*****************\n");
else if(i==4 && j==2)
    printf(" SmS       Clock*\n\t\t*\n\t\t*\nCalender    Game*\n\t\t*\n\t\t*\nCalculator  Call*\n\t\t*\n\t\t*\n FM        Alarm*\n\t   ^^^^^*\n*****************\n");
}

