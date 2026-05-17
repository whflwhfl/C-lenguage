#include <stdio.h>
int main()
{   
    int nInput = 0, bResult = 0;

    scanf_s("%d", &nInput);
    bResult = nInput > 3 && nInput < 20;
    //bResult = 3 < nInput < 20; -->잘못된 코드

    printf("Result: %d (1: True, 0: False)\n", bResult);


    //잘못된 코드(범위검사의 흔한 오류)
    //논리 연산자는 왼쪽에서 오른쪽으로 계산을 한다.
    //왼쪽의 코드가 거짓이면 오른쪽의 코드가 참이되어
    //거짓이 나와야하는 의도와 다르게 참을 출력하게 된다.
    //ex) 숫자 2
}
