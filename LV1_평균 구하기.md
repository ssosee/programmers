###### 문제 설명

정수를 담고 있는 배열 arr의 평균값을 return하는 함수, solution을 완성해보세요.

#### 제한사항

- arr은 길이 1 이상, 100 이하인 배열입니다.
- arr의 원소는 -10,000 이상 10,000 이하인 정수입니다.

#### 입출력 예

| arr       | return |
| --------- | :----: |
| [1,2,3,4] |  2.5   |
| [5,5]     |   5    |

```c
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
double solution(int arr[], size_t arr_len) {
    double answer = 0;
    double sum = 0;
    int i = 0;
    if(arr_len >= 1 && arr_len <=100){
        for(i = 0; i < arr_len; i++){
            if(arr[i] <= 10000 && arr[i] >= -10000)
            sum  = arr[i] + sum; //합 구하는 식
        }
        answer = sum/i; //평균 식
    }
    return answer;
}
```