#include <stdio.h>
int main()
{
    char pp;
    
    char *ptr = &pp;
    printf("Give a charecter to the varriable pp\n");
    scanf("%c",&pp);

    printf("So the adrress or value of an integer is %u\n", ptr);
    printf("So the value of a charecter is %c\n", *ptr);

    ptr--;
    printf("So the adrress or value of an integer after Decrement is %u\n", ptr);
    return 0;
}