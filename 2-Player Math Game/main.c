//
//  main.c
//  2-Player Math Game
//
//  Created by Tyler Yan on 2015-06-30.
//  Copyright (c) 2015 Foodee. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, const char * argv[]) {
    // insert code here...
    

    int player1Lives = 3;
    int player2Lives = 3;
    int player1Guess;
    int player2Guess;
    
  

    
    while (player1Lives > 0 || player2Lives >0) {
        
        srand( (unsigned)time( NULL ) );
        
        int randomNumber1 = (rand() % 20 + 1);
        int randomNumber2 = (rand() % 20 + 1);
        
        
        printf("What is %d + %d, Player 1?\n", randomNumber1, randomNumber2);
        scanf("%d", &player1Guess);
        
        if (player1Guess == randomNumber1 + randomNumber2) {
            
            printf("Correct! %d \n", player1Lives);
            
            
        } else {
            
            printf("Incorrect!, you have %d lives left\n", player1Lives-1);
            
            player1Lives--;

           }
        srand( (unsigned)time( NULL ) );
        
        int randomNumber11 = (rand() % 20 + 1);
        int randomNumber22 = (rand() % 20 + 1);
        
        printf("What is %d + %d, Player 2?\n", randomNumber11, randomNumber22);
        scanf("%d", &player2Guess);
        
        if (player2Guess == randomNumber11 + randomNumber22) {
            
            printf("Correct!\n");
            
            
        } else {
            
            printf("Incorrect!, you have %d lives left\n", player2Lives-1);
            
            player2Lives--;
            
        }
    }
    
    
    
    return 0;
}
