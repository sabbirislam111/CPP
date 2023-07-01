#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, k;
    cin>>n>>k;
    int arr[n];
    int cnt = 0;
    int dis = n - k;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

        sort(arr, arr+n);


     for(int i = n-1; i >= dis; i--){

        cnt+=arr[i];
    }
    cout<<cnt;




    return 0;
}



