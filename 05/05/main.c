//
//  main.c
//  05
//
//  Created by 한서윤 on 10/2/25.
//

#include <stdio.h>

int main(int argc, char * argv[]) {
    int answer = 59;
    int num;
    int trial=0;
    
    do
    {
        printf("Input a number: ");
        scanf("%d", &num);
        trial++;
        
        if (answer > num)
            printf("high!\n");
        else if (answer < num)
            printf("low!\n");
    }
    while(answer != num);
    
    printf("Congratulation! trial: %i\n", trial);
    
    return 0;
}

