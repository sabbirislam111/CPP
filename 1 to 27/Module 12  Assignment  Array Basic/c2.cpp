#include<bits/stdc++.h>
using namespace std;



int main()
{
     int t,n;
     scanf("%d",&t) ;
     for (int tc = 0; tc < t; tc++)
     {
         scanf("%d",&n);
         int a[n];
         int couter=0,l;
         for (int j = 0; j < n; j++)
         {
             cin>>a[j];
         }
         sort(a,a+n);
         int size = n/2;
         while (a[size-2] !=a[size-1])
         {
             size=size/2;
         }
         for (int j =size-2 ; j < n; j++)
         {
            if (a[j]>a[size-1])
            {
                 couter =n-j+2;
            }

         }

         cout<<couter<<endl;

     }


	return 0;
}



