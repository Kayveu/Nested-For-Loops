#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// Primary lines
int main(void)
{

    //printf("Name: ");
    string name = get_string();
    
    if(name[0] != ' ')
    {
            printf("%c", toupper(name[0]));
    }
    
    for(int i = 0, n = strlen(name); i < n; i++)
    {
        if(name[i] == ' ')
        {
            printf("%c", toupper(name[i + 1]));
        }
    }
    printf("\n");
}