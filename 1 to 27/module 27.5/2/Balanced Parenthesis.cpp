#include<bits/stdc++.h>
#include"MYSTACK.h"

using namespace std;
bool checkBalanced(string str)
{
    int len = str.length();
    Stack<char> st;
    bool isBalance = true;
    if(str[0] == ')' || str[0] == '}' || str[0] == ']'){
        return false;
    }

    for(int i = 0; i < len; i++)
    {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            st.push(str[i]);
        }

        if(str[i] == ')')
        {
            if(st.Top() == '(')
            {
                st.pop();
            }
            else
            {
                isBalance = false;
                break;
            }
        }


        if(str[i] == '}')
        {
            if(st.Top() == '{')
            {
                st.pop();
            }
            else
            {
                isBalance = false;
                break;
            }
        }

        if(str[i] == ']')
        {
            if(st.Top() == '[')
            {
                st.pop();

            }
            else
            {
                isBalance = false;
                break;
            }
        }


    }

    if(!st.empt()){
        isBalance = false;
    }
    return isBalance;
}
int main()
{

    bool ans = checkBalanced("{[( )]}");

    if(ans == true){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }




    return 0;
}
