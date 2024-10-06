#include <stdio.h>
#include <stdlib.h>

int main(){

    srand(42);

    int min = 1;
    int max = 1000000;
    int num_random_numbers = 10000;

    int random_numbers[num_random_numbers];

    for(int i = 0; i< num_random_numbers; i++){
        random_numbers[i] = (rand() % (max - min + 1)) + min;
        }

    return 0;
    }

}

int MergeSort(arr[], left, right){

    n = num_random_numbers;
    n1 = (right - left) / 2;

    left[n1];
    right[n1];
    sorted_numbers[n];

    for(i = 0; i < n1; i++){
        left[i] = arr[i];
        right[i] = arr[n-n1+1 + i];
    }





    

}