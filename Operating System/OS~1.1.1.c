#include"head.h"
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
        display(main);


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
                        choice2[0]=0;
                        choice2[1]=0;
                system("cls");
                menu(p,q);
                for(i=0;i<2;i++){
                    choice2[i]=getch();
                    if(choice2[0]==13 || choice2[0]==8)
                        break;
                }
                if(choice2[0]==8)
                    break;
                if(choice2[0]==13 && (p==2 && q==2))
                    gaming();
                else if(choice2[0]==13 && (p==4 && q==1))
                    fm();

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
                else
                    continue;

                }
            }
            if(main==2 && choice[0]==13){
                 system("cls");
                printf("NAME");
                getch();
            }
    }
}


