//Bubble Sort

#include <stdio.h>

    int main(void){
        int i, j, temp;
        int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
        for(i=0; i< 10; i++){
            for(j=0; j<9-i; j++){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for(i=0; i< 10; i++){
        printf("%d", array[i]);
    }

//비교하는 집합의 크기를 하나씩 감소시킴, 비교연산은 선택정렬과 마찬가지로 등차수열의 합만큼 이루어짐.-> 자리를 바꾸는 연산을 계속 사용하므로 더 비효율적임