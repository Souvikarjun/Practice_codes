#include<stdio.h>
#include<conio.h>

void main(){
    int player1, player2, player3;

    printf("what's the score of the player1 :");
    scanf("%d", &player1);
    printf("what's the score of the player2 :");
    scanf("%d", &player2);
    printf("what's the score of the player3 :");
    scanf("%d", &player3);

    if (player1>player2){
        
        if (player1>player3){
            printf("Player 1 has the heighest score");
        }
        else{
            printf("Player 3 has the heighest score");
        }
    }
    else{
        if (player2>player3){
            printf("Player 2 has the heighest score");
        }
        else{
            printf("Player 3 has the heighest score");
        }
    } 

getch();
}