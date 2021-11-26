#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main ()
{
    string s = get_string("Введіть будь-який текст:");
    for(int i = strlen(s); i > 0; i--)
    {
        printf("%c", s[i]);
    }
    return 0;
}
