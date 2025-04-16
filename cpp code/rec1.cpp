#include <bits/stdc++.h>
using namespace std;
int maze(int d,int open,int close,string s){
    if(close>open){
        return 0;
    }
    else if(open==d&&close == d){
        cout<<s<<endl;
        return 0;
    }
    else if(open>d){
        return 0;
    }
    maze(d,open+1,close,s+'(');
    maze(d,open,close+1,s+')');

}

    

int main()
{
    int n;
    cin>>n;
    maze(n,0,0,"");
}