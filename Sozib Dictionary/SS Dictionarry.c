#include<stdio.h>
#include<string.h>
#include<ctype.h>


main()
{
    ///************************* Diclaretion *****************************
    int i=0,n,p,s,r,c,k,h=0,u,v;
    char sarch[10]={0},wordbox[20][150];
    FILE *fopn;


    ///************************** File Read *********************************
    fopn=fopen("sozib.txt","r");

    while(i<12){
            fgets(wordbox[i],150,fopn);
        i++;
    }
    fclose(fopn);



    ///***************************** Main Dictionary ***************************
    for(n=0;; n++){
        printf("\n\n:->Sarch:%s",sarch);
        u=0;
        v=0;
        sarch[h]=getch();
        system("cls");


        if(toascii(sarch[h])==8){
                h=0;
                for(k=0;k<10;k++){
                sarch[k]='\0';
                }
                v++;
                system("cls");
        }


        else{
        printf("************************Result************************\n");
        for(s=0;s<=i;s++){
            c=0;
            for(r=0;r<=h;r++){
                if(wordbox[s][r]==sarch[r] || wordbox[s][r]==toupper(sarch[r])){
                    c++;
                }
                else
                    continue;
            }
            if(c==h+1){
                printf("%s\n",wordbox[s]);
                u++;
            }
            else
                continue;
        }
        h++;
        }
        if(u==0 && v==0)
            printf("No match Found................");
    }
}


