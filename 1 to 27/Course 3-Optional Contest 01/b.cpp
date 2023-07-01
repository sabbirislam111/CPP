#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a, b;
    cin>>a>>b;
    int sum = 0;
    int cunt = 0;
    sum = a + b;
    if(sum > 23)
    {

        sum -= 24;
        cout<<sum;
        return 0;
    }

    cout<<sum;

    return 0;
}
