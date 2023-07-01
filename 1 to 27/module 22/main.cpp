#include<bits/stdc++.h>
#include "MYSTACK.h"

using namespace std;

int main(){




   Stack<string> st;


  st.push("sabbir");
  st.push("salman");
  st.push("siam");
  st.push("sajib");

    while(!st.empt()){
        cout<<st.pop()<<endl;
    }

    cout<<"Top = "<<st.Top()<<endl;
    cout<<"Siz = "<<st.siz()<<endl;



 return 0;
}
