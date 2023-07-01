#include<bits/stdc++.h>
using namespace std;



int main() {

	int n;
	cin>>n;
	int siz;
    int counte = 0;
	for(int i = 0; i<n; i++){
        cin>>siz;
        int arr[siz];
        for(int j = 0; j < siz; j++){
            cin>>arr[j];
          }

            sort(arr, arr+siz);

        for(int j = 0;j < siz;j++){
            if(arr[0] == arr[j]){
                counte++;
            }

        }
        cout<<siz-counte<<endl;
        counte = 0;

	}


	return 0;
}


