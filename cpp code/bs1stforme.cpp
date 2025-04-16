#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;

    while(tt--){
        int n,k,ans=0;
        cin>>n>>k;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int l=lower_bound(a,a+n,k)-a;
        
      
            ans=ans+n-l;
            int i=l-1,j=l-2,mn=a[i];
            while(i>=0&&j>=0){
                mn=min(a[i],a[j]);
                if(mn*(i-j+1)>=k){
                    ans++;
                    mn=a[j-1];
                    i=j-1;
                    j=i-1;
                }
                else{
                    j--;
                }
            }
        cout<<ans;
        cout<<endl;
        }
    }
