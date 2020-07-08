#include<bits/stdc++.h>

using namespace std;
class Matrix
{
    public: int a;
    public: int b;
    public: int c;
    public: int d;
};
Matrix mul(Matrix x,Matrix y)
{
    Matrix A;
    A.a = x.a*y.a+x.b*y.c;
    A.b = x.a*y.b+x.b*y.d;
    A.c = x.c*y.a+x.d*y.c;
    A.d = x.c*y.b+x.d*y.d;
    return A;
}

int32_t main()
{
   Matrix A;
   A.a=1;
   A.b=1;
   A.c=1;
   A.d=0;
   vector<Matrix>v;
   v.push_back(A);
   for(int i=0;i<10;i++)
   {
       Matrix d = mul(A,A);
       v.push_back(d);
       A=d;
   }
   A.a=1;
   A.b=0;
   A.c=0;
   A.d=1;
   for(int i=10;i>=0;i--)
   {
       if((1<<i)&16)
       {
           A=mul(A,v[i]);
       }
   }
        cout<<A.a<<" "<<A.b<<endl;
       cout<<A.c<<" "<<A.d<<endl;
   int ans=A.a;
      cout<<ans<<endl;
      int a1=0,b1=1;
      for(int i=2;i<=17;i++)
      {
          int u=a1+b1;
          cout<<u<<" ";
          a1=b1;
          b1=u;
      }

}







