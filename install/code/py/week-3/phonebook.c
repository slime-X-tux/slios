#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    string strings[] = {"Nikhil", "Piyush"};
    string nums[] = {"9982", "999"};
    string lol = get_string("Enter a string : ");

    for(int i =0; i<2; i++)
    {
        if(strcmp(strings[i], lol)==0)
        {
            printf("String found the number is -  %s\n", nums[i]);
            return 0;
        }
    }
    printf("String not found\n");
    return 1;
}