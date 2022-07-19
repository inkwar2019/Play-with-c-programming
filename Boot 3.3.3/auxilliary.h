void create_name(char rndom_name[])
{
    int i;
    for(i=0;i<7;i=i+2){
    rndom_name[i]=65+rand()%25;
    rndom_name[i+1]=97+rand()%25;
    }
    rndom_name[i]='\0';
    strcat(rndom_name,".txt");
}

int get_number()
{
    int n;
    FILE *file00;
    file00=fopen("number.txt","r");
    fscanf(file00,"%d",&n);
    fclose(file00);
    return n;
}

void put_number(int n)
{
    FILE *file00;
    file00=fopen("number.txt","w");
    fprintf(file00,"%d",n);
    fclose(file00);
}

int length(char file[])
{
    int i=1;
    char ch;
    FILE *file00;
    file00=fopen(file,"r");
    while((ch=getc(file00))!=EOF){
        if(ch==10)
            i++;
    }
    fclose(file00);
    return i-1;
}

void big(char ss[])
{
    if(ss[0]>96 && ss[0]<122)
        ss[0]=ss[0]-32;
}
