#include<stdio.h>

int check();
int cancel();
int reserve();

int main(void)
{
   int choice;
    do
        {
            printf("\n\n\t\t**Welcome to Simple Airline Seat Reservations System**\n\n");
            printf("\tEnter your choice:\n\n\n\t1.Reservation\n\t2.Check\n\t3.Cancel\n\t4.Exit\n");
            scanf("%d",&choice);
            switch(choice)
            {
            case 1:
                    reserve();
                    break;
            case 2:
                    check();
                    break;
            case 3:
                    cancel();
                    break;
            case 4:
                    printf("Hope you had a great experience\n");
                    break;
            default: printf("invalid \nPlease choose between 1 to 4");
            }
        }
        while(choice!=4);
        return 0;
}
