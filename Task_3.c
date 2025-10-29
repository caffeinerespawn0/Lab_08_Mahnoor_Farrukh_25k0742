#include <stdio.h>
int main() {
   int orig_image[4][4]={{1,0,1,0},{0,1,0,1},{1,1,0,0},{0,0,1,1}};
   int pixels=0; 
   for(int i=0;i<4;i++){
       for(int j=0;j<4;j++){
           printf("%d",orig_image[i][j]);
       }
       printf("\n");
   }
   printf("\n");
   printf("The negative of the original image is displayed as:\n");
   printf("\n");
   for (int i=0;i<4;i++){
       for(int j=0;j<4;j++){
           if(orig_image[i][j]==1){
                printf("0");
           }
           else if (orig_image[i][j]==0){
                printf("1");
           }
       }
     printf("\n");
   }
   for(int i=0;i<4;i++){
       for(int j=0;j<4;j++){
           if(orig_image[i][j]==1){
               pixels++;
           }
    }
   }
   printf("\n");
   printf("The number of white pixels in original image are: %d",pixels);
return 0;
}
