/* pset1 mario.c */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    int h, a, i, g;
    
    printf("Height: ");
    h = get_int();
    
    while (h > 23 || h < 0) {
        printf("Height: ");
        h = get_int();
    }
    
    for(i = 1; i < h + 1; i = i + 1)
    {
        for(g = 0; g < h - i; g = g + 1)
        {
            printf(" ");
        }
        for(a = 0; a < i + 1; a = a + 1)
        {
            printf("#");
        }
        printf("\n");
    }
}