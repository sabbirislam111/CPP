#include<bits/stdc++.h>
#include"MYSTACK.h"
#include"MYQUEUE.h"

using namespace std;

void reverseKelement(int n, int k, Queue <int> &q){
    int x = n/k;
    int y = n%k;

    Stack <int> st;

    while(x>0){
        int chk = k;
        while(chk>0){
            st.push(q.pop());
            chk--;
        }
        while(!st.empt()){
            q.push(st.pop());
        }
        x--;
    }



        while(y>0){
            st.push(q.pop());
            y--;
        }
        while(!st.empt()){
            q.push(st.pop());
        }
         while(!q.empty()){
        cout<<q.pop()<<" ";
    }


}

/*
10 3
1 2 3 4 5 6 7 8 9 10
*/

int main(){


    int n,k;
    cin>>n>>k;
    Queue <int> q;
    for(int i = 0; i < n; i++){
        int val;
        cin>>val;
        q.push(val);
    }

    reverseKelement(n,k, q);
    cout<<endl<<endl;






 return 0;
}
