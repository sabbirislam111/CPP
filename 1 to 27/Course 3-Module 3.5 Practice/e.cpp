#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int ans = 0;
    int i = 1;
    while(i <= n){

        ans = i;
        i *= 2;
    }
    cout<<ans;


    return 0;
}


