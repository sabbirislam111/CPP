#include<bits/stdc++.h>
using namespace std;

int main(){

    char a[26], b[26], c[26];
    cin>>a>>b>>c;
    int alen = strlen(a);
    int blen = strlen(b);
    int clen = strlen(c);

    int n = alen+blen+clen;


        if(a[alen-1] == b[0] && b[blen-1]== c[0]){
            cout<<"YES";
        }
        else{
           cout<<"NO";
        }

    return 0;
}

