#include <stdio.h>
int main()
{
    int a, b;
    printf("Give a value to First Integer\n");
    scanf("%d", &a);
    printf("Give a value to second integer\n");
    scanf("%d", &b);
    int *ptr = &a, *ptr2 = &b;
    printf("So the Adrress of First integer is %u\n", ptr);
    printf("So the Addrres of second integer %u\n", ptr2);
    int p=ptr-ptr2;
    printf("So the difference between the adress of first Integer and second Integer is %d\n", p * 4);
    return 0;
}