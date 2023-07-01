#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n){
    for(int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
   }
    cout<<endl;
}

int main()
{
   int n;
   cin>>n;
   int arr[n];

   for(int i = 0; i< n; i++){
        cin>>arr[i];
   }
   int maxe = arr[0];
   for(int i = 1; i < n; i++){
       if(maxe < arr[i]){
        maxe = arr[i];
       }
   }
   int counte[maxe+1];
    for(int i = 0; i <= maxe; i++){
        counte[i]=0;
   }


   for(int i = 0; i < n; i++){
        counte[arr[i]]++;
   }


    for(int i = 1; i <= maxe; i++){
        counte[i] += counte[i-1];
   }
   int finl[n];

   for(int i = n-1; i >= 0; i--){
        counte[arr[i]]--;
        int k = counte[arr[i]];
        finl[k] = arr[i];
   }
   printArray(finl, n);







    return 0;
}
