#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float x,z;
    scanf("%d" "%d", &a, &b);
    scanf("%f" "%f" , &x, &z);
    int sum = a+b;
    int diff = a-b;
    float sum2=x+z;
    float diff2=x-z;
    
    printf("%d %d\n", sum, diff );
    printf("%.1f %.1f" , sum2 , diff2);
    
    return 0;
}
