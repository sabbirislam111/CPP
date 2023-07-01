#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;

int precisionCalc(char c){

    if(c == '^'){
        return 3;
    }
    else if(c == '*' || c == '/'){
        return 2;
    }
    else if(c == '+' || c == '-'){
        return 1;
    }
    else{
        return -1;
    }
}

string infixToPrefix(string chk){
    reverse(chk.begin(), chk.end());
    Stack <char> st;
    string result;

    for(int i = 0; i < chk.length(); i++){
        if(chk[i] >= '0' && chk[i] <= '9'){
            result+= chk[i];
            cout<<"step "<< i<<endl;
            cout<<chk[i]<<endl;
        }
        else if(chk[i] == ')'){
            st.push(chk[i]);
            cout<<"step "<<i<<endl;
            cout<<chk[i]<<endl;
        }
        else if(chk[i] == '(' ){
            while(!st.empt() && st.Top() != ')' ){
                result+=st.pop();
                cout<<"step "<<i<<endl;
                cout<<result<<endl;
            }
            if(!st.empt()){
                st.pop();
            }
        }
        else{
            while(!st.empt() && precisionCalc(st.Top()) >= precisionCalc(chk[i])){
                result+=st.pop();
                cout<<"step "<<i<<endl;
                cout<<result<<endl;
            }
            st.push(chk[i]);
        }

    }

    while(!st.empt()){
        result+=st.pop();
        //cout<<"step "<<i<<endl;
        cout<<result<<endl;
    }
    reverse(result.begin(), result.end());
    return result;

}


int prefixEvaluation(string chk)
{

    Stack <int> st;
    for(int i = chk.length()-1; i >= 0 ; i--)
    {
        if(chk[i] >= '0' && chk[i] <= '9')
        {
            st.push(chk[i]-'0');
        }
        else
        {
            int a = st.pop();
            int b = st.pop();

            switch(chk[i])
            {
            case '+':
                st.push(a+b);
                cout<<a+b<<endl;
                break;

            case '-':
                st.push(a-b);
                cout<<a-b<<endl;
                break;

            case '*':
                st.push(a*b);
                cout<<a*b<<endl;
                break;

            case '/':
                st.push(a/b);
                cout<<a/b<<endl;
                break;

            case '^':
                st.push(pow(a, b));
                cout<<pow(a,b)<<endl;
                break;

            default:
                break;

            }
        }
    }

    return st.Top();


}




int main(){

    string infix = "(5*((6^2)+(7-(2/6))))-((7*(8+1))+(5*4))";
    string prefix;

    prefix = infixToPrefix(infix);
    cout<<endl<<endl;
    cout<<prefix<<endl;

     int a = prefixEvaluation(prefix);
    cout<<a;



    return 0;
}
