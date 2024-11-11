//18강 Union-Find

#include <stdio.h>

int getParent(int parent[], int x){
    if(parent[x] == x) 
        return x;
    else
        return parent[x] = getParent(parent, parent[x]);
}

int unionParent(int parent[], int a, int b){
    a = getParent(parent, a);
    b = getParent(parent, b);
    if(a<b) parent[b] = a;
    else parent[a] = b;
}

int findParent(int parent[], int a, int b){
    a = getParent(parent, a);
    b = getParent(parent, b);
    if(a == b) return 1;
    return 0;
}

int main(void) {
    int parent[11];
    for(int i = 1; i <= 10; i++){
        parent[i] = i;
    }
    //이후 위의 함수를 써서 그래프를 만들면됨.
}