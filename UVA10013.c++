#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    int t1;
    cin>>a;
    while(a--)
   	{
   		
   		vector<int>p1;
   		vector<int>p2;
   		cin>>b;
   		for(int i=0;i<b;i++)
   		{
   			cin>>t1;
   			p1.push_back(t1);
   			cin>>t1;
   			p2.push_back(t1);
   		
   		}
   		string out="";
   		int carry=0;
   		int number;
   		string temp;
   		for(int i=b-1;i>=0;i--)
   		{
   			number=p1[i]+p2[i]+carry;
   			carry=0;
   			if(number>=10)
   			{
   				carry=1;
   				number-=10;
   			}
   			
   			temp=to_string(number);
   			out+=temp;
   			
   		}
   		if(carry==1)out+='1';
   		reverse(out.begin(),out.end());
   		cout<<out<<endl;
   		if(a!=0)cout<<endl;
   		
   		
   	}
    
    return 0;
}
