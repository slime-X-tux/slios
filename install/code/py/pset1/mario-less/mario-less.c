/* Psudocode -
    1.get input form the user
    2.print pyramid according to the user input
*/

#include <stdio.h>
#include <stdbool.h>

void input();
void pyramid(int k);

void main()
{

  input();

}

void input()
{
    const int hight;

    printf("Enter the hight of the pyramid (Between 1 to 8): ");
    scanf("%d", &hight);

    if (hight >0)
    {
        if (hight < 9)
        {
            pyramid(hight);
        }
        else
        {
            printf("Invalid Input\n");
        }
    }

    else
    {
        printf("Invalid Input\n");
    }

}

void pyramid(int k)
{

    for(int i=0; i<k; i++)
    {

        for(int j=0; j<=i; j++)
        {
            printf("#");
        }
        printf("\n");
        
    }

}

