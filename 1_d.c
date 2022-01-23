#include<stdio.h>


int main() {
    int n;
    scanf("%d", &n);
    int i = 1, j = 1;
    long long int arr[n+1];
    arr[0] = 0; 
    arr[1] = 1;
    arr[2] = 1;

    for(int i=3;i<n+1;i++) {
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(int i=0;i<=n;i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}