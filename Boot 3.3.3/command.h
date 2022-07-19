void commando()
{
    int i,total_number=0;
    char random_name[13];
    FILE *file_1,*file_2;
    total_number=get_number();
    srand(time(NULL));


    create_name(random_name);
    file_1=fopen("question.txt","a");
    fprintf(file_1,"%s\n",random_name);
    total_number++;
    fclose(file_1);
    input_question(random_name);


    create_name(random_name);
    file_2=fopen("answer.txt","a");
    fprintf(file_2,"%s\n",random_name);
    fclose(file_2);
    input_question(random_name);



    put_number(total_number);
}
