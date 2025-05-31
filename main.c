#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Create a structure called "Student" with members name, age,
// and total marks. Write a C program to input data for two students,
// display their information, and find the average of total marks.

void studentProgram ()
{
   typedef struct {
    char name[100];
    char age[100];
    int totalMark;
   } Student;

   Student student[2];
   char input[100];
   int i;
   int total = 0;

    for(i = 0; i < 2; i++) {
        printf("\nInput data for student %d, with members name, age, and total marks (e.g Alice 19 85): ", i + 1);
        fgets(input, sizeof input, stdin);
        sscanf(input, "%s %s %d", student[i].name, student[i].age, &student[i].totalMark);

        total = total + student[i].totalMark;
    }
    float average = total/2.0;

    for(i = 0; i < 2; i++) {
        printf("\nInformation for student %d\n", i+1);
        printf("Name: %s\nage: %s\nTotal mark: %d\nAverage: %.2f\n", student[i].name, student[i].age, student[i].totalMark, average);
    }

}

/*
Define a structure named Time with members hours, minutes, and seconds.
Write a C program to input two times, add them, and display the result in proper time format.
*/

void timeProgram ()
{
    typedef struct {
        int hours;
        int minutes;
        int seconds;
    } Time;

    Time time[2], sum;
    char input[100];
    int i;

    for (i = 0; i < 2; i++) {
        printf("Input time %d (e.g hh mm ss): ", i + 1);
        fgets(input, sizeof(input), stdin);
        sscanf(input, "%d %d %d", &time[i].hours, &time[i].minutes, &time[i].seconds);

    }

    sum.hours = time[0].hours + time[1].hours;
    sum.minutes = time[0].minutes + time[1].minutes;
    sum.seconds = time[0].seconds + time[1].seconds;

    if(sum.seconds >= 60) {
        sum.seconds -= 60;
        sum.minutes += 1;
    }

    if (sum.minutes >= 60) {
        sum.minutes -= 60;
        sum.hours += 1;
    }

    printf("The total time is %02d:%02d:%02d\n", sum.hours, sum.minutes, sum.seconds);

}

// Create a structure named Book to store book details like title, author, and price.
// Write a C program to input details for three books,
// find the most expensive and the lowest priced books,
// and display their information.

void bookProgram()
{
    typedef struct {
        char title[100];
        char author[100];
        int price;
    } Book;

    Book book[3];
    int i;
    char input[100];

    for (i = 0; i < 3; i++) {
        printf("Input book details for book %d (e.g title, author, and price): ", i + 1);
        fgets(input, sizeof(input), stdin);
        sscanf(input, "%s %s %d", book[i].title, book[i].author, &book[i].price);
    }

    for (i = 0; i < 3; i++) {
        printf("\nDetails for book %d:\nTitle: %s\nAuthor: %s\nPrice: $%d\n", i + 1, book[i].title, book[i].author, book[i].price);
    }

    int maxPrice = book[0].price;
    int minPrice = book[0].price;
    int maxIndex = 0, minIndex = 0;

    for (i = 1; i < 3; i++) {
        if (book[i].price > maxPrice) {
            maxPrice = book[i].price;
            maxIndex = i;
        }

        if (book[i].price < minPrice) {
            minPrice = book[i].price;
            minIndex = i;
        }
    }

    printf("\nThe most expensive book is %s -- priced at %d", book[maxIndex].title, book[maxIndex].price);
    printf("\nThe least expensive book is %s -- priced at %d\n", book[minIndex].title, book[minIndex].price);

}

int main() {
    bookProgram();
    return 0;
}
