/*

다음은 각 달의 일수를 저장한 배열입니다. month[0]은 1월이며, 첨자가 순차적으로 증가할 때 월도 함께 증가합니다.
month 배열의 값을 한 줄에 5개씩 출력하는 함수를 만들어보세요.

*/

/*
int month[12]={31, 28, 31,30, 31, 30, 31, 31, 30, 31, 30, 31}

void print_month(*int *mp)              // 배열명을 저장할 포인터
{
    int i;                              // 반복 제어 변수
    for(i =0; i<12; i++)                // 출력 12번 반복
    {
        printf("%5d", mp[i]);           // 각 달의 일수 출력
        if((i+1)%5==0) printf("\n");    // 출력 개수가 5의 배수면 줄 바꿈
    }
}
*/