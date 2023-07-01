#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> mp;

    mp[1] = 3;
    mp[2] = 2;
    mp.insert(make_pair(0,5));

    for(auto i : mp){
        cout<<i.first <<" | "<< i.second;
        cout<<endl;
    }





 return 0;
}
