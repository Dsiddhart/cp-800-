#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int n;
            cin>>n;
            vector<int>v;
            for(int i=0; i<n;i++){
                int x;
                cin>> x;
                v.push_back(x);
                }
            for(int j=1;j<n;j++){
                if(v[j]>v[j-1]&&v[j]>v[j+1]){
                    int y;
                    y=v[j];
                    v[j]=v[j+1];
                    v[j+1]=v[j];
                    j=1;
                }
                else{
                    continue;
                }
            }
            if(v[0]!=1){
                cout<<"no"<<endl;
            }
            else{
                cout<<"yes"<<endl;
            }
        }
    
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef vector <ll> vi;
// int main() {
//     int t;
//     cin >> t;
//     while (t --> 0) {
//         int n;
//         cin >> n;
//         vi arr(n);
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         if (arr[0] == 1) {
//             cout << "YES";
//         } else {
//             cout << "NO";
//         }
//         cout << '\n';
//     }
// }