#include<bits/stdc++.h>
using namespace std;

int main(){

    string str = "ab ab cd cd xy xy";

    stringstream stream(str);

    string a;
    while(stream>>a){
        cout<<a<<endl;
    }


 return 0;
}
