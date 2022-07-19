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

void display(int i)
{
    if(i==1){
            system("cls");
            printf("\t\t*\n\t\t*\n\t\t*\n\t\t*\n\t\t*\n\t\t*\n\t\t*\n\t\t*\n\t\t*\nMENU\t    NAME*\n^^^^\t        *\n*****************\n");

        }
        else if(i==2){
            system("cls");
            printf("\t\t*\n\t\t*\n\t\t*\n\t\t*\n\t\t*\n\t\t*\n\t\t*\n\t\t*\n\t\t*\nMENU\t    NAME*\n\t    ^^^^*\n*****************\n");

        }
}
