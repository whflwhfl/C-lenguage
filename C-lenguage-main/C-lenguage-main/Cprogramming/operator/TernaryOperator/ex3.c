#include <stdio.h>

int main(void)
{
    int nInput = 0, max = 0;
    

    scanf_s("%d", &nInput);
    //max = (nInput >= max) ? nInput : max;
    //처음 입력을 받아 가장 큰 수가 되므로 max에 입력값을
    //저장하기만 해도 된다.
    max = nInput;
    scanf_s("%d", &nInput);
    max = (nInput >= max) ? nInput : max;
    scanf_s("%d", &nInput);
    max = (nInput >= max) ? nInput : max;
    
   
    printf("MAX: %d", max);
}