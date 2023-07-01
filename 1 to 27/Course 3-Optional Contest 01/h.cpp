#include<bits/stdc++.h>

using namespace std;

int main()
{
    char w[100];
    cin>>w;
    int len = strlen(w);
    int counter[26]={0};
    for(int i = 0; i < len; i++){
        char val = w[i];
        counter[val-97]++;
    }



    for(char val = 'a'; val <= 'z'; val++){
            if(counter[val-97]>0){
                    if(counter[val-97] % 2 != 0){
                        cout<<"No";
                        return 0;
                    }

            }

    }



        cout<<"Yes";



    return 0;
}






