
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[3][3];
    int arr2[3][3];
    int multi = 0;
    int x[3] = {0};
    for(int i = 0; i<3; i++){
        for(int j = 0; j < 3; j++){
            cin>>arr1[i][j];
        }
    }


    for(int i = 0; i<3; i++){
        for(int j = 0; j < 3; j++){
            cin>>arr2[i][j];
        }

    }

     for(int i = 0; i<3; i++){
        for(int j = 0; j < 3; j++){
            multi+=arr1[i][j]*arr2[j][i];
            x[i] = multi;
        }
        multi = 0;


    }
    cout<<endl<<endl;
    for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                 cout<<x[i]<<" ";
            }
            cout<<endl;

    }






    return 0;
}




