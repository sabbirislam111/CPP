#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int arr[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<endl;


    for(int i = 0; i < n; i++)
    {
        cout<<arr[i][i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i][n-1-i]<<" ";
    }




    return 0;
}

