#include<bits/stdc++.h>
using namespace std;

class Student
{

private:
    int x;
    int pass;


public:
    Student(int p)
    {
        pass = p;
    }

    void setter(int a, int p)
    {
        if(pass == p)
        {
            x = a;
        }
        else
        {
            cout<<"Not found"<<endl;
        }
    }
    int getter(int p)
    {
        if(pass == p)
        {
            return x;
        }
        else
        {
            cout<<"Not found"<<endl;
            return -1;
        }
    }


};

int main()
{

    int a = 1234;
    Student s(a);
    s.setter(a, 1234);
    cout<<s.getter(1234);






    return 0;
}
