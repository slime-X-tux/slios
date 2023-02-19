#include <cs50.h>
#include <stdio.h>

string plaintext(void);
void caeser(string g);

int main(int argc, string argv[]) 
{
    string c = plaintext();

    caeser(c);
}

string plaintext(void)
{
    string g = get_string("plaintext : ");
    return g;
}

void caeser(string g)
{
    printf("chipher   : %s\n",g);
}