int check()
{
    extern int passport_num[];
    printf("Enter passport number");
    int check;
    int found=0;

    scanf("%d",&check);
    for(int k=0; k<10; k++)
    {
        if(check==passport_num[k])
        {
            found=1;
            printf("Ticket is reserved...Check!!!");
            break;
        }

    }
    if(found==0)
        printf("Your ticket is not reserved");

}
