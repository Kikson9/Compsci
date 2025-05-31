#include <stdio.h>
#include <stdlib.h>
#define SIZE 20



// Function Prototypes
void initializeArray(int arr[]);
void printArray(int arr[]);
int findHighest(int arr[]);
int findLowest(int arr[]);
int findSum(int arr[]);
void printLetterGrades(int whichSection, int arr[]);

// Main function
int min(void) {
    int section1[SIZE], section2[SIZE];

    // Input grades
    printf("Enter grades for section 1:\n");
    initializeArray(section1);
    printf("Enter grades for section 2:\n");
    initializeArray(section2);

    // Print grades
    printf("\n... section 1 grades ...\n");
    printArray(section1);
    printf("\n... section 2 grades ...\n");
    printArray(section2);

    // Stats for section 1
    int high1 = findHighest(section1);
    int low1 = findLowest(section1);
    int sum1 = findSum(section1);
    float avg1 = (float)sum1 / SIZE;

    // Stats for section 2
    int high2 = findHighest(section2);
    int low2 = findLowest(section2);
    int sum2 = findSum(section2);
    float avg2 = (float)sum2 / SIZE;

    // Print stats
    printf("\nsection 1 highest grade: %d lowest grade: %d average: %.2f\n", high1, low1, avg1);
    printf("section 2 highest grade: %d lowest grade: %d average: %.2f\n", high2, low2, avg2);

    // Letter grades
    printLetterGrades(1, section1);
    printLetterGrades(2, section2);

    return 0;
}

/* ----------------------------------------------------------- */
/* description: takes input and fills the array                */
/* inputs: array of integers                                   */
/* outputs: none                                               */
/* ----------------------------------------------------------- */
void initializeArray(int arr[]) {
    for (int i = 0; i < SIZE; i++) {
        printf("Enter grade %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

/* ----------------------------------------------------------- */
/* description: prints all the values in the array             */
/* inputs: array of integers                                   */
/* outputs: none                                               */
/* ----------------------------------------------------------- */
void printArray(int arr[]) {
    for (int i = 0; i < SIZE; i++) {
        printf("%d\n", arr[i]);
    }
}

/* ----------------------------------------------------------- */
/* description: finds and returns the highest value            */
/* inputs: array of integers                                   */
/* outputs: highest integer in the array                       */
/* ----------------------------------------------------------- */
int findHighest(int arr[]) {
    int max = arr[0];
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

/* ----------------------------------------------------------- */
/* description: finds and returns the lowest value             */
/* inputs: array of integers                                   */
/* outputs: lowest integer in the array                        */
/* ----------------------------------------------------------- */
int findLowest(int arr[]) {
    int min = arr[0];
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

/* ----------------------------------------------------------- */
/* description: finds and returns the sum of array values      */
/* inputs: array of integers                                   */
/* outputs: sum of values                                      */
/* ----------------------------------------------------------- */
int findSum(int arr[]) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }
    return sum;
}

/* ----------------------------------------------------------- */
/* description: prints number of A, B, C, D, and F grades      */
/* inputs: section number and array of grades                  */
/* outputs: none                                               */
/* ----------------------------------------------------------- */
void printLetterGrades(int whichSection, int arr[]) {
    int a = 0, b = 0, c = 0, d = 0, f = 0;

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] >= 90)
            a++;
        else if (arr[i] >= 80)
            b++;
        else if (arr[i] >= 70)
            c++;
        else if (arr[i] >= 60)
            d++;
        else
            f++;
    }

    printf("section %d A's: %d B's: %d C's: %d D's: %d F's: %d\n",
           whichSection, a, b, c, d, f);

}
/* TESTING SECTION 1
78, 89, 94, 67, 88, 92, 96, 45, 87, 54,
93, 92, 87, 66, 35, 29, 78, 45, 85, 94
*/

/* TESTING SECTION 2
56, 88, 89, 94, 69, 55, 92, 94, 84, 69,
93, 45, 93, 84, 88, 78, 94, 92, 85, 64
*/


