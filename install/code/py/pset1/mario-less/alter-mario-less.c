/* Psudocode -
    1.get input form the user
    2.print pyramid according to the user input
*/

#include <stdio.h>
#include <stdbool.h>

void input();
void pyramid(int n);
void stars();
void hash();
void rp();

int main()
{

  input();
  return 0;

}

void input()
{
    int hight;

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

void pyramid(int n)
{

    for (int i = 1; i<=n; i++)
    {
    
    // left pyramid
    stars();
    hash();
    
    // space
    printf(" ");

    // right pyramid
    rp();

    //next line
    printf("\n");

    }

}

void stars()
{
    static int i=7;

    for (int l =1; l<=i; l++) {
    printf(" ");
    }
    i-=1;

}

void hash()
{

    static int i = 1;

    for (int l =1; l<=i; l++)
    {
        printf("#");
        
    }
    i+=1;

}

void rp()
{
    
    static int i =1;

    for (int l = 1; l<=i; l++)
    {
        printf("#");
    }
    i+=1;

}