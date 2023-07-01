Zaif Hasan
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class BinaryNode
{
public:
    pair<int, char> data;
    BinaryNode *RootLeft;
    BinaryNode *RootRight;

    BinaryNode(pair<int, char> val)
    {
        data = val;
        RootLeft = NULL;
        RootRight = NULL;
    }
};

void chkPalindrome(BinaryNode *root, string &st)
{
    if (root == NULL)
        return;

    st += root->data.second;
    chkPalindrome(root->RootLeft, st);
}

void chkPalindrome2(BinaryNode *root, string &st)
{
    if (root == NULL)
        return;

    st += root->data.second;
    chkPalindrome2(root->RootRight, st);
}

int ifPalindrom(string st)
{
    stack<char> s;
    queue<char> q;

    for (std::vector<int>::size_type i = 0; i < st.size(); i++)
    {
        s.push(st[i]);
        q.push(st[i]);
    }

    while (!s.empty())
    {
        int sv = s.top();
        int qu = q.front();
        s.pop();
        q.pop();
        if (sv != qu)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    queue<pair<BinaryNode *, char> > q;
    int a;
    string S;
    cin >> S;
    cin >> a;
    int strTrav = 0;

    BinaryNode *root = new BinaryNode(make_pair(a, S[strTrav]));

    q.push(make_pair(root, strTrav));
    while (!q.empty())
    {
        pair<BinaryNode *, char> presentRoot = q.front();
        q.pop();
        int x, y;
        cin >> x >> y;

        if (x != -1)
        {
            strTrav++;
            BinaryNode *n1 = new BinaryNode(make_pair(x, S[strTrav]));
            presentRoot.first->RootLeft = n1;
            if (n1 != NULL)
                q.push(make_pair(n1, S[strTrav]));
        }
        if (y != -1)
        {
            strTrav++;
            BinaryNode *n2 = new BinaryNode(make_pair(y, S[strTrav]));
            presentRoot.first->RootRight = n2;
            if (n2 != NULL)
                q.push(make_pair(n2, S[strTrav]));
        }
    }

    string chkLeftPalind = "";
    chkPalindrome(root, chkLeftPalind);

    string chkLeftPalind2 = "";
    chkPalindrome2(root, chkLeftPalind2);

    int cunt = 0;
    int ans = ifPalindrom(chkLeftPalind);
    int ans2 = ifPalindrom(chkLeftPalind2);

    if (ans == 1)
    {
        cunt++;
    }
    if (ans2 == 1)
    {
        cunt++;
    }
    cout << cunt<<endl;


}
