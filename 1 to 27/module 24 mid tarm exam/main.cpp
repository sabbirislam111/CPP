#include <bits/stdc++.h>
#include"SR_STACK.h"
using namespace std;

int global_id = 100;

class Person {
    string name;
    int id;
    float salary;

    public:
        Person() {
            name = "";
            id = -1;
            salary = -1.0;
        }

        void set_name(string name) {
            this->name = name;
        }

        void set_salary(float salary) {
            this->salary = salary;
        }

        Person(string name, float salary) {
            set_name(name);
            set_salary(salary);
            this->id = global_id;
            global_id++;
        }

        int get_id() {
            return id;
        }

        string get_name() {
            return name;
        }

        float get_salary() {
            return salary;
        }

        void print() {
            cout << id << "->" << name << "->" << salary << endl;
        }
};



int main() {
    Stack <Person> st;

    Person a ("salman", 556.5);
    Person b ("sabbir", 565.5);
    Person c ("sadia", 567.5);


    st.push(a);
    st.push(b);
    st.push(c);



    Person t = st.findMiddle();
    cout << t.get_name() << endl;
}
