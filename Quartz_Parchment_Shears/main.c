//
//  main.c
//  Quartz_Parchment_Shears
//
//  Created by Marcus Ward on 7/18/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void user_choice(char cpu_move[]){
    char user[] = "default";
    printf("Rock, Paper, or Scissors.");
    scanf("%c", user);
    printf(user, "\n");
    printf(cpu_move);
    
    if (user == cpu_move) {
        printf("tie");
    }
    
}


void cpu_choice(int rng_num){
    
    if (rng_num <= 33) {
        char choice[] = "Rock";
        printf(choice);
        user_choice(choice);
    }
    else if (rng_num > 33 && rng_num < 66){
        char choice[] = "Paper";
        printf(choice);
        user_choice(choice);
    }
    else if (rng_num >= 66){
        char choice[] = "Scissors";
        printf(choice);
        user_choice(choice);
    }
    
}



void rng(){
    srand ( time(NULL) );
    int num = rand() % 100;
    printf("%d", num);
    cpu_choice(num);
}


void main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    rng();
}


