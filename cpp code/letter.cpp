#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s[1000];
    int count[26]={0};
    gets(s);
    int n=strlen(s);
    for(int i=0;i<n;i++){
        count[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(count[i]!=0){
            char t=i+'a';
            cout<<t<<'='<<count[i]<<endl;
        }
    }
}