#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int fst = a*b;
    int sec = c*d;

    if(fst > sec){
        cout<<fst;
    }
    else if(fst < sec){
        cout<<sec;
    }
    else if(fst == sec){
        cout<<fst;
    }

 return 0;
}

