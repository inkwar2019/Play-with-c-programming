#include"head.h"

main()
{
    int i,n;
    char choice;

    for(i=0;;i++){
        system("cls");
        printf("1.Chat with Boot\n2.Add Command\n3.Exit\n");
        choice=getch();


        if(choice==49)
            chating();
        else if(choice==50)
            commando();
        else if(choice==51)
            break;
        else
            continue;
    }
}
