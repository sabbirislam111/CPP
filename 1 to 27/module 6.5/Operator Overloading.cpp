#include<bits/stdc++.h>
using namespace std;
class Exmple{
public:
    int x;
    Exmple(int a){
        x=a;
    }
    Exmple operator +(Exmple ob){
        Exmple ans(0);
        ans.x = x+ob.x;
        return ans;
    }



};


int main(){
   Exmple a(10), b(20);
   Exmple ans = a+b;
   cout<<ans.x;



 return 0;
}
