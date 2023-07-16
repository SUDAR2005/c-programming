#include <stdio.h>
int func()
{
    static int i=15;
    return i--;
}
void main()
{
    printf("%d",func());
    printf("%d",func());
}