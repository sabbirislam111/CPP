#include<bits/stdc++.h>
#include"MYSTACK.h"
void insertAtBottom(Stack<int> &chk, int chkElement){
    if(chk.empt()){
        chk.push(chkElement);
        return;
    }
    int topElement = chk.Top();
    chk.pop();
    insertAtBottom(chk, chkElement);

    chk.push(topElement);
 }


void revarseStak(Stack<int> &chk){
    if(chk.empt()){
        return;
    }
    int topElenent = chk.Top();
    chk.pop();
    revarseStak(chk);
    insertAtBottom(chk,topElenent);
}

using namespace std;
int main(){

    Stack <int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    revarseStak(st);

    while(!st.empt()){
        cout<<st.pop()<<" ";
    }


 return 0;
}

