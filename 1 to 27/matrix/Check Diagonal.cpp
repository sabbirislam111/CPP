#include<bits/stdc++.h>
using namespace std;
int main(){

    int col = 3, row = 3;
   int arr[col][row];

   for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            cin>>arr[i][j];
        }
   }
 if(row!= col){
    cout<<"No";
    return 0;
 }

 int save;
 for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
        if(i == j){
           if(i==0 && j==0) save = arr[i][j];
           else{
                if(save != arr[i][j]){
                    cout<<"Not scaler";
                    return 0;
                }
           }
        }

//        if(arr[i][j] > 0){
//            cout<<"No";
//        return 0;
//        }
    }
 }
cout<<"Scaler";

 return 0;
}

