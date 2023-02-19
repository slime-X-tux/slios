#include <stdio.h>

long count(long long l);

int checksum(long long l)
{

    long long temp = l;
    long j = count(temp);

    int place[j];
    int d = 0;
    int k = 0;
    int g = 0;
    int divisor = 0;

    for (int i = 0; i<j; i++)
    {
        place[i] = temp %10;
        temp = temp / 10;

        g = place[i];
        if (divisor % 2 ==0)
        {
        d += g*2;
        }
        else if (divisor==0) {
        
        k += g;

        }

        else {
        k += g; 
        }
        divisor++;

    }

    printf("%d\n", k);
    printf("%d\n", d);

    long checksum = (k+d);

    printf("%ld",checksum);

    if (checksum%10 == 0)
    {
        printf("Valid");
    }
    
    else {
    printf("Invalid");
    }

    return 0;

}

void american(long l)
{

}

void visa(long l)
{
    
}

void mastercard(long l)
{
    
}


long count(long long l)
{
    long count =0;

    while (l != 0) {

        count++;
        l /= 10;
    }

    return count;
}

int input(void)
{
    long long input;
    printf("Enter a number - ");
    scanf("%lld",&input);

    int c = count(input);
    
    checksum(input);

    if (c==15)
    {
        american(input);
    }

    else if (c==13 || c==16)
    {
        visa(input);
    }

    else if (c==16)
    {
        mastercard(input);
    }

    else
    {
        //printf("INVALID\n");
    }
    
    return 0;

}

int main (void)
{
    input();
}