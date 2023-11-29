
int passport_num[10];
int reserve()
{
    int flight,n;
    char f_name[30];
    char l_name[30];
    char e_mail[50];
    long double contact_num;

    int seat_choice;
	int i, j;
	int ticket[10];

    printf("\n\tChoose Your Flight:\n\t 1.Karachi To Islamabad \n\t 2.Karachi To Peshawar\n");
    scanf("%d",&flight);

    switch(flight)
    {
        case 1:
        {
            printf("Enter no. of tickets you want to reserve\n");
            scanf("%d",&n);

            for (j=0; j<n; j++)
            {
                do
                {
                    printf("Pick a seat:1-10\n\n");
                    scanf("%i",&seat_choice);
                    ticket[j]=seat_choice;

                    for (i=0; i<j; i++)
                    {
                        if (ticket[j]==ticket[i])
                        {
                            printf("\n\nSeat is already reserved. Try another one.\n\n");
                            break;
                        }
                    }
                }
                while (i!=j);

                if(ticket[j] <= 10)
                {
                    printf("\nName:");
                    scanf("%s",&f_name);
                    printf("\nLast Name:");
                    scanf("%s",&l_name);
                    printf("\nEmail:");
                    scanf("%s",&e_mail);
                    printf("\nContact number:");
                    scanf("%lld",&contact_num);
                    printf("\nPassport number:");
                    scanf("%d",&passport_num[j]);

                    printf("\t\n============================================================\n");
                    printf("\tFirst Name:%s \n",f_name);
                    printf("\tLast Name: %s\n",l_name);
                    printf("\tEmail: %s\n",e_mail);
                    printf("\tContact number: %lld\n",contact_num);
                    printf("\tPassport number:%d\n",passport_num[j]);
                    printf("\tFlight: Karachi to Islamabad\n");
                    printf("\tSeat: K-%d\n",ticket[j]);
                    printf("\t\n============================================================\n");
                }
                else
                    printf("\nWrong number! \n\n");

            }//end of for loop
        }//end of case 1 of outer switch case loop

        break;
        case 2:
        {
            printf("Enter no. of tickets you want to reserve\n");
            scanf("%d",&n);

            for (j=0; j<n; j++)
            {
                do
                {
                    printf("Pick a seat:1-10\n\n");
                    scanf("%i",&seat_choice);
                    ticket[j]=seat_choice;
                    for (i=0; i<j; i++)
                    {
                        if (ticket[j]==ticket[i])
                        {
                            printf("\n\nSeat taken.\n\n");
                            break;
                        }
                    }
                }
                while (i!=j);

                if(ticket[j] <= 10)
                {
                    printf("\nName:");
                    scanf("%s",&f_name);
                    printf("\nLast Name:");
                    scanf("%s",&l_name);
                    printf("\nEmail:");
                    scanf("%s",&e_mail);
                    printf("\nContact number:");
                    scanf("%lld",&contact_num);
                    printf("\nPassport number:");
                    scanf("%d",&passport_num[j]);

                    printf("\t\n============================================================\n");
                    printf("\tFirst Name:%s \n",f_name);
                    printf("\tLast Name: %s\n",l_name);
                    printf("\tEmail: %s\n",e_mail);
                    printf("\tContact number: %lld\n",contact_num);
                    printf("\tPassport number:%d\n",passport_num[j]);
                    printf("\tFlight: Karachi to Peshawar\n");
                    printf("\tSeat: P-%d\n",ticket[j]);
                    printf("\t\n============================================================\n");
                }
                else
                    printf("\nWrong number! \n\n");
                    }//end of for loop
        }//end of case 1 of outer switch case loop

        break;
        default:
            ("invalid");
        }

}
