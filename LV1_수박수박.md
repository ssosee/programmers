###### 문제 설명

길이가 n이고, 수박수박수박수....와 같은 패턴을 유지하는 문자열을 리턴하는 함수, solution을 완성하세요. 예를들어 n이 4이면 수박수박을 리턴하고 3이라면 수박수를 리턴하면 됩니다.

##### 제한 조건

- n은 길이 10,000이하인 자연수입니다.

##### 입출력 예

| n    | return   |
| ---- | -------- |
| 3    | 수박수   |
| 4    | 수박수박 |

```c
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(sizeof(char)*30000);
    for(int i =0; i < n; i++){
        if(i%2 == 0){ //짝수 이면
            strcat(answer, "수");
        }
        else if(i%2 == 1){
            strcat(answer, "박");
        }
    }
    return answer;
    free(answer);
}
```