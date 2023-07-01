#include<bits/stdc++.h>
using namespace std;


int main()
{
    int row, col;
    cin>>row>>col;

    int arr[row][col];

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<endl;

    int frque[row][col]= {0};

     for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
                int val = arr[i][j];
                frque[val]++;

        }
        cout<<endl;
    }



    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
             if(frque[arr[i][j]]>0){
               arr[i][j]=-1;
            }

            cout<<arr[i][j]<<" ";
        }
    }




    return 0;
}




