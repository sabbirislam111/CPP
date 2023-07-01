#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int target;
    cin>>target;

    int lb = 0, ub = n-1;
    bool found = false;
    while(lb <= ub){
        int mid = (lb+ub)/2;
        if(arr[mid] == target){
            found = true;
            cout<<"It is index = "<<mid<<endl;
            break;
        }

        if(target < arr[mid]){
            ub = mid-1;
        }
        else{
            lb = mid+1;
        }
    }
    if(found == false){
        cout<<"Not found"<<endl;
    }




 return 0;
}

