#include<bits/stdc++.h>
using namespace std;

class BianryNood
{
public:
    int data;
    BianryNood* RootLeft;
    BianryNood* RootRight;

    BianryNood(int val)
    {
        data = val;
        RootLeft = NULL;
        RootRight = NULL;
    }

};

void printTree(BianryNood * root, string &chk)
{

    //in order
    if(root == NULL) return;

    printTree(root->RootLeft, chk);
    chk+=to_string(root->data);
    printTree(root->RootRight, chk);
}
bool isSame(string root1, string root2){
    if(root1 == root2)
    {
      return true;
    }
    else
    {
       return false;
    }
}


int main()
{
    queue<BianryNood*>q;
    int a;
    cin>>a;

    BianryNood* root = new BianryNood(a);

    q.push(root);
    while(!q.empty())
    {
        BianryNood* presentRoot = q.front();
        q.pop();
        int x, y;
        cin>>x>>y;
        BianryNood* n1 = NULL;
        BianryNood* n2 = NULL;

        if(x != -1) n1 = new BianryNood(x);
        if(y != -1) n2 = new BianryNood(y);

        presentRoot->RootLeft = n1;
        presentRoot->RootRight = n2;

        if(n1 != NULL) q.push(n1);
        if(n2 != NULL) q.push(n2);



    }


    queue<BianryNood*>q2;
    int a2;
    cin>>a2;

    BianryNood* root2 = new BianryNood(a2);

    q2.push(root2);
    while(!q2.empty())
    {
        BianryNood* presentRoot2 = q2.front();
        q2.pop();
        int x2, y2;
        cin>>x2>>y2;
        BianryNood* m1 = NULL;
        BianryNood* m2 = NULL;

        if(x2 != -1) m1 = new BianryNood(x2);
        if(y2 != -1) m2 = new BianryNood(y2);

        presentRoot2->RootLeft = m1;
        presentRoot2->RootRight = m2;

        if(m1 != NULL) q2.push(m1);
        if(m2 != NULL) q2.push(m2);



    }


    string forRoot1 = "";
    string forRoot2 = "";

    printTree(root, forRoot1);
    cout<<forRoot1<<endl;


    printTree(root2, forRoot2);
    cout<<forRoot2<<endl;
    //printlavelWise(root);

    //bool ans = ;

    if(isSame(forRoot1, forRoot2) == true){
        cout<<"Yes they are same"<<endl;
    }
    else{
        cout<<"Not same"<<endl;
    }

    /*
    Input for same
    1
    2 3
    -1 -1 -1 -1
    1
    2 3
    -1 -1 -1 -1

    Input for not same
    1
    2 3
    -1 -1 -1 -1
    4
    5 6
    -1 -1 -1 -1

    */
    return 0;
}

