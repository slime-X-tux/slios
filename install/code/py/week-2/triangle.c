#include <stdio.h>
#include <cs50.h>

bool valid(float a, float b, float c);

int main(void)
{
    float a = get_float("Enter the first side: ");

    float b = get_float("Enter the second side: ");

    float c = get_float("Enter the third side: ");

    if(a>=0 && b>=0 && c>=0)
    {
        if(valid(a, b, c)==true)
        {
            printf("The triangle is valid\n");
        }
    }
    else {
    printf("The triangle is invalid\n");
    }

}

bool valid(float a,float b,float c)
{
    bool valid;
    if((a+b)>c)
    {
        valid = true;
    }
    else {
    valid = false;
    }
    return valid;
}