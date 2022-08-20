// SEM : 2 - ASS : 8
// Author - YASH CHINCHOLE
// Roll No. - FY21H837

// Problem statement : Write a menu driven program for a cricket player’s display board. The information of the cricketer can be (not limited to) name, age, country, category (batsman, bowler, wicket keeper, all-rounder), number of ODI’s played, number of International 20-20’s played, average batting score, total number of wickets taken, etc. (Use array of structure) and perform following queries.
// a) Number of batsmen of a particular country
// b) Batsman with highest average score
// c) Number of bowlers of a particular country
// d) Bowler that has taken maximum no of wickets
// e) Show a particular player’s entire “Display board information”.

#include <stdio.h>
#include <string.h>

struct Player
{
    char name[20], country[20];
    int age, category, odi, int_20, avg_batting_score, wic;
} player[100];

int player_count = 0;

void input()
{
    char ch1;
    do
    {
        printf("\nEnter the name of the player : ");
        scanf("%s", &player[player_count].name);
        printf("\nEnter the age of the player  : ");
        scanf("%d", &player[player_count].age);
        printf("\nEnter the Player Country : ");
        scanf("%s", &player[player_count].country);
        printf("\nEnter the category of the player\n1. Batsman\n2. Bowler\n3. Keeper\n4. Wicket Keeper\n5. All Rounder\n");
        scanf("%d", &player[player_count].category);
        printf("\nEnter the Number of International 20-20s played by the player : ");
        scanf("%d", &player[player_count].int_20);
        printf("\nEnter the average batting score of the player : ");
        scanf("%d", &player[player_count].avg_batting_score);
        printf("\nEnter the wickets taken by the player : ");
        scanf("%d", &player[player_count].wic);
        printf("\nDo you want to add more data (y/n)\n");
        scanf(" %c", &ch1);
        player_count++;
    } while (ch1 == 'y');
}

void display()
{
    char ch1;
    do
    {
        int ch;
        printf("\nWhat do you want to display\n\n1. Number of Batsman of a Particular Country\n2. Batsman with highest average score\n3. Number of bowlers of a particular country\n4. Bowler that has taken maximum no of wickets\n5. Show a particular players entire \"Display board information\"\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
        {
            char co[100];
            printf("\nEnter The Country Name : ");
            scanf("%s", co);
            int ctr1 = 0;
            for (int i = 0; i < player_count; i++)
            {
                if (strcmp(co, player[i].country) == 0 && player[i].category == 1)
                    ctr1++;
            }

            printf("\n%s Country has %d Batsman", co, ctr1);
            break;
        }

        case 2:
        {
            int maxc = 0, max = player[0].avg_batting_score;
            for (int i = 0; i < player_count; i++)
            {
                if (player[i].avg_batting_score > max)
                    maxc = i;
            }
            printf("\nPlayer with highest batting score is : %s", player[maxc].name);
            break;
        }

        case 3:
        {
            char co[100];
            printf("\nEnter The Country Name : ");
            scanf("%s", co);
            int ctr1 = 0;
            for (int i = 0; i < player_count; i++)
            {
                if (strcmp(co, player[i].country) == 0 && player[i].category == 2)
                    ctr1++;
            }
            printf("\n%s Country has %d Bowler", co, ctr1);
            break;
        }

        case 4:
        {
            int maxc = 0, max = player[0].wic;
            for (int i = 0; i < player_count; i++)
            {
                if (player[i].wic > max)
                    maxc = i;
            }
            printf("\n Player with Max wicket is : %s", player[maxc].name);
            break;
        }

        case 5:
        {
            char player1[20];
            printf("\nEnter the Player Name : ");
            scanf("%s", player1);
            for (int i = 0; i < player_count; i++)
            {
                if (strcmp(player1, player[i].name) == 0)
                {
                    printf("\nName of the player : %s\n", player[i].name);
                    printf("\nAge of the player  : %d\n", player[i].age);
                    printf("\nPlayer Country : %s\n", player[i].country);
                    printf("\nCategory of the player : ");
                    switch (player[i].category)
                    {
                    case 1:
                        printf("Batsman");
                        break;
                    case 2:
                        printf("Bowler");
                        break;
                    case 3:
                        printf("Wicket Keeper");
                        break;
                    case 4:
                        printf("All Rounder");
                        break;
                    default:
                        printf("INVALID ENTRY");
                    }
                    printf("\n\nNumber of International 20-20s played by the player : %d\n", player[i].int_20);
                    printf("\nAverage batting score of the player : %d\n", player[i].avg_batting_score);
                    printf("\nWickets taken by the player : %d\n", player[player_count].wic);
                }
            }
            break;
        }

        default:
            printf("INVALID CHOICE");
        }
        printf("\nDo you want to Display More (y/n)\n");
        scanf(" %c", &ch1);
        player_count++;
    } while (ch1 == 'y');
}

int main()
{
    printf("\nWelcome To Yash Cricket Association\n");
    int choice;

    while (1)
    {
        printf("\nEnter your choice\n1.Input\n2.Display\n3.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            input();
            break;
        case 2:
            display();
            break;
        case 3:
            return 0;
        default:
            printf("Invalid Option");
        }
    }

    return 0;
}