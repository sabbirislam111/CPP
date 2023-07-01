#include<bits/stdc++.h>
using namespace std;

int main(){

    char s[100000];
    cin>>s;
    int n = strlen(s);
    for(int i = 0; i < n; i++){
        if(i%2 == 0){
            cout<<s[i];
        }
    }


    return 0;
}

