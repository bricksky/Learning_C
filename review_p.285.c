#include <stdio.h>

void print_ary(int *pa, int size); // 함수 선언, 매개변수 2개

int main(void)
{
    int ary1[5] = {10, 20, 30, 40, 50};         // 배열 요소의 개수가 5개인 배열
    int ary2[7] = {10, 20, 30, 40, 50, 60, 70}; // 요소의 개수가 7개인 배열

    print_ary(ary1, 5); // ary1 배열 출력, 배열 요소의 개수 전달
    printf("\n");
    print_ary(ary2, 7); // ary2 배열 출력, 배열 요소의 개수 전달

    return 0;
}

void print_ary(int *pa, int size) // 배열명과 배열 요소의 개수를 받는 매개변수 선언
{
    int i;

    for (i = 0; i < size; i++) // size값에 따라 반복 횟수 결정
    {
        printf("%d", pa[i]);
    }
}

// 17행에서 알 수 있듯이, void print_ary(int *pa, int size)   부분에서 size에 배열 요소의 개수를 저장해서 그 수 만큼 반복하는 것을 알 수 있다.