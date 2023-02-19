#include <stdio.h>
#include <cs50.h>
#include <string.h>

int line(void);

int main(void)
{
    return line();
}

int line(void)
{
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};
    string n = get_string("Enter a string : ");

    for (int i =0; i<6; i++)
    {
        if(strcmp(strings[i], n)==0)
        {
            printf("Number found!\n");
            return 0;
        }
    }
    printf("Not found : \n");
    return 1;
}