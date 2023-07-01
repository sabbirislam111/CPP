#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int ans = a+b+c;

    if(ans%2 == 0 && ( (ans / 2) == a ||(ans / 2) == b || (ans / 2) == c ) && ( a+b == ans/2 || b+c == ans/2 || c+a == ans/2) ){
        cout<<"Yes";
    }

    else{
        cout<<"No";
    }


 return 0;
}



