#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    while(k--){
        int q;
        scanf("%d",&q);
        if(q>=1){
            q=q%n;
            for(int i=0;i<q;i++){
                for(int j=n-q;j<n;j++){
                    for(int k=j;k>i;k--){

                    int temp=arr[k];
                    arr[k]=arr[k-1];
                    arr[k-1]=temp;
                    }
                }
            }
            for(int i=0;i<n;i++){
                printf("%d ",arr[i]);
            }

        }
    }
}