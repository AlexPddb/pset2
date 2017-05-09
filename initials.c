#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    
    string ss = get_string();
    
    printf("%c", toupper(ss[0]));
    
    for (int i = 0; i < strlen(ss); i++)
    {
        if (ss[i] == ' ')
        {
            printf("%c", toupper(ss[i + 1]));
        }
    }
        printf("\n");
}
