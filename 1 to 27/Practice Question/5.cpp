#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int found;
    cin>>found;
    int flag = 0;

    for(int i = 0; i < n; i++){
        if(found == arr[i]){
            cout<<"FOUND at index position "<<i<<" "<<endl;
            flag++;
        }
    }
    if(flag == 0){
        cout<<"NOT FOUND"<<endl;
    }






 return 0;
}

