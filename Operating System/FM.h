void fm()
{
    int i,x=1;
    float n=88.0;
    char ch[2],ph[2];
    for(;;){
            system("cls");
            printf("\t\t*        *\n\t\t \\      /\n");
            printf("\t\t  \\    /\n\t\t   \\  /\n\t\t    \\/\n");
            printf(" ****************************************\n");
            printf(" |\t\t\t\t\t|\n |\t\t\t\t\t|\n");
            printf(" |\t   ** \t\t     ** \t|\n |\t  *  *\t\t    *  *    \t|\n");
            printf(" |\t   ** \t\t     ** \t|\n |\t\t\t\t\t|\n");
            printf(" ****************************************\n");


        for(i=0;i<2;i++){
            ch[i]=getch();
            if(ch[0]==13 || ch[0]==8)
                break;
        }
        if(ch[0]==8)
            break;
        if(ch[0]==13){
            if(x==1)
                x=2;
            else
                x=1;
        }


    }
}
