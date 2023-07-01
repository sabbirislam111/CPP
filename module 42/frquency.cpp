#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> mp;

    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < n; i++){
       mp[arr[i]]++;
    }

    //map<int, int>::iterator it;
    for(auto it= mp.begin(); it != mp.end(); it++){
        cout<<it->first <<" = "<< it->second;
        cout<<endl;
    }






 return 0;
}

