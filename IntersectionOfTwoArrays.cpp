#include<iostream>
#include<string>
#include<math.h>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    int n=5;
    int m=3;
    int k=n+m;

   int a[] = {89, 24, 75, 11, 23};
    int b[] = {89, 2, 4};
    int count=0;

    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j< m; j++)
       {
        if(a[i]==b[j])
        {
            count++;

        }
       }

       
    }
    cout<<count;
        

}