###### 문제 설명

자연수 n을 뒤집어 각 자리 숫자를 원소로 가지는 배열 형태로 리턴해주세요. 예를들어 n이 12345이면 [5,4,3,2,1]을 리턴합니다.

##### 제한 조건

- n은 10,000,000,000이하인 자연수입니다.

##### 입출력 예

| n     | return      |
| ----- | ----------- |
| 12345 | [5,4,3,2,1] |

```c
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    int* answer = (int*)malloc(sizeof(int)*100);
    int i = 0; //배열의 시작은 0
    while(n != 10000000001 && n !=0){
        answer[i] = n%10; //1의 자리 수를 넣음.
        n = n/10; //1의 자리수를 제거.
        i++; //증가
    }
    return answer;
}
```