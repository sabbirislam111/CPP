#include<bits/stdc++.h>
using namespace std;

int FindMax( int *arr, int n)
{
    int maxe = arr[0];

    for (int j = 0; j < n; ++j) {
        if (arr[j] > maxe) {
            maxe = arr[j];
        }
    }
    return maxe;
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0;i< n; i++){
        cin>>arr[i];
    }

    int n2;
    cin>>n2;
    int arr2[n2];

    for(int i = 0;i< n2; i++){
        cin>>arr2[i];
    }
    int cnt = 0;
    int maxVal = FindMax(arr, n);
    int finlarr[n] ={0};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n2; j++){
            if(arr[i] == arr2[j]){
                finlarr[i] = arr[i];
                cnt++;
            }
        }


    }


    for(int i = 0;i< n; i++){
        if(arr[i] != finlarr[i]){
            cout<<arr[i]<<" ";
        }
    }


 return 0;
}

