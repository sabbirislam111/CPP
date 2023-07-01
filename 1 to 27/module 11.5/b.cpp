#include<bits/stdc++.h>
using namespace std;
int main() {

	int n;
	cin>>n;
	int a, k;
	int arr[50];
    int counte[10] = {0};

	for(int i = 0; i < n; i++){
        cin>>a>>k;
        for(int j = 0; j< a; j++){
            cin>>arr[j];
            for(int k = 0; k < a; k++){
                int s = arr[j]|arr[k];
                cout<<s<<endl;
            }


        }


	}

	return 0;
}

