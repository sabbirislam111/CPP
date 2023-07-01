#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;


    int n, q;


    int a, b, c;
    int sum = 0;
    for(int i = 0; i < t; i++){
        cin>>n>>q;
         int arr[n];
        for(int j = 0; j <n; j++){
            cin>>arr[j];
        }
        cout<<"Case "<<i+1<<":"<<endl;

        for(int k = 0; k < q; k++){
            cin>>a;
            if(a == 1){
                cin>>b;
                cout<<arr[b]<<endl;
                arr[b] = 0;
                //cout<<arr[b]<<endl;

            }
            if(a == 2){
                cin>>b>>c;
                arr[b]+=c;
                //cout<<arr[b]<<endl;
            }
            if(a == 3){
                cin>>b>>c;
                for(int l = b; l <= c; l++){
                    sum+= arr[l];
                }
                cout<<sum<<endl;
            }
            sum = 0;




        }





    }







 return 0;
}

