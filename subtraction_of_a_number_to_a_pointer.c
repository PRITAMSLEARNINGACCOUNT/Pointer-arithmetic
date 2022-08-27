#include <stdio.h>
int main()
{
    float pritam = 1256.3, p;

    float *ptr = &pritam;
    float *ptr2 = &p;
    printf("Give a float value\n");
    scanf("%f", &p);

    printf("So the adrress or value of a float is %u\n", ptr);
    printf("So the value of a float is %f\n", *ptr);
    ptr--;
    printf("So the adrress or value of a float after Decrement is %u\n", ptr);
    printf("So the adrress or value of a float you given is %u\n", ptr2);
    printf("So the value of a float is %f\n", *ptr2);
    ptr2--;
    printf("So the adrress or value of a float you given after Decrement is %u\n", ptr2);
    return 0;
}
