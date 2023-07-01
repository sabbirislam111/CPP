#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int coun = 0;
    for(int i = 1; i <= n; i++){
            coun+=800;
        if(i % 15 == 0){
            coun-=200;
        }
    }
    cout<<coun;



 return 0;
}


