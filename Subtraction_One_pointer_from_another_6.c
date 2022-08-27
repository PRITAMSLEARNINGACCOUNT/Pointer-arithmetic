#include <stdio.h>
int main()
{
    char array[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Give a charecter to varriable\n");
        scanf("%s", &array[i]);
    }
    char *ptr = &array[0];
    printf("So the first charecter you gave is %c\n", *ptr);
    printf("So the adress of first varriable is %u\n", ptr);
    char *ptr2 = &array[1];
    int a=ptr2-ptr;
    ptr++;
    printf("So the Second charecter you gave is %c\n", *ptr);
    printf("So the adress of Second varriable is %u\n", ptr);
    
    printf("So the difference between the adresss first varriable and second varriable given by you is %d\n",a);
    return 0;
}