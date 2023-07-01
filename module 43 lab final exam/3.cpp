#include<bits/stdc++.h>
using namespace std;


template<typename N> class Node{
public:
    N value;
    Node * Next;
    Node * Prev;

    Node(N val){
        value = val;
        Next = NULL;
        Prev = NULL;
    }

};

template<typename S> class Stack{


    Node <S> * head;
    Node <S> * top;
    int counte = 0;
public:
    Stack(){
        head = NULL;
        top = NULL;
    }


    // PUAH
    void push(S val){

         Node <S> * newNode = new Node<S>(val);

         if(head == NULL){
            head = top = newNode;
            counte++;
            return;
         }
         top->Next = newNode;
         newNode->Prev = top;
         top = newNode;
         counte++;
    }
    // POP

       S pop(){
        Node <S> * delNode;
        delNode = top;
        S chk;
        if(head == NULL){
            cout<<"List Underflow"<<endl;
            return chk;
        }

        if(top == head){
            head = top = NULL;
        }
        else{
            top = delNode->Prev;
            top->Next = NULL;
        }
        chk = delNode->value;
        delete delNode;
        counte--;
        return chk;
    }
    // EMPTY
    bool empt(){
       if(head == NULL) return true;
       else return false;
    }
    // SIZ
    int siz(){
        return counte;
    }



    // TOP
    S Top(){
        S chk;
        if(top == NULL) cout<<"List Underflow"<<endl;
        else{
            chk = top->value;
        }
        return chk;
    }

};




class BianryNood
{
public:
    pair<int, char>data;
    BianryNood* RootLeft;
    BianryNood* RootRight;

    BianryNood(pair<int, char>val)
    {
        data = val;
        RootLeft = NULL;
        RootRight = NULL;
    }

};

// left
void chkPalindrome(BianryNood* root, string &st)
{
    if(root == NULL) return;

    st+=root->data.second;
    chkPalindrome(root->RootLeft, st);


}

//right
void chkPalindrome2(BianryNood* root, string &st)
{
    if(root == NULL) return;

    st+=root->data.second;
    chkPalindrome2(root->RootRight, st);


}

int ifPalindrom(string st)
{
   stack<char> s;
   queue<char> q;

   for(int i = 0; i < st.size(); i++){
        s.push(st[i]);
        q.push(st[i]);
   }

   while(!s.empty() && !q.empty()){
        int sv = s.top();
        //cout<<sv<<endl;
        int qu = q.front();
        //cout<<qu<<endl;
        s.pop();
        q.pop();
        if(sv != qu){
            return 0;
        }
        else{
            return 1;
        }
   }


}



int main()
{
    queue<pair<BianryNood*, char>> q;
    int a;
    string S;
    cin>>S;
    cin>>a;
    int strTrav = 0;

    BianryNood* root = new BianryNood(make_pair(a, S[strTrav]));

    q.push(make_pair(root, strTrav));
    while(!q.empty())
    {
        pair<BianryNood*, char> presentRoot = q.front();
        q.pop();
        int x, y;
        cin>>x>>y;


        if(x != -1)
        {
            strTrav++;
            BianryNood* n1  = new BianryNood(make_pair(x, S[strTrav]));
            presentRoot.first->RootLeft = n1;
            if(n1 != NULL) q.push(make_pair(n1, S[strTrav]));
        }
        if(y != -1)
        {
            strTrav++;
            BianryNood *n2  = new BianryNood(make_pair(y, S[strTrav]));
            presentRoot.first->RootRight = n2;
            if(n2!= NULL) q.push(make_pair(n2, S[strTrav]));
        }



    }


    string chkLeftPalind ="";
    chkPalindrome(root, chkLeftPalind);



    string chkLeftPalind2 ="";
    chkPalindrome2(root, chkLeftPalind2);


    int cunt = 0;
    int ans = ifPalindrom(chkLeftPalind);
    int ans2 = ifPalindrom(chkLeftPalind2);



    if(ans == 1)
    {
        cunt++;
    }
    if(ans2 == 1)
    {
        cunt++;
    }
    cout<<cunt;


    return 0;
}

