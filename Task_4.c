#include <stdio.h>

int main() {
    int cinema[3][3]={{1,0,1},{0,0,1},{1,1,0}};
    int avail=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(cinema[i][j]==1){
                printf("Available seat at: [%d][%d]\n",i,j);
                avail++;
            }
        }
    }
    printf("The total number of available seats are: %d",avail);

    return 0;
}
