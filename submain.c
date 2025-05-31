#include <stdio.h>
#include <stdlib.h>
/*
int n()
{
    float purchaseTotal, salesTax, discountedtotal, discount, total, finalTotal;
    //int isStudent = 0;
    char answer;

    printf("Are You a student? (Y/y for yes and N/n for no) ");
    scanf("%c", &answer);

    printf("What is your total purchase?");
    scanf("%f", &purchaseTotal);

    if(answer == 'Y' || answer == 'y') {
        // isStudent = 1;
        discount = purchaseTotal * 0.20;
        discountedtotal = purchaseTotal - discount;
        salesTax = 0.05 * discountedtotal;
        finalTotal = discountedtotal + salesTax;

        printf("\nTotal purchases                          $%.2f\n", finalTotal);

    } else if(answer == 'N' || answer == 'n') {
        // isStudent = 0;
        total = purchaseTotal;
        salesTax = 0.05 * total;
        finalTotal = total + salesTax;

        printf("\nTotal purchases                            $%10.2f\n", finalTotal);

    } else {
        printf("Invalid input");
    }



    int numStudents; // To hold the number of students
    char name[50];       // To hold the student's name
    char studentID[11]; // To hold the student ID (10 digits + null terminator)
    float grade;        // To hold the grade
    char letterGrade;   // To hold the letter grade

    // Ask for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Loop through each student
    for (int i = 0; i < numStudents; i++) {
        // Get student's name
        printf("\nEnter student's name: ");
        scanf("%49s", name); // Read the name (max 49 characters)

        // Get student ID
        printf("Enter student ID (10 digits): ");
        scanf("%10s", studentID); // Read the ID (max 10 characters)
    // Get student's grade
        printf("Enter grade: ");
        scanf("%f", &grade); // Read the grade

        // Determine letter grade
        if (grade >= 90) {
            letterGrade = 'A';
        } else if (grade >= 80) {
            letterGrade = 'B';
        } else if (grade >= 70) {
            letterGrade = 'C';
        } else if (grade >= 60) {
            letterGrade = 'D';
        } else {
            letterGrade = 'F';
        }

        // Display the information
        printf("Name: %s\n", name);
        printf("Student ID: %s\n", studentID);
        printf("Grade: %.2f\n", grade);
        printf("Letter Grade: %c\n", letterGrade);
    }



    // Input the scores of 10 students
// Count how many fall into these ranges:[0,60)[60,70)[70,80)[80,90)[90,100]
  int scores[10];
    int ranges [5] = {0};
    int i;

    printf("Please input the scores of 10 students:\n");
    for (i = 0; i < 10; i++) {
        printf("score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    for (i = 0; i < 10; i++) {
        if (scores[i] >= 0 && scores[i] < 60) {
            ranges[0]++;
        } else if (scores[i] >= 60 && scores[i] < 70) {
            ranges[1]++;
        } else if (scores[i] >= 70 && scores[i] < 80) {
            ranges[2]++;
        } else if (scores[i] >= 80 && scores[i] < 90) {
            ranges[3]++;
        } else if (scores[i] >= 90 && scores[i] <= 100) {
            ranges[4]++;
        }
    }

    printf("ranges:[0,60): %d\n", ranges[0]);
    printf("ranges:[60,70): %d\n", ranges[1]);
    printf("ranges:[70,80): %d\n", ranges[2]);
    printf("ranges:[80,90): %d\n", ranges[3]);
    printf("ranges:[90,100): %d\n", ranges[4]);



    return 0;
}

*/
