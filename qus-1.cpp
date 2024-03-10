#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
      int n,k;
      cin>>n>>k;
      int arr[n];
      for(int i = 0;i < n;i++){
          cin>>arr[i];
      }
      if(is_sorted(arr,arr+n) || k > 1){
          cout<<"YES\n";
      }
      else{
          cout<<"NO\n";
      }
  }
  return 0;
}
  // point to be noted here the use of is_sorted function is very important in this question as it is used to check if the array is sorted or not.sorted in non decresing order which includes same elements of array