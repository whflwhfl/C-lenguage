#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int nInput = 0;
    char nSelect;
    
    printf("점수를 입력하세요: ");
    scanf_s("%d", &nInput);
   

    printf("결과: %s\n", (nInput >= 80) ? "합격" : "불합격");
    
    return 0;
}