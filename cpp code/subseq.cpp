#include<bits/stdc++.h>
using namespace std;
int coun;
void subseq(string s,string ans);
int main(){
    string s;
    cin>>s;
    int n=s.length();
    subseq(s,"");
    cout<<"Total subsequences are: "<<coun<<endl;

}
void subseq(string s,string ans){
    if(s.empty()){
        cout<<ans<<endl;
        coun=coun+1;
        return;
    }
    for(int i=0;i<s.length();i++){
        string temp;
        for(int j=0;j<s.length();j++){
            if(j==i){
                continue;   
            }
            temp+=s[j];

        }
        subseq(temp,ans+s[i]);
    }
}