#include<stdio.h>
int main(){
    int a,b;
    printf("Give a value to first varriable\n");
    scanf("%d",&a);
    printf("Give a value to second varriable\n");
    scanf("%d",&b);
    int *p;
    int *s;
    p=&a;
    s=&b;
    printf("So the adress of first varriable is %u\n",p);
    printf("So the first value you gave is %d\n",*p);
    printf("So the adress of second varriable is %u\n",s);
    printf("So the second value you gave is %d\n",*s);
    if (p<s)
    {
        printf("The adress of your given Second varriable %u is bigger than your given First varriable\n",s);
        printf("So the adress of your given first varriable is %u\n",p);
        printf("Last of all difference between adress of this two varriable is %d\n",(s-p)*4);
    }
    else
    {
        printf("The adress of your given First varriable you gave %u is bigger than second varriable\n",p);
        printf("So the adress of your given Second varriable is %u\n",s);
        printf("Last of all difference between adress of this two varriable is %d\n",(p-s)*4);
    }
    return 0;

}