#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100000];
    int n,counte=0,i,T,o=0,c=0;
    cin>>T;
    while(T--)
    {
        c = 0, o = 0, counte=0;
        cin>>s;
        n = strlen(s);
        for(i=0; i<n; i++)
        {
            if((s[i]=='0'&&s[i+1]=='1')||(s[i]=='1'&&s[i+1]=='0'))
                counte++;
            if(s[i]=='0')
                o++;
            if(s[i]=='1')
                c++;

        }

//        if(s[n-1]=='0')
//            o++;
//        else
//            c++;

            //cout<<"coutn : "<<counte<<", "<<"O : "<<o<<", "<<"C : "<<c<<endl;

        if((counte>2)||((s[0]=='1')&&(s[n-1]=='1')&&(o!=0))||(o==n))
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
