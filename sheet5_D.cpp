    #include<iostream>
    #include<cmath>
    using namespace std;
     
    void prime(int n)
    {
        int i,j,count=0;
        int a;
         for(i=0; i<n; i++)
      {
          count=0;
          cin>>a;
         int q = sqrt(a);
     
         if(a==1)
         {
             cout<<"NO\n";
         }
         else
         {
             for(j=2; j<=q; j++)
          {
              if(a%j==0)
              {
                  count++;
                  break;
              }
          }
          if(count==0)
          {
             cout<<"YES"<<endl;
          }
          else
            {
                cout<<"NO"<<endl;
            }
         }
     
    }
    }
    int main ()
    {
       int n;
        cin>>n;
     
        prime(n);
     
        return 0;
    }# codeforces_function
