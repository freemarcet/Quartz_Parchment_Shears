//
//  main.c
//  Quartz_Parchment_Shears
//
//  Created by Marcus Ward on 7/18/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cpu_choice(int rng_num){
    
    if (rng_num <= 33) {
        char choice[] = "Rock";
        printf(choice);
    }
    else if (rng_num > 33 && rng_num < 66){
        char choice[] = "Paper";
        printf(choice);
    }
    else if (rng_num >= 66){
        char choice[] = "Scissors";
        printf(choice);
    }
    
}

void rng(){
    printf("inside func now\n");
    srand ( time(NULL) );
    int num = rand() % 100;
    printf("%d", num);
    cpu_choice(num);
}


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    rng();
    return 0;
}

