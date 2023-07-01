#include<bits/stdc++.h>
using namespace std;

int main(){

    char ch[26];
    cin>>ch;
    int n = strlen(ch);
    int cunt[26] = {0};

    for(int i = 0; i < n; i++){
        char val = ch[i];
        cunt[val-'a']++;
    }

    for(char i = 'a'; i <= 'z'; i++){

        if(cunt[i-'a'] > 1){
            cout<<"no";
            return 0;


        }
    }
    cout<<"yes";

    return 0;
}





