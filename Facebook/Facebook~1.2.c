#include<stdio.h>
#include<string.h>
struct sozib{
    char name1[10];
    char name2[10];
    int mob;
    char pass[15];
    char barth[8];
    char gen[8];
    int fnm[100];
    char msg[100][80];
    int cunt;
};
int main()
{
    struct sozib ss[10];
    int choice,b,c,d,e,i,t,j,x=0,f,g,h,k,l,m,n,o,p,q,r,s,u,xx=0,v,w,y,count1,wnt,fx,gx,aa,mom,cnt,tol,did,gend,chic,z=0;
    char  post[100][120],a[15];
    for(b=0;b>=0;b++){
            printf("\n1.Creat a new account\n2.Log in\n3.Exit\n");
            scanf("%d",&count1);
            if(count1==1){
            printf("Enter your first name:");
            scanf("%s",ss[b].name1);
            printf("Enter your last name:");
            scanf("%s",&ss[b].name2);
            hok:
            printf("Enter your mobile No.:");
            scanf("%d",&ss[b].mob);
            for(j=0;j<=x;j++){
                if(ss[b].mob==ss[j].mob && b!=j){
                    printf("The number have alrady an account.Please Enter new number.\n");
                    goto hok;
                }
                else
                    continue;
            }
            printf("Enter your password:");

            while(1)
           {
                ss[b].pass[z]=getch();
                printf("*");
                if(toascii(ss[b].pass[z])==13)
                    break;
                else
                    z++;
            }

            printf("Enter your barthday(dd/mm/yy) :");
            scanf("%s",ss[b].barth);
            printf("Enter your Gender :");
            scanf("%s",ss[b].gen);
            ss[b].cunt=0;
            x++;

           }
        else if(count1==2){
            if(x==0){
                printf("Not have any account !\nPlease create one first....\n");
                continue;
            }
            fx=0;gx=0;
            printf("\nEnter your mobile No.:");
            scanf("%d",&t);
            printf("\nEnter your account pass:");
            scanf("%d",&a);
            for(i=0;i<=x;i++){
                tol=0;
              if(ss[i].pass==a && ss[i].mob==t){
             fx++;
           for(;;){
        printf("\t%s %s\n\n1.Edit your account.\n2.Massage(%d)\n3.Chat\n4.Post.\n5.Total member in FB.\n6.Log out.\n",ss[i].name1,ss[i].name2,ss[i].cunt);
        scanf("%d",&choice);
            if(choice==1){
            pop:
            k=0;l=0;
            printf("\nEnter your mobile No.:");
            scanf("%d",&t);
            printf("\nEnter your account pass:");
            scanf("%d",&a);
            if(ss[i].pass==a && ss[i].mob==t){
            printf("Name: %s  %s\nEnter your new first name:",ss[i].name1,ss[i].name2);
            scanf("%s",ss[i].name1);
            printf("\nEnter your new last name:");
            scanf("%s",ss[i].name2);
            printf("Pass: %d \nEnter your new pass:",ss[i].pass);
            scanf("%d",&s);
            strcpy(ss[i].pass,s);
            k++;
     }
            if(k==0){
                printf("\nWrong pass /!\\\n");
                goto pop;
            }
}
        else if(choice==2){
                j=0;
                while(j<ss[i].cunt){
                    y=ss[i].fnm[j];
                    printf("%s %s\n",ss[y].name1,ss[y].name2);
                    printf(":>%s\n\n",ss[i].msg[j]);
                    j++;
                }
        }
        else if(choice==3){
                mom=0;
              for(j=0;j<x;j++){
                if(ss[j].name1==ss[i].name1){
                    did=j;
                    mom++;
                    continue;
                }
                else if(ss[j].name1 != ss[i].name1 && mom==0)
                    printf("%d.%s %s\n",j+1,ss[j].name1,ss[j].name2);
                else if(ss[j].name1 != ss[i].name1 && mom!=0)
                    printf("%d.%s %s\n",j,ss[j].name1,ss[j].name2);
              }
              printf("\nWhose do you want chat:");
              scanf("%d",&wnt);
              if(wnt<did){
              ss[wnt-1].fnm[ss[wnt-1].cunt]=i;
              printf("Write something:\n");
              scanf("%s",ss[wnt-1].msg[ss[wnt-1].cunt]);
              printf("\nYour massage is successfully sent.\n");
              ss[wnt-1].cunt++;}
              if(wnt>=did){
              ss[wnt].fnm[ss[wnt].cunt]=i;
              printf("Write something:\n");
              scanf("%s",ss[wnt].msg[ss[wnt].cunt]);
              printf("\nYour massage is successfully sent.\n");
              ss[wnt].cunt++;}

        }
        else if(choice==4){
                cnt=0;
                for(j=0;j<xx;j++){
                        printf("%d:>%s\n",j+1,post[j]);
                        cnt++;
                }
        ror:
        printf("\n1.Post\n2.HOME\n");
        scanf("%d",&chic);
        if(chic==1){
            printf("Write about youself:\n");
            scanf("%s",post[cnt]);
            xx++;
        }
        else if(chic==2)
            continue;
        else
            goto ror;

        }

        else if(choice==5)
            printf("Total FB account : %d\n",x);

        else if(choice==6){
            tol++;
            break;
            }
        else
            continue;
}
}
       else if(ss[i].pass!=a && ss[i].mob!=t && tol==0){
            printf("\nWrong passward or phone number!!!!!\n\tPlease try again\n ");
            break;
        }
}
}
else if(count1==3)
    break;
else if(count1!=1 && count1!=2 && count1!=3){
    printf("Error expression\n\tTry again\n");
    continue;
}
}

     return 0;
}



