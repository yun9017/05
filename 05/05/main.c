//
//  main.c
//  05
//
//  Created by 한서윤 on 10/2/25.
//

#include <stdio.h>

int main(int argc, char * argv[]) {
    int a,b;
    char op;
    int result;
    
    printf("Enter the calculation: ");
    scanf("%i %c %i", &a, &op, &b);
    
    switch(op)
    {
        case '+':
            result = a+b;
            break;
        case '-':
            result = a-b;
            break;
        case '*':
            result = a*b;
            break;
        case '/':
            result = a/b;
            break;
        default:
               break;
    }
        
    printf("=%i\n", result);
    
    return 0;
}

