#include <stdio.h>


int main() {

    int student_score;
    int PASSING_THRESHOLD = 50;

    printf("what's the score of the student : \n");
    scanf("%d", &student_score);

    if (student_score > PASSING_THRESHOLD) {
        printf("Student has Passed with a score of %d\n", student_score);
    }


   else {
        printf("Student has failed with a score of %d\n", student_score);
    }

    return 0;
}
