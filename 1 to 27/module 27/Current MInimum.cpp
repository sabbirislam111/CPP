#include<bits/stdc++.h>
#include"MYSTACK.h"

using namespace std;
int main(){

Stack <int> st;
Stack <int> minstak;
int min = INT_MAX;

int n;
cin>>n;
int arr[n];

for(int i = 0; i < n; i++){
    cin>>arr[i];
}

for(int i = 0; i < n; i++){
    if(arr[i] <= min){
        min = arr[i];
        minstak.push(arr[i]);
    }
    st.push(arr[i]);

}

while(!st.empt()){
    if(st.Top() != minstak.Top()){
        st.pop();
        cout<<minstak.Top()<<" ";
    }
    else{
       cout<<minstak.Top()<<" ";
       minstak.pop();
       st.pop();
    }
}









 return 0;
}
