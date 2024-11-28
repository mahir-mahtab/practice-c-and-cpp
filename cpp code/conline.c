#include<stdio.h>
int main()
{   
    int n;
    scanf("%d",&n);
    int a1[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }
    int m;
    scanf("%d",&m);
    int a2[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a2[i]);
    }
    int hasha1[1000000]={0},     hasha2[1000000]={0};
    for(int i=0;i<n;i++){
        hasha1[a1[i]]++;
   
    }
    for(int i=0;i<m;i++){
        hasha2[a2[i]]++;
    }
    printf("unions:{");
    for(int i=0;i<1000000;i++){
        if(hasha1[i]!=0 || hasha2[i]!=0){
            printf("%d, ", i);
        }

    }
    printf("}\n");
    printf("intersections:{");
    for(int i=0;i<1000000;i++){
        if(hasha1[i]!=0 && hasha2[i]!=0){
            printf("%d,",i);
        }
    }
    printf("}\n");
}