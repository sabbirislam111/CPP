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
     int sum = 0;
   for(int i = 0; i < col; i++){
        for(int j = row-1; j >= 0; j--){

        if(i == j){
            sum+=arr[i][j];
        }


        }

   }
cout<<sum<<endl;



 return 0;
}
