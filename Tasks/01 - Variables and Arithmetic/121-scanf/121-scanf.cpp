#include <stdio.h>

int main()
{
    //Create a variable x
    int x = 0;

    //Create a variable y
    int y = 0;

    //Prompt user
    printf("Enter your age\n");

    //Read keyboard response - look for an integer
    int found = scanf_s("%d", &x);

    //Display how many items were matched
    printf("Matched %d items\n", found);

    //Display what was typed in
    printf("x = %d\n", x);

    //Prompt user again
    printf("Enter another age\n");

    //Read the keyboard response again
    int found2 = scanf_s("%d", &y);

    //Display how many matches for the second number
    printf("Matched %d items\n", found2);

    //Display the second number typed in
    printf("y = %d\n", y);

    //The average of the two ages
    float average = (x + y) / 2;

    //Display the average
    printf("The average of the two ages is %f\n", average);
}


