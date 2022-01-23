#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  long long int x=0;
  long long int series=1;
  printf("0 1 ");
  for(int i=0;i<n-2;i++){
        long long int temp=series;
        series= series + x;
        x=temp;
        printf("%d ",series);

  }
  return 0;
}