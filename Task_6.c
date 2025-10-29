#include <stdio.h>

int main() {
    int i=0,j=0,space=0,rows=6;
    for(int i=1;i<=rows;i++){
        for(space=i;space<rows;space++){
            printf(" ");
        }
        for(j=1;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for(int i=1;i<=rows;i++){
        for(space=i;space<rows;space++){
            printf(" ");
        }
        for(j=1;j<i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=1;i<=rows;i++){
        for(space=i;space<rows;space++){
            printf(" ");
        }
        for(j=1;j<i;j++){
            printf("%c",'A'+j-1);
        }
        printf("\n");
    }
    return 0;
}
