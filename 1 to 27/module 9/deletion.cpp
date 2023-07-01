#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[50];

    int siz;
//    int start_vale;
    int start_point;

    cin>>siz;

    for(int i = 0; i < siz; i++){
        cin>>arr[i];
    }
    cout<<"Enter the start point :";
    cin>>start_point;

//    cout<<"Enter the start value :";
//    cin>>start_value;


        if(start_point == siz-1) siz--;


        else{
                for(int i = start_point+1; i < siz; i++){
                arr[i - 1] = arr[i];

        }
         siz--;
    }

    for(int i = 0; i < siz; i++){
        cout<<arr[i]<<" ";
    }





 return 0;
}
