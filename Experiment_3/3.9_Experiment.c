#include <stdio.h>

int main() {
    // Define the productivity score
    int productivity_score;

    printf("What's your productivity score: " );
    scanf("%d", &productivity_score);

    // Evaluate employees' performance based on the productivity score
    if (productivity_score >= 90) {
        printf("Excellent performance!\n");
    } else if (90 > productivity_score >= 80) {
        printf("Very good performance.\n");
    } else if (80 > productivity_score >= 70) {
        printf("Good performance.\n");
    } else if (70 > productivity_score >= 60) {
        printf("Average performance.\n");
    } else {
        printf("Needs improvement.\n");
    }

    return 0;
}
