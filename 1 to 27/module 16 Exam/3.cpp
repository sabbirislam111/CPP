#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 8;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int maxe = arr[0];
    for(int i = 1; i < n; i++){
       if(maxe < arr[i]){
        maxe = arr[i];
       }
    }

    int counte[maxe+1]={0};

    for(int i = 0; i < n; i++){
       counte[arr[i]]++;
    }

    for(int i = 1; i <= maxe; i++){
        counte[i] += counte[i-1];
    }

    int finl[n];
    for(int i = n-1;i >= 0; i--){
        counte[arr[i]]--;
        int k = counte[arr[i]];
        finl[k] = arr[i];
    }

     for(int i = 0; i < n; i++){
       cout<<finl[i]<<" ";
    }






 return 0;
}


