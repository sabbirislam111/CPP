#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int mx = arr[0];
    int mn = arr[0];
    int i;
    for( i = 1; i < n; i++){
        if(arr[i] > mx){
            mx = arr[i];
        }
        if(mn > arr[i]){
            mn = arr[i];
        }
    }
    cout<<"Max = "<<mx<<" ";

    int mini;
    for( i = 0; i < n; i++){
        if(mx == arr[i]){
           cout<<"Index = "<<i<<endl;
        }

        if(mn == arr[i]){
           mini = i;
        }

    }
    cout<<"Min = "<<mn<<" ";
    cout<<"Index = "<<mini<<endl;






 return 0;
}
