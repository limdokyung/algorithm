#include <stdio.h>

int CoinChange(){
    change = W;
    n500, n100, n50, n10, n1 = 0;

    while(change >= 500){
        change = change - 500;
        n500++;
    }
    while(change >= 100){
        change = change - 100;
        n100++;
    }
    while(change >= 50){
        change = change - 50;
        n50++;
    }
    while(change >= 10){
        change = change - 10;
        n10++;
    }
    while(change >= 1){
        change = change - 1;
        n1++;
    }
    return n500+n100+n50+n10+n1;
}