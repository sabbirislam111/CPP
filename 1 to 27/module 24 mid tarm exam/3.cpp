#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    int income = 0, spend = 0;
    for(int j= 0; j < t; j++){

        int n;
        cin>>n;
        int arr[n];

        for(int i = 0;i< n; i++){
        cin>>arr[i];
        }
        int arr2[n];

        for(int i = 0;i< n; i++){
            cin>>arr2[i];
        }

        int q,x;
        cin>>q;
        for(int i = 0; i < q; i++){
            cin>>x;
            for(int k = 0; k<=x; k++){
                income+= arr[k];
                spend+= arr2[k];
            }
            //cout<<income<<" "<<spend<<endl;
            int ans = income - spend;
            income = 0;
            spend = 0;
            if(ans >= 0){
                cout<<"Ans: "<<" 1 "<<endl;
            }
            else{
                cout<<"Ans: "<<" 0 "<<endl;
            }
        }



    }




 return 0;
}


