#include <stdio.h>

int main()
{
    const int i = 20;
    int* p  = &i;
    *p = 30;
    printf("i = %d\n",i);
    printf("Hello World!\n");
    return 0;
}
