#include "utilities.h"

int main()
{
    // array of daily readings
    reading daily_readings[100];

    char line[buffer_size];
    char filename[buffer_size];

    // get filename from the user
    printf("Please enter the name of the data file: ");

    // these lines read in a line from the stdin (where the user types)
    // and then takes the actual string out of it
    // this removes any spaces or newlines.
    fgets(line, buffer_size, stdin);
    sscanf(line, " %s ", filename);

    char choice;
    int counter = 0;
    int line_count;
    float my_b;
    float my_mean = 0;

    while (1)
    {
        FILE *input = fopen(filename, "r");

        printf("A: View all your blood iron levels\n");                       // BRONZE
        printf("B: View your average blood iron level\n");                    // BRONZE
        printf("C: View your highest blood iron level\n");                     // SILVER
        printf("D: View your lowest blood iron level\n");                    // SILVER
        printf("E: View the blood iron levels for a specific month\n");       // SILVER/GOLD
        printf("F: See some additional statistics about your iron levels\n"); // GOLD - see readme.md
        printf("G: Generate a graph of your iron levels\n");                  // GOLD/PLATINUM - see readme.md
        printf("Q: Exit the program\n");

        // get the next character typed in and store in the 'choice'
        choice = getchar();

        // this gets rid of the newline character which the user will enter
        // as otherwise this will stay in the stdin and be read next time
        while (getchar() != '\n');


        // switch statement to control the menu.
        switch (choice)
        {
        // this allows for either capital or lower case
        case 'A':
        case 'a':
            line_count = read_file(input, daily_readings);
            for (int i = 0; i < line_count; i++)
            {
                printf("%s - Blood iron: %.2f\n", daily_readings[i].date, daily_readings[i].bloodIron);
            }
            fclose(input);
            break;

        case 'B':
        case 'b':
            line_count = read_file(input, daily_readings);
            my_mean = find_mean(daily_readings, line_count);
            printf("Your average blood iron was %.2f\n", my_mean);
            fclose(input);
            break;

        case 'C':
        case 'c':
            line_count = read_file(input, daily_readings);
            float my_max = find_highest(daily_readings, line_count);
            printf("Your highest blood iron level is: %.2f\n", my_max);
            break;

        case 'D':
        case 'd':
            line_count = read_file(input, daily_readings);
            float my_min = find_lowest(daily_readings, line_count);
            printf("Your lowest blood iron level is: %.2f\n", my_min);
            break;

        case 'E':
        case 'e':
            line_count = read_file(input, daily_readings);
            monthly_iron(daily_readings, line_count);
            break;

        case 'F':
        case 'f':
            return 0;
            break;

        case 'G':
        case 'g':
            return 0;
            break;

        case 'Q':
        case 'q':
            return 0;
            break;

        // if they type anything else:
        default:
            printf("Invalid choice\n");
            break;
        }
    }
}