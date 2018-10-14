#include <iostream>
using namespace std;

class Number
{
    int n,r,s,i=0,j=0,sum=0;
    public:
	
    void get()
    {
        cout<<"INPUT"<<endl;
	cin>>n;
	if(n>100000)
	{get();}
    }
	
    bool chck()
    {
    	cout<<"OUTPUT"<<endl;
        s=n;
        while(s%10!=0)
        {
	      r=s%10;
              s=s/10;    
              sum=sum+(r*r*r);
        }
        if(n==sum)
        {
              return true;
	}
        return false;
    }
};
int main()
{
     Number n;
     n.get();
     if(n.chck())
     {
             cout<<"yes";
     }
     else
     {
	     cout<<"no";
     }
     return 0;
}
