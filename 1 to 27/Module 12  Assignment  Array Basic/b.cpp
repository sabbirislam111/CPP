#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    //cout<<endl;

    int n, q;


    int a, b;

    for(int i = 0; i < t; i++){
        cin>>n>>q;
        int arr[n];
        for(int j = 0; j <n; j++){
            cin>>arr[j];
        }
        cout<<"Case "<<i+1<<":"<<endl;

        for(int k = 0; k < q; k++){
            cin>>a>>b;

            int mine = arr[0];
            for(int l = a-1; l <= b-1; l++)
            {
                if(mine > arr[l])
                {
                    mine = arr[l];
                }

            }

            cout<<mine<<endl;
        }
        //cout<<endl;





    }







 return 0;
}
