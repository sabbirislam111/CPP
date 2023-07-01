#include<bits/stdc++.h>
using namespace std;

        queue<char> Q1;
        queue<char> Q2;






bool all_chars_same(string testStr)
{
    char letter = testStr[0];


        for (int i = 1; i < testStr.length(); i++)
        {

            if (testStr[i] != letter)
            {

                return false;

            }

        }

        return true;




}


string removeDuplicatesFromString(string str)
{

    // keeps track of visited characters
    int counter = 0;

    int i = 0;
    int size = str.size();

    // gets character value
    int x;

    // keeps track of length of resultant string
    int length = 0;

    while (i < size)
    {
        x = str[i] - 97;

        // check if Xth bit of counter is unset
        if ((counter & (1 << x)) == 0)
        {

            str[length] = 'a' + x;

            // mark current character as visited
            counter = counter | (1 << x);

            length++;
        }
        i++;
    }

    return str.substr(0, length);
}


void finalAns(vector<char>st4){
        vector<char>st3;
        int chk = 0;
        for(auto i : st4)
        {
            if(chk % 2 == 0)
            {
                Q1.push(i);
                chk++;

            }
            else
            {
                Q2.push(i);
                chk++;
            }



        }


        while(!Q2.empty())
        {
            char chk4 = Q1.front();
            Q1.pop();
            char chk5 = Q2.front();
            Q2.pop();


            if(chk4 == chk5){
                continue;
            }
            else {
                st3.push_back(chk4);
                st3.push_back(chk5);
            }

        }

        if(!Q1.empty() && Q2.empty())
        {
            char chk6 = Q1.front();
            Q1.pop();
            st3.push_back(chk6);
        }

        for(auto i:st3){
            cout<<i;
        }






}



int main()
{

    vector<char>st2;

    int T;
    cin>>T;
    for(int j = 0;  j < T; j++)
    {

        int n;
        cin>>n;
        char st[n];
        for(int i = 0; i < n; i++)
        {
            cin>>st[i];
        }


        for(int i = 0; i < n; i++)
        {
            if(i % 2 == 0)
            {
                Q1.push(st[i]);

            }
            else
            {
                Q2.push(st[i]);

            }

        }


        while(!Q2.empty())
        {
            char chk1 = Q1.front();
            Q1.pop();
            char chk2 = Q2.front();
            Q2.pop();

            if(chk1 == chk2) continue;

            else if(chk1 == 'R' && chk2 =='B')
            {
                st2.push_back('P');
                //cout<<"P";

            }
            else if(chk1 == 'B' && chk2 =='R')
            {
                 st2.push_back('P');
                //cout<<"P";

            }
            else if(chk1 == 'R' && chk2 =='G')
            {
                 st2.push_back('Y');
                //cout<<"Y";
            }
            else if(chk1 == 'G' && chk2 =='R')
            {
                st2.push_back('Y');
                //cout<<"Y";
            }
            else if(chk1 == 'G' && chk2 =='B')
            {
                st2.push_back('C');
                //cout<<"C";
            }
            else if(chk1 == 'B' && chk2 =='G')
            {
                st2.push_back('C');
                //cout<<"C";
            }

        }

        if(!Q1.empty() && Q2.empty())
        {
            char chk3 = Q1.front();
            Q1.pop();
            st2.push_back(chk3);
        }

       finalAns(st2);
        //st2.clear();
//        for(auto i:st2){
//            cout<<i;
//        }
        cout<<endl;
        st2.clear();


        //cout<<st2;

    }









    return 0;
}
