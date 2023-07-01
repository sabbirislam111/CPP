#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int n2;
    cin>>n2;
    int arr2[n2];

    for(int i = 0; i < n2; i++){
        cin>>arr2[i];
    }

    int flag = 0;
    for(int i = 0; i < n2; i++){
        for(int j = 0;j < n; j++){
            if(arr2[i] == arr[j]){
            cout<<arr[j]<<" ";
            flag++;
            }
        }

    }
    if(flag == 0){
        cout<<"Empty set"<<endl;
    }





 return 0;
}


