#include <iostream>

using namespace std;

int main()
{
   int n,count=0;
   cin>>n;
   
   for(int i=1;i<=n;i++)
   {
       
       if(count==0)
        {  cout<<"+"; count++; }
       
       else
       if(count==1)
       {  cout<<"-"; count++; }
       
       else
       if(count==2)
       {  cout<<"*"; count++;    }
       
       else
       { cout<<"/";  count=0;  }
   }
   
   return 0;
}