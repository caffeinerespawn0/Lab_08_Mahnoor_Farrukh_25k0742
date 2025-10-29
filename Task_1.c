#include <stdio.h>
int main() {
   int arr[3][4]={0};
   int class=3, students=4;
   for(int i=0;i<3;i++){
       for(int j=0;j<4;j++){
           printf("Enter the marks of student %d from class %d\t",j+1,i+1);
           scanf("%d",&arr[i][j]);
       }
   }
    for(int i=0;i<3;i++){
        printf("Class %d: ",i+1);
       for(int j=0;j<4;j++){
           printf("%d\t",arr[i][j]);
       }
       printf("\n");
   }
    return 0;
}
