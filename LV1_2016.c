#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    int date = 0;
    char* days[7] = {"FRI","SAT","SUN","MON","TUE","WED","THU"};
    int month_date[12] = {31,29,31,30,31,30,31,31,30,31,30,31};

    //배열은 0부터 시작하고 만약 1월의 요일을 알고 싶으면 이과정을 거칠 필요가 없고 바로                     date = date + b; 만 하면 되서 a-1로 한다.
    for(int i = 0; i< a-1; i++ ){
        //n월부터 N월까지 일수 계산
        date = date + month_date[i];
    }
    date = date + b; //전체 일수 계산
    date = (date-1)%7; //배열의 시작은 0이므로 -1
    //date = (date)%7 - 1; 하면 안되는 이유 date 값이 -1값이 될수 있기 때문에
    //printf("%d",date);
    return days[date];
}
