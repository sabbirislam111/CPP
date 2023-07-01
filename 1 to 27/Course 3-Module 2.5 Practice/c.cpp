#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    char c;
    cin>>a>>c>>b;

    if(c == '+'){
        int ans = a+b;
        cout<<ans<<endl;
    }

    else if(c == '-'){
        int ans = a-b;
        cout<<ans<<endl;
    }
    else if(c == '*'){
        int ans = a*b;
        cout<<ans<<endl;
    }
     else if(c == '/'){
        int ans = a/b;
        cout<<ans<<endl;
    }


 return 0;
}
