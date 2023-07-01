#include<bits/stdc++.h>
using namespace std;

int main(){

    string st;
    cin>>st;

    //string::reverse_iterator et;

    for(auto et = st.rbegin(); et != st.rend(); et++){
        cout<<*et<<endl;
    }



 return 0;
}

