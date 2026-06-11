#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

float calculateGPA(float newPoints, float newHours);

int main() {
float finalGrade;
float gpaHours;
float qualityPoints;
char response[3];

printf("Enter your current GPA hours:\n");
scanf("%f", &gpaHours);
printf("Enter your current quality points:\n");
scanf("%f", &qualityPoints);
finalGrade = qualityPoints / gpaHours;

printf("Your current GPA is: %.2f\n", finalGrade);
sleep(1);
printf("Would you like to calculate prospective GPA? (y/n)\n");
scanf("%s", response);
//works until here

if (strcmp(response, "y") == 0) {
    int numCourses;
    printf("Enter the number of courses you want to calculate:\n");
    scanf("%d", &numCourses);

    for (int i = 0; i < numCourses; i++) {
        float nP, nH;
        printf("Enter the credit hours for course %d:\n", i + 1);
        scanf("%f", &nH);
        qualityPoints += calculateGPA(nP, nH);
        gpaHours += nH;
    }

    finalGrade = qualityPoints / gpaHours;
    printf("Your prospective GPA is: %.2f\n", finalGrade);
}


else {
    printf("Goodbye!\n");
}
return 0;
}

float calculateGPA(float newPoints, float newHours) {
    printf("Enter the letter grade for the course: (A, A-, B+, B, B-, C+, C, C-, D+, D, D-, F):\n");
                char letterGrade[3];
                scanf("%s", letterGrade);
                if (strcmp(letterGrade, "A") == 0) {
                    newPoints = 4.0 * newHours;
                } else if (strcmp(letterGrade, "A-") == 0) {
                    newPoints = 3.7 * newHours;
                } else if (strcmp(letterGrade, "B+") == 0) {
                    newPoints = 3.3 * newHours;
                } else if (strcmp(letterGrade, "B") == 0) {
                    newPoints = 3.0 * newHours;
                } else if (strcmp(letterGrade, "B-") == 0) {
                    newPoints = 2.7 * newHours;
                } else if (strcmp(letterGrade, "C+") == 0) {
                    newPoints = 2.3 * newHours;
                } else if (strcmp(letterGrade, "C") == 0) {
                    newPoints = 2.0 * newHours;
                } else if (strcmp(letterGrade, "C-") == 0) {
                    newPoints = 1.7 * newHours;
                } else if (strcmp(letterGrade, "D+") == 0) {
                    newPoints = 1.3 * newHours;
                } else if (strcmp(letterGrade, "D") == 0) {
                    newPoints = 1.0 * newHours;
                } else if (strcmp(letterGrade, "D-") == 0) {
                    newPoints = 0.7 * newHours;
                } else if (strcmp(letterGrade, "F") == 0) {
                    newPoints = 0.0 * newHours;
                } else {
                    printf("Invalid letter grade! Assuming F.\n");
                    newPoints = 0.0 * newHours;
                }
    return newPoints;
}