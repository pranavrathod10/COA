#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    double a[n][n], b[n][n];

    for(int i=0;i<n;i++){
        for(int j = 0; j < n; j++){
            
            float x = (float)rand()/(float)(RAND_MAX/9);
            a[i][j]=x;
            float y = (float)rand()/(float)(RAND_MAX/9);
            b[i][j]=y;

        }
    }

    double Mtrix[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            Mtrix[i][j] = 0;
            for(int k=0;k<n;k++){
                Mtrix[i][j] = Mtrix[i][j] + a[i][k]*b[k][j]; 
            }
            printf("%lf ", Mtrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}