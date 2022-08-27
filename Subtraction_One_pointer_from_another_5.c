#include <stdio.h>
int main()
{
    float array[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Give a Value to varriable\n");
        scanf("%f", &array[i]);
    }
    float *ptr = &array[0];
    printf("So the first value you gave is %f\n", *ptr);
    printf("So the adress of first varriable is %u\n", ptr);
    float *ptr2 = &array[1];
    int a=ptr2-ptr;
    ptr++;
    printf("So the Second value you gave is %f\n", *ptr);
    printf("So the adress of Second varriable is %u\n", ptr);
    
    printf("So the difference between the address first varriable and second varriable given by you is %d\n",a*4);
    return 0;
}