#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    char count[2],choice[2],ss[85],sp[85],bck;
    int i,j,n=1,x,a=40,b,z,scr,q=15,life;
    srand(time(NULL));


    printf(":->PLAY\n   Exit\n   Help\n");
    ///********************************* Main Loop ********************************
    for(;;){
        for(i=0;i<2;i++){
            choice[i]=getch();
            if(toascii(choice[0])==13){
                choice[1]='\0';
                break;
            }

         }
         if((toascii(choice[0])!=96 && toascii(choice[0])!=13) || (toascii(choice[1])!=72 && toascii(choice[1])!=80)){
            if(toascii(choice[0])!=13){
            n=1;
            choice[0]='\0';
            choice[1]='\0';
         }
         }

        if(toascii(choice[1])==72){
            if(n==1)
                n=3;
            else
                n--;
        }

        else if(toascii(choice[1])==80){
            if(n==3)
                n=1;
            else
                n++;
        }
///*************************** Main Menu *****************************
        if(n==1){
            system("cls");
            printf(":->PLAY\n   Exit\n   Help\n");
        }
        else if(n==2){
            system("cls");
            printf("   PLAY\n:->Exit\n   Help\n");
        }
        else if(n==3){
            system("cls");
            printf("   PLAY\n   Exit\n:->Help\n");
        }


///******************************** PLaY **************************************
        if(toascii(choice[0])==13 && n==1){
                scr=0;
                life=3;
                system("cls");

            for(;;){
                    system("cls");

///******************************** Two string **************************************
                    for(i=0;i<q;i++){
                        sp[i]=' ';
                    }
                    sp[i]='\0';

                    for(i=0;i<a;i++){
                        ss[i]=' ';
                    }
                    ss[i]='\0';


///******************************** Main Display **************************************
                    for(i=0;i<15;i++){
                        if(i==0)
                            printf("Score: %d",scr);
                        if(i==1)
                            printf("Life:%d",life);
                        if(i==1){
                            printf("%sO",sp);
                        }
                        if(i==14){
                            printf("%s  *\n",ss);
                            printf("%s ***\n",ss);
                            printf("%s*****\n",ss);
                            printf("%s*   *\n");
                        }
                        else
                            printf("\n");
                    }

///******************************** Movement Option **************************************
                    for(i=0;i<2;i++){
                        count[i]=getch();
                        if(toascii(count[i])==13){
                            count[1]='\0';
                            break;
                        }
                    }

///******************************** Right **************************************
                    if(toascii(count[1])==77){
                            if(a==75){
                                a=11;
                            }
                            else
                                a++;
                    }

///******************************** Left **************************************
                    else if(toascii(count[1])==75){
                            if(a==10){
                                a=74;
                            }
                            else
                                a--;
                    }

///******************************** Fire **************************************
                    else if(toascii(count[0])==13){
                        for(z=13;z>=0;z--){
                                system("cls");
                        for(i=0;i<15;i++){
                            if(i==0)
                            printf("Score: %d",scr);
                            if(i==1){
                            printf("Life:%d  %sO",life,sp);
                            }

                            if(i==z){
                                printf("%s ***",ss);
                            }

                                if(i==14){
                            printf("%s  *\n",ss);
                            printf("%s ***\n",ss);
                            printf("%s*****\n",ss);
                            printf("%s*   *\n");
                        }
                        else
                            printf("\n");

                        }
                        }
                        if(q==a-4){
                           q=10+rand()%65;
                           scr++;
                        }
                        else
                            life--;
                        if(life<0){
                            system("cls");
                            q=10+rand()%65;
                            printf("*************************GAME OVER*******************************\n");
                            printf("Yuur score is %d\n\n\n:->Press Enter for Restart\npress anykey for Main Menu\n",scr);
                            break;
                        }
                    }


            }
        }
///*********************************************Main Option (2) ******************************
        else if(toascii(choice[0])==13 && n==2){
            system("cls");
            printf("You are successfully Exited\n");
            break;}
///*********************************************Main Option (3) ******************************
        else if(toascii(choice[0])==13 && n==3){
            top:
            system("cls");
            printf("It is help room:\n\npress > for right move\npress < for left move\npress Enter for fire");
            printf("\n\n\nPress \"Space\" for back\n");
            bck=getch();
            if(toascii(bck)==32)
                continue;
            else
                goto top;
        }

    }
    getch();
}

