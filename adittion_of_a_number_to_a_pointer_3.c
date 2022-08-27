#include <stdio.h>
int main()
{
    char pp;
    
    char *ptr = &pp;
    printf("Give a charecter to the varriable pritam\n");
    scanf("%c",&pp);

    printf("So the adrress or value of an integer is %u\n", ptr);
    printf("So the value of a charecter is %c\n", *ptr);

    ptr++;
    printf("So the adrress or value of an integer after increment is %u\n", ptr);
    return 0;
}
