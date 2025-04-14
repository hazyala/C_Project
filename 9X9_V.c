#include <stdio.h>

void main() {
    int i, j;

    for (i = 2; i <= 9; i++) 
    {
        printf("   [ %d´Ü ]     ", i);
    }
    printf("\n");

    for (j = 1; j <= 9; j++) 
    {        
        for (i = 2; i <= 9; i++) 
        {         
           printf("%2d x %d = %2d  | ", i, j, i * j);
        }
        printf("\n");
    }
}
