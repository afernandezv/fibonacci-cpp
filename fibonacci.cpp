#include "fibonacci.h"

int fibonacciIt(int n){
    int n1;
    int n2;
    int f;

    if(n == 1){
        return 1;
    }else if(n == 2){
        return 1;
    }else{
        n2 = 1;
        n1 = 1;
        for(int i = 2; i < n; i++){
            f = n1 + n2;
            n2 = n1;
            n1 = f;
        }
        return f;
    }
}

int fibonacciRec(int n){
    if(n == 0){
        return 0;
    }else if (n == 1){
        return 1;
    }else{
        return (fibonacciRec(n - 1) + fibonacciRec(n - 2));
    }
}