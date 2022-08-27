#include <stdio.h>
int main()
{
    float a, b;
    printf("Give a value to First Float\n");
    scanf("%f", &a);
    printf("Give a value to second Float\n");
    scanf("%f", &b);
    float *ptr = &a, *ptr2 = &b;
    printf("So the Adrress of First Float is %u\n", ptr);
    printf("So the Addrres of second Float %u\n", ptr2);
    int p = ptr - ptr2;
    printf("So the difference between the adres of first float and second float is %d\n", p * 4);

    return 0;
}