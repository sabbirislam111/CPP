#include<bits/stdc++.h>
using namespace std;

int main(){

    char s[100000];
    cin>>s;
    int n = strlen(s);
    int counte[26] = {0};
    for(int i = 0; i < n; i++){
        int ch = s[i]-'a';
        counte[ch]++;
    }



    for(int i = 1; i <= 26; i++){

            if(counte[i] == 0){

              cout<<i;
              return 0;



            }

    }


    cout<<"None";



    return 0;
}

