// movie ticket booking system  ==> add movie ,ticket book ,search

/*
1. add movie  : id,name,available_seats,timings 
2. ticket booking  : 
            1. id , movie , seat , timing 
            2. tickets : 
                  gold :200 , sliver:400 , platinum:800 
            3.  Total booking ticket :  
                    id   : 101 
                    movie : KGF
                    timings : 10pm  
                    total ticket : 3200 
3. search movie : 
            1. id :   101 
4. display 

example  : 

id    name    available_seats    timings
101   KGF       100               10pm ,10am 
102   RRR       50                9pm, 9am  
*/
#include <stdio.h>

struct Movie
{
    int id;
    char name[30];
    int seats;
    char timing[20];
};

struct Movie m[10];
int count = 0;

void addMovie();
void bookTicket();
void searchMovie();
void displayMovies();

int main()
{
    int choice;

    do
    {
        printf("\n===== Movie Ticket Booking System =====");
        printf("\n1. Add Movie");
        printf("\n2. Book Ticket");
        printf("\n3. Search Movie");
        printf("\n4. Display Movies");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addMovie();
            break;

        case 2:
            bookTicket();
            break;

        case 3:
            searchMovie();
            break;

        case 4:
            displayMovies();
            break;

        case 5:
            printf("\nThank You!\n");
            break;

        default:
            printf("\nInvalid Choice!\n");
        }
    } while (choice != 5);

    return 0;
}

void addMovie()
{
    printf("\nEnter Movie ID: ");
    scanf("%d", &m[count].id);

    printf("Enter Movie Name: ");
    scanf("%s", m[count].name);

    printf("Enter Available Seats: ");
    scanf("%d", &m[count].seats);

    printf("Enter Timing: ");
    scanf("%s", m[count].timing);

    count++;
    printf("\nMovie Added Successfully!\n");
}

void displayMovies()
{
    int i;
    
    if (count == 0)
    {
        printf("\nNo movies available!\n");
        return;
    }

    printf("\nID\tName\tSeats\tTiming\n");
    for (i = 0; i < count; i++)
    {
        printf("%d\t%s\t%d\t%s\n",
               m[i].id, m[i].name, m[i].seats, m[i].timing);
    }
}

void searchMovie()
{
    int id, i, found = 0;

    printf("\nEnter Movie ID to search: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (m[i].id == id)
        {
            printf("\nMovie Found!");
            printf("\nID: %d", m[i].id);
            printf("\nName: %s", m[i].name);
            printf("\nSeats: %d", m[i].seats);
            printf("\nTiming: %s\n", m[i].timing);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nMovie Not Found!\n");
}

void bookTicket()
{
    int id, i, type, qty, price = 0;

    printf("\nEnter Movie ID: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (m[i].id == id)
        {
            printf("\nSeat Type:");
            printf("\n1. Gold (200)");
            printf("\n2. Silver (400)");
            printf("\n3. Platinum (800)");
            printf("\nChoose Seat Type: ");
            scanf("%d", &type);

            printf("Enter Number of Seats: ");
            scanf("%d", &qty);

            if (type == 1) 
            {
                price = 200;
            }
            else if (type == 2) 
            {
                price = 400;
            }
            else if (type == 3) 
            {
                price = 800;
            }
            else
            {
                printf("\nInvalid Seat Type!\n");
                return;
            }

            if (qty <= m[i].seats)
            {
                m[i].seats -= qty;
                printf("\nBooking Successful!");
                printf("\nMovie: %s", m[i].name);
                printf("\nTiming: %s", m[i].timing);
                printf("\nTotal Bill: %d\n", qty * price);
            }
            else
            {
                printf("\nNot Enough Seats Available!\n");
            }
        }
    }

    printf("\nMovie ID Not Found!\n");
}
