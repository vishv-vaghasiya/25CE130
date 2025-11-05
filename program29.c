#include <stdio.h>
#include <string.h>

struct Coach
{
    char name[50];
    int age;
    int experience;
};

struct Team
{
    char teamName[50];
    char sportType[30];
    struct Coach coach;
};

int main()
{
    struct Team teams[50];
    int count = 0, choice, found;
    char search[50];

    do
    {
        printf("\n===== CHARUSAT SPORTS MANAGEMENT SYSTEM =====\n");
        printf("1. Add Team\n");
        printf("2. Display All Teams\n");
        printf("3. Search Team by Name\n");
        printf("4. Search Team by Sport\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 1)
        {
            if (count >= 50)
            {
                printf("Cannot add more teams!\n");
            }
            else
            {
                char tempName[50];
                printf("\nEnter Team Name: ");
                fgets(tempName, 50, stdin);
                tempName[strcspn(tempName, "\n")] = '\0';


                int duplicate = 0;
                for (int i = 0; i < count; i++)
                {
                    if (strcasecmp(teams[i].teamName, tempName) == 0)
                    {
                        duplicate = 1;
                        break;
                    }
                }

                if (duplicate)
                {
                    printf(" Team with this name already exists!\n");
                }
                else
                {
                    strcpy(teams[count].teamName, tempName);

                    printf("Enter Sport Type: ");
                    fgets(teams[count].sportType, 30, stdin);
                    teams[count].sportType[strcspn(teams[count].sportType, "\n")] = '\0';

                    printf("Enter Coach Name: ");
                    fgets(teams[count].coach.name, 50, stdin);
                    teams[count].coach.name[strcspn(teams[count].coach.name, "\n")] = '\0';

                    printf("Enter Coach Age: ");
                    scanf("%d", &teams[count].coach.age);

                    printf("Enter Coach Experience (years): ");
                    scanf("%d", &teams[count].coach.experience);
                    getchar();

                    count++;
                    printf(" Team added successfully!\n");
                }
            }
        }

        else if (choice == 2)
        {
            if (count == 0)
                printf("\nNo teams to display!\n");
            else
            {
                printf("\n--- List of Teams ---\n");
                for (int i = 0; i < count; i++)
                {
                    printf("\nTeam %d\n", i + 1);
                    printf("Team Name : %s\n", teams[i].teamName);
                    printf("Sport Type: %s\n", teams[i].sportType);
                    printf("Coach Name: %s\n", teams[i].coach.name);
                    printf("Age       : %d\n", teams[i].coach.age);
                    printf("Experience: %d years\n", teams[i].coach.experience);
                }
            }
        }

        else if (choice == 3)
        {
            if (count == 0)
                printf("\nNo teams to search!\n");
            else
            {
                printf("\nEnter Team Name to search: ");
                fgets(search, 50, stdin);
                search[strcspn(search, "\n")] = '\0';
                found = 0;

                for (int i = 0; i < count; i++)
                {
                    if (strcasecmp(teams[i].teamName, search) == 0)
                    {
                        printf("\n Team Found!\n");
                        printf("Team Name : %s\n", teams[i].teamName);
                        printf("Sport Type: %s\n", teams[i].sportType);
                        printf("Coach Name: %s\n", teams[i].coach.name);
                        printf("Age       : %d\n", teams[i].coach.age);
                        printf("Experience: %d years\n", teams[i].coach.experience);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf(" Team not found!\n");
            }
        }

        else if (choice == 4)
        {
            if (count == 0)
                printf("\nNo teams to search!\n");
            else
            {
                printf("\nEnter Sport Type to search: ");
                fgets(search, 50, stdin);
                search[strcspn(search, "\n")] = '\0';
                found = 0;

                printf("\n--- Teams Playing %s ---\n", search);
                for (int i = 0; i < count; i++)
                {
                    if (strcasecmp(teams[i].sportType, search) == 0)
                    {
                        printf("Team Name : %s\n", teams[i].teamName);
                        printf("Coach Name: %s\n", teams[i].coach.name);
                        printf("Age       : %d\n", teams[i].coach.age);
                        printf("Experience: %d years\n\n", teams[i].coach.experience);
                        found = 1;
                    }
                }
                if (!found)
                    printf("No teams found for this sport.\n");
            }
        }

        else if (choice == 5)
        {
            printf("Exiting program...\n");
        }

        else
        {
            printf("Invalid choice! Try again.\n");
        }

    }
    while (choice != 5);

    return 0;
}
