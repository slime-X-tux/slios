#include <cs50.h>
#include <string.h>
#include <stdio.h>

typedef struct 
{
    string name;
    string number;
}
pep;

int main(void)
{
    pep peeps[2];

    peeps[0].name = "Nikhil";
    peeps[0].number = "999";

    peeps[1].name = "Piy";
    peeps[1].number = "999";


    string lol = get_string("Enter a string : ");

    for(int i =0; i<2; i++)
    {
        if(strcmp(peeps[i].name, lol)==0)
        {
            printf("String found the number is -  %s\n", peeps[i].number);
            return 0;
        }
    }
    printf("String not found\n");
    return 1;
}