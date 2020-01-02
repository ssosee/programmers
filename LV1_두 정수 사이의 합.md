###### 문제 설명

두 정수 a, b가 주어졌을 때 a와 b 사이에 속한 모든 정수의 합을 리턴하는 함수, solution을 완성하세요.
예를 들어 a = 3, b = 5인 경우, 3 + 4 + 5 = 12이므로 12를 리턴합니다.

##### 제한 조건

- a와 b가 같은 경우는 둘 중 아무 수나 리턴하세요.
- a와 b는 -10,000,000 이상 10,000,000 이하인 정수입니다.
- a와 b의 대소관계는 정해져있지 않습니다.

##### 입출력 예

| a    | b    | return |
| ---- | ---- | ------ |
| 3    | 5    | 12     |
| 3    | 3    | 3      |
| 5    | 3    | 12     |



```c
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    long long i = 0;
    long long sum_i = 0;
    if(a <= 10000000 && a >= -10000000 && b <= 10000000 && b >= -10000000){
        if(a > b){ //a<b인 경우
            for(i = b; i <= a; i++){
                sum_i = sum_i + i; //i의 누적 합을 sum_i에 저장  
                answer = sum_i;
            } 
        }
        if(a < b){
            for(i = a; i <= b; i++){
                sum_i = sum_i + i; 
                answer = sum_i;
            }
        }
        else if(a == b) answer = a; //둘 중 아무 수나 리턴
    }
    return answer;
}
```

