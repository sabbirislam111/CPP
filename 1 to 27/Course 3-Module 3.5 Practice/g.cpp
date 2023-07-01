#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a, a+n);
    int dis = 0;

    int x = 0, y = x+1;
    while(x,y<n){

        dis += a[y] - a[x];
        x++;
        y++;

    }
    cout<<dis;
    return 0;
}




