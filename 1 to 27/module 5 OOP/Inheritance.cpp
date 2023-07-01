#include<bits/stdc++.h>
using namespace std;

class parent{

public:
    int x;
private:
    int y;
protected:
    int z;

public:
    parent(int a, int b, int c){

        x = a;
        y = b;
        z = c;
    }


};

class child: public parent{

public:
    int xx;
    child(int aa, int a, int b, int c): parent(a, b, c)
    {
        xx = aa;
    }

    void tellMe(){

        cout<<x;
    }

};


int main()
{


    parent a(10, 20, 30);
    child b(100, 10, 20, 30);
    b.tellMe();


    //cout<<a.y;




    return 0;
}

