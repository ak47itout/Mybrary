#include<bits/stdc++.h>
using namespace std;

int func(string s){
    
    int n=s.length();
    if(n<=2){
        return n;
    }
    vector<int> suf(n,0);
    suf[n-1] = s[n-1]-'0';
    for(int i=n-2;i>=0;i--){
        
        suf[i] = suf[i+1] + s[i]-'0';
    }
    vector<int> score(n,0);
    score[n-1]=1;
    score[n-2]=2;
    for(int i=n-3;i>=0;i--){
        score[i] = score[i+1] +score[i+2] + suf[i]*(n-i-suf[i]);
    }
    return score[0];
}


signed main(){
    string s="1011";
    cout<<func(s);

}