#include <stdio.h>
#include <stdlib.h>

/*
// Function to ask for student's name and return the grade
char askStudentDetails (char studentName[], char studentID[]) {
    char grade;

    printf("What's the student's name? ");
    scanf("%s", studentName);

    printf("Enter the student's ID (10 digits): ");
    scanf("%s", studentID);

    printf("What grade did the student get?");
    scanf(" %c", &grade);

    return grade;
}

void showStudentLevel (char grade) {
    if (grade == 'A' || grade == 'a') {
        printf("Performance Level: Excellent\n");
    } else if (grade == 'B' || grade == 'b') {
        printf("Performance Level: Good\n");
    } else if (grade == 'C' || grade == 'c') {
        printf("Performance Level: Fair\n");
    } else if (grade == 'D' || grade == 'd') {
        printf("Performance Level: Needs Improvement\n");
    } else if (grade == 'F' || grade == 'f') {
        printf("Performance Level: Failed\n");
    } else {
        printf("Unknown grade entered.\n");
    }

}


void showStudentInfo(char name[], char id[], char grade, int studentNumber) {
    printf("\n---- Student %d Info ----\n", studentNumber);
    printf("Name: %s\n", name);
    printf("ID: %s\n", id);
    printf("Grade: %c\n", grade);
    showStudentLevel(grade);

}



int main () {

    int totalStudents;
    char names[100][50];
    char ids[100][20];
    char grades[50];

    printf("How many students do you want to enter? ");
    scanf("%d", &totalStudents);

    for (int i = 0; i < totalStudents; i++) {
        printf("\n---- Enter info for student %d ----\n", i + 1);
        grades[i] = askStudentDetails(names[i], ids[i]);
    }


    printf("\n---- Student Report ----\n");

    for(int  i = 0; i < totalStudents; i++) {
        showStudentInfo(names[i], ids[i], grades[i], i + 1);
    }

    return 0;
}

*/
