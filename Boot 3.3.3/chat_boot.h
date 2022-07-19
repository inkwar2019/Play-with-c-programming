void chating()
{
    int a;
    char user[150],*answer;

    system("cls");
    for(;;){
        printf("You:\n");
        gets(user);
        answer=finder(user);
        for(a=0;a<=60;a++){
        printf(" ");
        }
        printf("Computer:\n");
        big(answer);
        printf("%70s\n",answer);

        if(strcmp(answer,"Bye...")==0)
            break;
    }
}
