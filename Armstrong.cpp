#include <iostream>
using namespace std;
class Number
{
int n,s,i=0,j=0,sum=0,ar[5];
public:
void get()
{
cout<<"INPUT"<<endl;
	cin>>n;
	}
bool chck()
{
    	cout<<"OUTPUT"<<endl;
    	s=n;
while(s%10!=0)
    {
i++;
s=s/10;
}
s=n;
while(s%10)
{
    ar[j]=s%10;
    s=s/10;
    j++;
    }
    for(int j=0;j<i;j++)
    {
        sum=sum+(ar[j]*ar[j]*ar[j]);
        }
        if(n==sum)
        {return true;}
        return false;}
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
    {cout<<"no";
    }
return 0;
}