#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>v;
        v.push_back(0);
        for(int i=0; i<n;i++){
            int y;
            cin>>y;
            v.push_back(y);

        }
        v.push_back(x);

        int a;
        a=v[1]-v[0];
        for(int j=0; j<v.size()-1;j++){
            if((v[j+1]-v[j])>=a){
                a=v[j+1]-v[j];
            }
        }

        int s=v.size();


        if(2*(v[s-1]-v[s-2])>a){
            cout<<2*(v[s-1]-v[s-2])<<endl;
        }else{
            cout<<a<<endl;
        }
    }    
    return 0;
}    

        int maxDiff = 0;
//         for (int j = 1; j < v.size(); j++) {
//             // Find the maximum difference between consecutive elements
//             maxDiff = max(maxDiff, v[j] - v[j - 1]);
//         }

//         // Check if doubling the difference between the last two elements is greater
//         int lastDiff = 2 * (v.back() - v[v.size() - 2]);
//         cout << max(maxDiff, lastDiff) << endl;
// }
