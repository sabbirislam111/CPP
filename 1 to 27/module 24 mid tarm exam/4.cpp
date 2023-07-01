#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int finl[10] ={0};
    for (int i = 0; i < n; i++){

        for (int j = 0; j < m; j++){

            cin>>arr[i][j];
        }

    }
    for (int i = 0; i < n; i++){

        for (int j = 0; j < m; j++){

            if (finl[arr[i][j]]>0){

               arr[i][j] = -1;
            }
            else
                finl[arr[i][j]]++;

                cout<< arr[i][j]<<" ";
            }
        cout<<endl;

    }
    return 0;

}
