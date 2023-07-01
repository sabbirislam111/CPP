#include<bits/stdc++.h>
using namespace std;

int main()
{

    char s[200000];
    cin>>s;
    int n = strlen(s);
    int strt = 0, endt = 0;
    int cunt = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'A'){
            strt = i;
            break;

        }

    }

     for(int i = 0; i < n; i++){

        if(s[i] == 'Z'){
           endt = i;


        }
    }

int ans = endt - strt;
    cout<<ans+1;


    return 0;
}


