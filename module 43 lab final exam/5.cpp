#include<bits/stdc++.h>
using namespace std;

int main(){

int level;
cin>>level;
 long long int sum = 0;
 long long int fst = 1;
 long long int sec = 1;
for(int i = 1; i <= 20; i++){
        sum = fst*sec;
        fst = sec;
        sec = sec*2;
    if(i == level){
        cout<<sum;
    }
}



 return 0;
}
