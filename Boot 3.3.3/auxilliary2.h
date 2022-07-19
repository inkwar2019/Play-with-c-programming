void input_question(char ss[])
{
    int i,j,index;
    char statement[100];
    FILE *file;


    file=fopen(ss,"a");
    system("cls");
    printf("\nEnter some similer Command :\n");
    for(i=0;;i++){
                printf("%d. ",i+1);
                gets(statement);
                if(strcmp(statement,"no")==0){
                break;
                }
                else
                    fprintf(file,"%s\n",statement);
                printf("\n");
                }
                fclose(file);
}


char *finder(char input[])
{
    int i,j,n,m,a;
    srand(time(NULL));
    FILE *file_1,*file_2,*file_3,*file_4;
    file_1=fopen("question.txt","r");
    for(i=0;i<3;i++){
        fscanf(file_1,"%s\n",output);
        m=length(output);
        file_2=fopen(output,"r");
        for(a=0;a<=m;a++){
            fscanf(file_2,"%s\n",output);
            if(strcmp(input,output)==0){
                file_3=fopen("answer.txt","r");
                for(j=0;j<=i;j++){
                    fscanf(file_3,"%s\n",output);
                }

                fclose(file_3);
                file_4=fopen(output,"r");
                n=rand()%3;
                for(j=0;j<=n;j++){
                    fscanf(file_4,"%s\n",output);

                }
                fclose(file_4);
                return output;
            }
        }
        fclose(file_2);
    }
    fclose(file_1);
    return "Sorry....";
}
