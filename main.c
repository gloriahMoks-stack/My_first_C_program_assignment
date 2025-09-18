#include <stdio.h>  // Standard input/output library for printf and scanf
#include <stdlib.h> // Standard library (optional here, but good habit)

// The magical entry point of every C program: main function
int main() {
    // Step 1: Print welcome message and the student’s info
    printf("Hello! My name is Gloria.\n\n");
    printf("Here are my units for this semester:\n\n");

    // Step 2: Print each unit individually
    printf("1. SPH2107 Analogue Electronics\n");
    printf("2. SPI2102 Computer Systems and Organization\n");
    printf("3. UCU2105 Fundamentals of ICT\n");
    printf("4. SPI2103 Introduction to Computer Application\n");
    printf("5. SPI2120 Essentials of Accounting\n");
    printf("6. UCU2101 Communication Skills\n");
    printf("7. SPM2104 Mathematics of Science\n");
    printf("8. SPI2106 Introduction to Programming and Algorithms\n\n");

    // Step 3: Prepare variables to hold user input
    char name[50];      // A string to hold the name (up to 49 characters + null terminator)
    int age;            // An integer for age
    char phone[20];     // A string for phone number (up to 19 characters)
    float height;       // A float for height in meters or preferred unit

    // Step 4: Prompt the user for their information
    printf("Now it's your turn!\n");
    printf("Please enter your name: ");
    scanf(" %[^\n]", name); // The space before %[^\n] ignores any leftover newline characters

    printf("Please enter your age: ");
    scanf("%d", &age);       // & is required to pass the address of age

    printf("Please enter your phone number: ");
    scanf("%s", phone);      // Reads a single word (no spaces)

    printf("Please enter your height (in meters, e.g., 1.75): ");
    scanf("%f", &height);    // Reads a floating point number

    // Step 5: Print all the information back to the user
    printf("\nThank you! Here is the information you entered:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Phone Number: %s\n", phone);
    printf("Height: %.2f meters\n", height); // prints height with 2 decimal points

    // Step 6: Ending the magical journey
    printf("\nGoodbye! Have a great day!\n");

    return 0; // Return 0 indicates successful execution
}
