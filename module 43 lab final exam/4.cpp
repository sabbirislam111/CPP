#include<bits/stdc++.h>
using namespace std;

vector<int> arr;
vector<int> V;
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

void printTree(BianryNood * root)
{

    //in order
    if(root == NULL) return;

    printTree(root->RootLeft);
    cout<<root->data<<" ";
    printTree(root->RootRight);
}


void leftsite(BianryNood* root)
{
    if(root == NULL) return;

    V.push_back(root->data);
    leftsite(root->RootLeft);


}

void rightSite(BianryNood* root)
{
    if(root == NULL) return;

    V.push_back(root->data);
    rightSite(root->RootRight);


}

int maxVal(vector<int> v)
{
    int max = *max_element(v.begin(), v.end());
    return max;

}

void insertDelet(vector<int> v, int siz)
{

    for(int i = 0; i < siz; i++)
    {
        int choice;
        cin>>choice;
        if(choice == 2){
           sort(v.begin(), v.end());
            //int max = v[siz-1];
            int max = *max_element(v.begin(), v.end());
            cout<<max<<endl;
            //arr.push_back(max);
            v.pop_back();

        }
        if(choice == 1){
            int val;
            cin>>val;
            v.push_back(val);
        }



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




    //printTree(root);

    leftsite(root);
    rightSite(root->RootRight);


    //printlavelWise(root);
    maxVal(V);
    int s;
    cin>>s;
    insertDelet(V, s);

//    for(int i = 0; i < arr.size(); i++){
//        cout<<arr[i]<<endl;
//    }


    return 0;
}

