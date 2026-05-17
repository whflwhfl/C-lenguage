#include <stdio.h>

int main()
{
    int aInput = 0, bInput = 0, cInput = 0;
    int max = 0;
    scanf_s("%d %d %d", &aInput, &bInput, &cInput);
    
    max = aInput;
    max = (max >= bInput) ?  max: bInput;
    max = (max >= cInput) ? max : cInput;

    printf("MAX: %d", max);
}