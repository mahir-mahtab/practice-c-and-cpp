#include<stdio.h>
int main(){
    int mat1[3][3]={{1,2,3},
                {2,3,4},
                {3,4,5}};
    int mat2[3][3]={{4,5,6},
                    {6,7,8},
                    {3,4,5}};
    int i,ans[3][3],j,k,sum=0;
    for(i =0; i<3 ;i++ ){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                sum =sum + mat1[i][k]*mat2[k][j];
            } ans[i][j] =sum; sum=0;

        }
    
    
    }
   for(int c=0;c<3;c++){
    for(int r=0;r<3;r++){
        printf("%d " ,ans[c][r]);
    }
    printf("\n");
   }
}