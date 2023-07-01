#include<bits/stdc++.h>
using namespace std;
int main(){

    int counte = 0;
    int arr[4];
    for(int i = 0; i < 4; i++){
        cin>>arr[i];

        if(arr[i] >= 10){
            counte++;
        }
    }
    cout<<counte<<endl;


 return 0;
}
