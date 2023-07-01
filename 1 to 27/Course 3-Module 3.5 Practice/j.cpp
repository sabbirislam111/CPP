#include<bits/stdc++.h>
using namespace std;

int main(){

    char a[50], b[50];
    cin>>a>>b;
    int alen = strlen(a);
    int blen = strlen(b);

    for(int i = 0; i < blen; i++){
         cout<<a[i]<<b[i];
    }
    if(alen>blen){
       cout<<a[alen-1];

    }

}


