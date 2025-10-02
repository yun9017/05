//
//  main.c
//  05
//
//  Created by 한서윤 on 10/2/25.
//

#include <stdio.h>

int main(int argc, char * argv[]) {
    int x;
    
    printf("Enter an interger: ");
    scanf("%d", &x);
    
    if (x>0){
        printf("absolute is %i.\n",x);
    }
    else if (x<0){
        printf("absolute is %i.\n",-x);
    }
    
    return 0;
}
