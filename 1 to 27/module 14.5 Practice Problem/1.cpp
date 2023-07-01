#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    int arr[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }

    cout<<endl;
    int counte = 0;
    int counte2 = 0;
   // for(int i = 0; i < n; i++){
         for(int j = 0; j < 3; j++){
            counte+=arr[0][j];
        }
        for(int j = 1;j < n; j++){
            counte+=arr[j][2];
        }
        for(int j = n-1; j >=3; j--){
            counte+=arr[n-1][j];
        }

        for(int j = 0; j <3; j++){
            counte2+=arr[j][n-1];
        }

        for(int j = n-2; j >= 0; j--){
            counte2+=arr[n/2][j];
        }
        for(int j = 3; j < n; j++){
            counte2+=arr[j][0];
        }


    //}
    cout<<counte+counte2-arr[2][2]<<endl;


//
//    for(int i = 0; i < n; i++){
//        for(int j = 0; j < n; j++){
//            cout<<arr[i][n/2]<<" ";
//        }
//        cout<<endl;
//    }




 return 0;
}
