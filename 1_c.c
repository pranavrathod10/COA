#include<stdio.h>

long long int arr[100];
long long int fibonacci(int n){
    if(n <= 1)  return n;
    
    if(arr[n] != 0)  return arr[n];
    else{
        arr[n] = fibonacci(n-1) + fibonacci(n-2);
        return arr[n];
    }
}

int main(){

    int n;
    scanf("%d", &n);
    int i = 1, j = 1;
    for(int i=0;i<n;i++){
        arr[i] = 0;
    }
    for(int i=0;i<=n;i++){
        long long int num = fibonacci(i);
        printf("%lld ", num);
    }
    return 0;

}