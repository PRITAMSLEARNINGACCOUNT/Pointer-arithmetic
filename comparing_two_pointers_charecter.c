#include<stdio.h>
int main(){
    char a,b;
    printf("Give a first charecter\n");
    scanf("%s",&a);
    printf("Give a second charecter\n");
    scanf("%s",&b);
    char *p;
    char *s;
    p=&a;
    s=&b;
    printf("So the adress of first varriable is %u\n",p);
    printf("So the first value you gave is %c\n",*p);
    printf("So the adress of second varriable is %u\n",s);
    printf("So the second value you gave is %c\n",*s);
    if (p<s)
    {
        printf("The adress of your given Second varriable %u is bigger than your given First varriable\n",s);
        printf("So the adress of your given first varriable is %u\n",p);
        printf("Last of all difference between adress of this two varriable is %d\n",s-p);
    }
    else
    {
        printf("The adress of your given First varriable you gave %u is bigger than second varriable\n",p);
        printf("So the adress of your given Second varriable is %u\n",s);
        printf("Last of all difference between adress of this two varriable is %d\n",p-s);
    }
    return 0;

}