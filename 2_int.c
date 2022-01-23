#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    scanf("%d", &n);
    int a[n][n], b[n][n], Mtrix[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]= rand();
            b[i][j]=rand();
        }
    }

    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            Mtrix[i][j] = 0;
            for(int k=0;k<n;k++){
                Mtrix[i][j] = Mtrix[i][j] + a[i][k]*b[k][j]; 
            }
            printf("%d ", Mtrix[i][j]);
        }
        printf("\n");
    }
    return 0;

}