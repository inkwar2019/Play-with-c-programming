#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>


/**
        #.This Calender don't give you the exact date so far.
        #.This Calender will not consider the leap year.
        #.Nevertheless it may be a template of Calender in c.
**/

main()
{
    int check = 0;
    int cont(int n,int x);
    int month_length[]={31,28,31,30,31,30,31,31,30,31,30,31},i,j,x,y,mnth=0,year=2017,cnt=0,cnt1,cnt2,cnt3;
    char month_name[12][12],choice[2];
    FILE *MNTH;


    for(;;){


            MNTH=fopen("name.txt","r");
            for(i=0;i<12;i++){
                fscanf(MNTH,"%s",month_name[i]);
            }
            fclose(MNTH);




            system("cls");
            printf("%d \n\t%s\n\n",year,month_name[mnth]);
            printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
            for(i=0;i<cnt;i++){
                printf("     ");
            }
            for(x=1;x<=month_length[mnth];x++){
                    if(x<10)
                        printf("%d    ",x);
                    else
                        printf("%d   ",x);
                    cnt++;
                    if(cnt>=7){
                        printf("\n");
                        cnt=0;
                    }
            }



            take:
            for(i=0;i<2;i++){
                choice[i]=getch();
                if(toascii(choice[0])!= 96)
                {
                    check = 100;
                    break;
                }
            }

            if(check){
                system("cls");
                printf("\t\t\t____bye___for today.");
            getch();
                break;
            }
            else if(toascii(choice[1])==72){
                    if(mnth<11)
                        mnth++;
                    else{
                        mnth=0;
                        year++;
                    }


            }
            else if(toascii(choice[1])==80){
                    if(mnth>0)
                        mnth--;
                    else{
                        mnth=11;
                        year--;
                    }
                    if(mnth==11){
                    cnt1=cont(month_length[0],cnt);
                    cnt2=7-cnt1;
                    cnt3=cont(month_length[mnth],cnt2);
                    cnt=7-cnt3;
                    }
                    else{
                    cnt1=cont(month_length[mnth+1],cnt);
                    cnt2=7-cnt1;
                    cnt3=cont(month_length[mnth],cnt2);
                    if(cnt3==0)
                        cnt=0;
                    else
                        cnt=7-cnt3;

                    }

            }
            else
                goto take;


    }
}

int cont(int n,int x)
{
    int i,j;
    i=n-x;
    j=i%7;
    return j;
}
