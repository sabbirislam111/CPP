#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[999];
    cin>>s;
    int n = strlen(s);

    int i = 0;
    int j = n-1;

    while(i<j){
        if(s[i] != s[j]){
            cout<<"No"<<endl;
            return 0;
        }
        i++;
        j--;
    }
    cout<<"Yes"<<endl;




	return 0;
}





