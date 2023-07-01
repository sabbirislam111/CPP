#include<bits/stdc++.h>
using namespace std;

int main(){

    int x, t;
    cin>>x>>t;
    if(x<t){
        cout<<"0";
        return 0;
    }
    int ans = x - t;

    cout<<ans;


    return 0;
}
