//Insertion Sort

#include <stdio.h>

int main(void){
    int i, j, temp;
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    for(i = 0; i < 9; i++){
        j = i;
        while(array[j] > array[j+1]){
            temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
            j--;
        }
    }
    for(i=0; i< 10; i++){
        printf("%d", array[i]);
    }
}
//앞에꺼와 같은 시간복잡도이지만 실제 연산수는 앞에 세개중에 제일 적음. -> 이미 정렬되어있으면 쓸데없는과정을 안거쳐도됨.