#include<stdio.h>
#include<ctype.h>


main()
{
    int row,column,i,left=10,right=20,top=10,bottom=10;
    char choice[2];

    for(;;){

    system("cls");
    for(row=0;;row++){


        if(row>=top && row<=bottom){

        if(row>=top && row<bottom){
            for(column=0;;column++){
            if(column==right)
                printf("O");
            else
                printf(" ");
            if(column>right)
                break;

            }

        }

        else if(row=bottom){
        for(column=0;;column++){
            if(column>=left && column<=right)
                printf("O");
            else
                printf(" ");
            if(column>right)
                break;
        }
        }
        }
            else
                printf("\n");
            if(row>bottom)
                break;

    }

    for(i=0;i<2;i++){
        choice[i]=getch();
    }

    if(toascii(choice[1])==77){
        right++;
        left++;
    }
    else if(toascii(choice[1])==75){
        right--;
        left--;
    }
    else if(toascii(choice[1])==72){
        top--;
        if(right==left)
            bottom--;
        left++;
    }

    else if(toascii(choice[1])==80){
        bottom++;
        if(right==left)
            top++;
        left++;
    }




    }
}
