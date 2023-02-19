/* This program is for problem set 1 of CS50 and the first problem where we have to enter our name.
*/
#include <stdio.h>

int main() 
{

    char fullName [30];

    printf("Type your full name: ");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s", fullName);

} 