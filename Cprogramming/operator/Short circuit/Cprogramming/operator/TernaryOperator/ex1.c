#include <stdio.h>

int main(void) 
{
    int nInput = 0, nSelect = 0;
    scanf_s("%d", &nInput);
    
    nSelect = (nInput <= 10) ? 10 : 20;
    printf("%d\n", nSelect);
    return 0;

    //nInput에 입력되는 값 10이하이면 10출력
    //10초과면 20출력
}