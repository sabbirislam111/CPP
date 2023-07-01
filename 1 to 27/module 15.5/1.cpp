
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr1D[n];

    for(int i = 0; i < n; i++){
        cin>>arr1D[i];
    }

    int x = sqrt(n);
    int arr2D[x][x];

    for(int i = 0; i<n; i+=3){
        for(int j = 0; j < x; j++){
            arr2D[i][j]=arr1D[i+j];
        }
    }


    for(int i = 0; i<n; i+=3){
        for(int j = 0; j < x; j++){
            cout<<arr2D[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}



