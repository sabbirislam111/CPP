#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long a, b, x;
    cin>>a>>b>>x;
    unsigned long long int s = b/x;
    cout<<s<<endl;
    unsigned long long int t = a/x;
    cout<<t<<endl;
    unsigned long long int u = s - t;

    if(a%x == 0 && b%x == 0){
        cout<<u+1;
        return 0;
    }


    cout<<u;

    return 0;
}





