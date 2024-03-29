#include <stdio.h>

int main(void)
{
    int a = 10, b = 15, total; // 변수 선언과 초기화
    double avg;                // 평균을 저장할 변수
    int *pa, *pb;              // 포인터 동시 선언
    int *pt = &total;          // 포인터 선언과 초기화
    double *pg = &avg;         // double형 포인터 선언과 초기화

    *pt = *pa + *pb; // a의 값과 b값을 더해 total 저장
    *pg = *pt / 2.0; // total 값을 2로 나눈 값을 avg에 저장

    printf("두 정수의 값 : %d, %d\n ", *pa, *pb); // a 값과 b값 출력
    printf("두 정수의 합: %d\n", *pt);            // total 값 출력      &는 주소연산자임을 반드시 기억하자!!
    printf("두 정수의 평균 : %.1lf\n", *pg);      // avg 값 출력

    return 0;
}

// 포인터가 어떤 변수를 가리케기 되면 그 이후에는 간접 참조 연산자를 통해 가리키는 변수를 자유롭게 사용할 수 있다.