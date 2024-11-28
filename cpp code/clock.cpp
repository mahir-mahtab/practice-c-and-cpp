#include <stdio.h>
#include <stdlib.h>
#define max(a,b) ((a>b)?a:b)

int main()
{
    int t;
    scanf("%d",&t);

    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        int x = 0,fi=0;
        int max =0;
        for(int i=0;i<n;i++){
            int sum=0;
            int v=-1;
            char s[m+1];
            scanf("%s",s);
            for(int j=0;j<m;j++){
                if(s[j]=='#'){
                    sum++;
                    if(v == -1){
                        v=j ;
                    }
                }
            }
            if(sum>max){
                max = max(max,sum);
                x = i+1;
                fi = v;
            }
        }

        printf("%d %d\n",x,fi+1+(max-1)/2);
    }
    return 0;
}

