#include<bits/stdc++.h>
using namespace std;

int FindMax( int *arr, int n)
{
    int maxe = arr[0];

    for (int j = 0; j < n; ++j) {
        if (arr[j] > maxe) {
            maxe = arr[j];
        }
    }
    return maxe;
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0;i< n; i++){
        cin>>arr[i];
    }


    int maxVal = FindMax(arr, n);

    int counte[maxVal+1] = {0};


    for(int i = 0;i<n; i++){
        int val = arr[i];
        counte[val]++;
    }

    for(int val =1 ; val<=maxVal ; val++){
            if(counte[val]>0){
                cout<<val<< "=>" <<counte[val]<<endl;
            }

    }




 return 0;
}
