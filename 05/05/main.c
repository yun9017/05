//
//  main.c
//  05
//
//  Created by 한서윤 on 10/2/25.
//

#include <stdio.h>

int main(int argc, char * argv[]) {
    int x;
    int i;
    int sum=0;
    
    printf("Enter an interger: ");
    scanf("%d", &x);
    
    for(i = 1 ;i <= x; i++)
        sum = sum + i;
        
    printf("sum is %i\n", sum);
    
    return 0;
}
