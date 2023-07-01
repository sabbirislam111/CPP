#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char s[n];
    cin>>s;
    int arr[n];

    int cunt = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'I'){
            cunt++;
            arr[i] = cunt;

        }
        if(s[i] == 'D'){
            cunt--;
            arr[i] = cunt;

        }

    }
    int mx = arr[0];
    for(int i = 0; i < n; i++){
        if(mx < arr[i])
            mx = arr[i];
    }

    if(mx > 0){
        cout<<mx;
    }
    else{
        cout<<"0";
    }


    return 0;
}



