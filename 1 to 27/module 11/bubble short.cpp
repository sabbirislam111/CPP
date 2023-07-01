#include<bits/stdc++.h>
using namespace std;
void print_arr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<endl;

    for(int i = 1; i < n; i++){
            int flag = 0;
        for(int j = 0; j < n-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp;
                flag = 1;
            }
             print_arr(arr, n);
        }
        cout<<endl;
        if(flag == 0) break;

    }
    print_arr(arr, n);cout<<endl;




 return 0;
}
