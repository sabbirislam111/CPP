#include<bits/stdc++.h>
using namespace std;

    class parent{
    private:
        int taka;
        friend void abbufriend(parent *ptr);

    public:
        parent(int tk){
            taka = tk;
        }
    };

//    class abbFriend{
//    public:
//       void tell(parent *ptr){
//            cout<<ptr->taka;
//        }
//    };


void abbufriend(parent *ptr){
    cout<<ptr->taka;
}

int main()
{
    parent pt(1500);
//    abbFriend fnd;
//    fnd.tell(&pt);

    abbufriend(&pt);







    return 0;
}


