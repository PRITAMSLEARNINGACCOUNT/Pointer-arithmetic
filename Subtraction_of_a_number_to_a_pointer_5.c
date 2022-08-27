#include <stdio.h>
int main()
{
    float avarriable[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Give an Float value\n");
        scanf("%f", &avarriable[i]);
    }
    float *ptr, *ptr2;
    ptr = &avarriable[0];
    ptr2 = &avarriable[1];
    printf("So the first value given by the user is %f\n", *ptr);
    printf("So the Adress of first value given by the user is %u\n", ptr);
    printf("So the Second value given by the user is %f\n", *ptr2);
    printf("So the Adress of Second value given by the user is %u\n", ptr2);
    ptr++;
    printf("So the Adress of first value given by the user after increment is %u\n", ptr);
    printf("So the value after increment on first varriable is %f\n", *ptr);
    ptr2--;
    printf("So the Adress of Second value given by the user after increment is %u\n", ptr2);
    printf("So the value after Decrement on Second varriable is %f\n", *ptr2);
    return 0;
}