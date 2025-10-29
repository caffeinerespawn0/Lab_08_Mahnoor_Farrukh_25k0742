#include <stdio.h>
int main() {
   int arr[2][12]={0};
   for(int i=0;i<2;i++){
       for(int j=0;j<12;j++){
           printf("Enter the photos you took for month %d of year %d\t",j+1,i+1);
           scanf("%d",&arr[i][j]);
       }
   }
    for(int i=0;i<2;i++){
       for(int j=0;j<12;j++){
           printf("Year %d, Month %d: %d ",i+1,j+1,arr[i][j]);
           printf("\n");
       }
       printf("\n");
   }
    return 0;
}
