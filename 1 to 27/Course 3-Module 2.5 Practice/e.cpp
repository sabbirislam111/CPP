#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,x,y;
    int sum = 0;
    cin>>n>>k>>x>>y;
    for(int i = 1; i<= n; i++){

        if(i <= k){

            sum+=x;
        }
         if(i > k){

            sum+=y;
        }
    }
    cout<<sum;



 return 0;
}


