#include <stdio.h>
#include <math.h>
int main() 
{
    int color,cost;
    float tax;
    scanf("%d",&color);
    tax=(10.0/100.0)*((float)color*5+40);
    cost=(color*5)+40+ceil(tax);
    printf ("%d",cost);
    return 0;
}
