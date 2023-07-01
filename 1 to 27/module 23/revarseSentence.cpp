#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;

void reverseSentence(string str){

    Stack <string> st;
for(int i = 0; i < str.length(); i++){
    string word = " ";
    while(i<str.length() && str[i] != ' '){
        word+=str[i];
        i++;
    }
    st.push(word);
}

while(!st.empt()){
    cout<< st.Top()<<" "<<endl;
    st.pop();

}

}


int main(){

   string s = "i am sabbir";
   reverseSentence(s);




 return  0;
}
