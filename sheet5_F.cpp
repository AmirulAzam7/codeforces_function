#include<bits/stdc++.h>
using namespace std;

void equation(int a,int b)
{
    long long int sum=0;
   for(int i=2; i<=b; i+=2)
   {
         long long int z = pow(a,i);
           sum = sum + z;

   }
     cout<<sum<<endl;
}
int main()
{
    int a,b;
    cin>>a>>b;

    equation(a,b);



    return 0;
}
