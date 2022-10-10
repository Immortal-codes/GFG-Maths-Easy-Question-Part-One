#include<iostream>
#include<string>
#include<math.h>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{

        int arr[]= {10, 3, 5, 6, 2};
        int n=5;
        int p[5]={};
        int sum=1;

        for (int i = 0; i <n; i++)
        {
            for(int j=0;j<n;j++)
             {
                if(i!=j)
                 sum=sum*arr[j];
                  
             }
              
           p[i]=sum; 
           sum=1;
            
        }
      for (int i = 0; i<n; i++)
      {
        cout<<p[i]<<" ";
      }
      


}