#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max_seat 30
#define max_length_name 50

struct booking{
    char name[max_length_name];
    int seatno;
    char destination[max_length_name];
    char source[max_length_name];
};

struct booking bookings[max_seat];
int booked_seats =0;

void bookseat()
{
    if(booked_seats>= max_seat)
    
    {
        printf("Sorry!!! All the seats are booked");
       return;
     }
     struct booking b1;
        printf("Enter Name :");
        scanf("%s",b1.name);
        printf("Enter the Seatnumber(<=30):");
        scanf("%d",&b1.seatno);
        printf("Enter the place you wish to go (destination):");
        scanf("%s",&b1.destination);
        printf("Enter the place where are you now(source):");
        scanf("%s",&b1.source);

        bookings[booked_seats++] = b1;
        printf("//////////////////////////////////\n");
        printf("Your Seatnumber %d has booked SUCCESSFULLY\n", b1.seatno);
        printf("Thank you\n Have Good Journey\n");
        printf("//////////////////////////////////\n");
    
}
void view()
{
    if(booked_seats == 0)
    {
        printf("Sorry No seats booked \n");
        return;}
    printf("Here Is Your  Details:\n ");
    printf("SN NO.  Seat No.  Name               Source              Destination\n");
printf("---------------------------------------------------------------------\n");
for (int i = 0; i < booked_seats; ++i)
{
    printf("%-6d %-9d %-18s %-18s %-18s\n",
           i + 1,
           bookings[i].seatno,
           bookings[i].name,
           bookings[i].source,
           bookings[i].destination);
}
printf("---------------------------------------------------------------------\n");

}
void edit()
{
    
    int edit_seat;
    printf("please enter your seatno :");
    scanf("%d",&edit_seat);
    
    
    int found = 0;
    for(int i=0;i<booked_seats;++i)
    {
        if(bookings[i].seatno==edit_seat)
        {
            printf("Enter new name:");
            scanf("%s",bookings[i].name);
            printf("Enter new destination:");
            scanf("%s",bookings[i].destination);
            printf("Enter new source:");
            scanf("%s",bookings[i].source);

            printf("@@@@Details Edited Succesfully@@@");
            found=1;
            break;

        }
    }
        if(!found){
            printf("No Seats are booked in that Seatno\n Please recheck\n");
            
        }
    }
void printticket()
{
    int ticket;
    printf("Enter the seatno which to be printed:");
    scanf("%d",&ticket);
    int found=0;
    for(int i=0;i< booked_seats;++i)
    {
        if(bookings[i].seatno==ticket)
        {
            printf("\n###########################################\n");
            printf("______Cbus_____\n");
            printf("Name:%s\n",bookings[i].name);
            printf("seat number:%d\n",bookings[i].seatno);
            printf("Destination:%s\n",bookings[i].destination);
            printf("Source:%s\n",bookings[i].source);
            printf("                      Cbus Approved\n");
            printf("***HAPPY JOURNEY***\n");
            printf("\n###########################################\n");
            found=1;
            break;

        }
    }
    if(!found){
        printf("No Ticket Was Booked In This Seatno \n please recheck");
    }
}
void cancel()
{ int cseat,found=0;
     printf("enter the seatno to cancel:");
        scanf("%d",&cseat);
    
    for(int i=0;i<booked_seats;++i){
       
     if(cseat==bookings[i].seatno){
        for(int j=i;j<booked_seats-1;++j)

            {
                bookings[j] = bookings[j + 1];
            }

        booked_seats--; 
        printf("Seatno %d Has cancelled successfully",cseat);
        found=1;
        break;
        
     }
    }
    if(!found)
    {
        printf("THE SEATNO DOES'T BOOKED YET!!!");
    }
}
int main()
{int choice,option;
    char name,pass [50];
    printf("^^^^^Cbus^^^^^\n");
    printf("#####MAIN MENU####\n");
    printf("1.login\n2.Exit\n");
    printf("Enter your Choice:");
    scanf("%d",&option);
    if(option==1){
        printf("Enter User Name:");
        scanf("%s",&name);
        printf("Enter The Password:");
        scanf("%s",&pass);
        printf("\nLogin Successfull\n");
   do{ 
    printf("\n-----Cbus-----\n");
    printf("****USER MENU****\n");
    printf("1.Book Ticket\n2.View Reserved Seat\n3.Edit Reserved Seat\n4.Print a Ticket\n5.Cancel Seat\n6.Exit\n");
    printf("Enter Your Choice:");
    scanf("%d",&choice);
    
        switch(choice){
        case 1:
        bookseat();
        break;
        case 2:
        view();
        break;
        case 3:
        edit();
        break;
        case 4:
        printticket();
        break;
        case 5:
        cancel();
        break;
        case 6:
        printf("EXITING WE WISH TO WELCOME YOU AGAIN ...\n");
        break;
        default:
        printf("Please Enter Proper Choice:\n");
        }
        
    }while(choice != 6);
}else{exit(0);}
    return 0;
}