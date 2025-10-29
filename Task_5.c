#include <stdio.h>

int main() {
    int temp[4][4] = {
        {12, 15, 10, 9},
        {11, 8, 12, 13},
        {14, 13, 9, 7},
        {16, 11, 10, 8}
    };
    
    int i, j;
    
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            
            int t = temp[i][j];
            int isCold = 1;   
            
            // check top
            if(i > 0 && t >= temp[i-1][j])
                isCold = 0;
            // check bottom
            if(i < 3 && t >= temp[i+1][j])
                isCold = 0;
            // check left
            if(j > 0 && t >= temp[i][j-1])
                isCold = 0;
            // check right
            if(j < 3 && t >= temp[i][j+1])
                isCold = 0;
            
            if(isCold)
                printf("Cold spot at [%d][%d] = %d\n", i, j, t);
        }
    }
    
    return 0;
}
