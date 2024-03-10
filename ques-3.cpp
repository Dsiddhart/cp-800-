#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int w=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'&&s[i-1]=='.'&&s[i+1]=='.'){
                // cout<<"herer"<<endl;
                w=2;
                break;

            }else{

                    if(s[i]=='.'){
                    // cout<< "yoyo"<<endl;
                    w=w+1;}
                }

            }
                cout<<w<<endl;
    }    
    return 0;
}