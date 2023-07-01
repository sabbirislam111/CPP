#include<bits/stdc++.h>
using namespace std;



int main()
{
     int a, b, c;
     int counte = 0;
     cin>>a>>b>>c;
     if(a != b){
        counte++;
     }
     if(b != c){
        counte++;
     }
     if(c != a){
        counte++;
     }
     if(a == b && b == c &&c == a){
        cout<<"1";
        return 0;
     }
     cout<<counte<<endl;


	return 0;
}




