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
            if(column==right+1)
                printf("O\n");
            else
                printf(" ");
            if(column>right)
                break;

            }

        }

        else if(row==bottom){
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
        if(right>=left){
        right++;
        left++;
            }
    }
    else if(toascii(choice[1])==75){
        if(right<=left){
        right--;
        left--;
        }
    }
    else if(toascii(choice[1])==72){
        if(top<=bottom){
        top--;
        if(right==left)
            bottom--;
        else
            left++;
        }
    }

    else if(toascii(choice[1])==80){
        if(top>=bottom){
        bottom++;
        if(right==left)
            top++;
        left++;
        }
    }




    }
}

