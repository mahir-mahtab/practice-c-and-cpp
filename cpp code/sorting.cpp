#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        int max=-1;
        int mm=0;
        for(int j=1;j<=n;j++)
        {
            int a;
            scanf("%d",&a);
            if(j==n)
                mm=a;
            else if(a>max)
            {
                max=a;
            }
        }
        int sum=max+mm;
        printf("%d\n",sum);
    }
    return 0;
}
   

