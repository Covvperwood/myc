#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    int sum = 0;
    while(i <= 10){
        sum = sum + i;
        i++;
    }
    printf("%d\n", sum);
    return 0;
}