#include<bits/stdc++.h>
#include "MYSTACK.h"


int globalId = 100;
class Persone{
public:
    string name;
    int id;
    float salary;

public:
    Persone(){
        name ="";
        id = -1;
        salary = - 1.0;
    }

    void setName(string name){
        this->name = name;
    }
    void setSalary(float salary){
        this->salary=salary;
    }


    Persone(string name, float salary){
       setName(name);
       setSalary(salary);
       this->id = globalId;
       globalId++;
    }

    int getId(){
        return id;
    }
    string getName(){
        return name;
    }
    float getSalary(){
        return salary;
    }

    void print(){
        cout<<name<<" | "<<id<<" | "<<salary<<endl;
    }

};


using namespace std;

int main(){

Stack <Persone> st;

Persone a("sabbir", 660.34);
Persone b("salman", 560.60);
Persone c("sajib", 657.64);

st.push(a);
st.push(b);
st.push(c);

//while(!st.empt()){
//    Persone printPer;
//    printPer = st.pop();
//    printPer.print();
//}

    Persone printPer;
    printPer = st.Top();
    printPer.print();











//   Stack<pair<int, char>> st;
//
//
//  st.push(make_pair(1,'a'));
//  st.push(make_pair(2,'b'));
//  st.push(make_pair(3,'c'));
//  st.push(make_pair(4,'d'));
//
//    while(!st.empt()){
//        pair<int, char> chk;
//        chk = st.pop();
//        cout<<chk.first<<"|"<<chk.second<<endl;
//    }
//
//     while(!st.empt()){
//        pair<int, char> chk;
//        chk = st.Top();
//        cout<<chk.first<<"|"<<chk.second<<endl;
//    }







 return 0;
}
