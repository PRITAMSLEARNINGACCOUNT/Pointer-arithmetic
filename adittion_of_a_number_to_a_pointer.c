#include <stdio.h>
int main()
{
    int pritam = 12;
    int p;
    int *ptr2 = &p;
    int *ptr = &pritam;
    printf("Give an integer value\n");
    scanf("%d", &p);

    printf("So the adrress or value of an integer is %u\n", ptr);
    printf("So the value of an integer is %d\n", *ptr);
    ptr++;
    printf("So the adrress or value of an integer after increment is %u\n", ptr);
    printf("So the adrress or value of the integer given by you is %u\n", ptr2);
    printf("So the value of an integer given by you is %d\n", *ptr2);
    ptr2++;
    printf("So the adrress or value of the integer given by you after increment is %u\n", ptr2);
    return 0;
}
