#include <stdio.h>
int main()
{
 int nAge = 0, nHeight = 0;

 printf("나이를 입력하세요: ");
 scanf_s("%d", &nAge);
 printf("키를 입력하세요. :");
 scanf_s("%d", &nHeight);

 printf("결과 : %d (1:합격, 0:불합격)\n",
    nAge >= 20 && nAge <= 30 && nHeight >= 150);
    //지원 자격 기준을 확인하기 위해 나이와 키 조건을 검사한다.
    //합격 기준 : 나이 20~30세, 키 150cm 이상
    
    //프로그래머 입장
    //왼쪽 조건이 거짓이면 AND 결과도 거짓이므로
    //오른쪽 조건은 검사하지 않는다.(short circuit)
    


}