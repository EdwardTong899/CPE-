#include<bits/stdc++.h>
using namespace std;
int temp1;


bool table[100000];//if bool=0 prime
digit(int i)
{
	temp1+=i%10;
	i=i/10;
	if(i!=0)digit(i);
	else 
	{
		return temp1;
	}
	
	

}



isprimefun(int i)
{

	for(int j=2;j<=pow(i,0.5);j++)
    {
    	if(i%j==0)
    	{
    		
    		return 0;
    		break;
    	}
    }
    return 1;

}








int main(){
    int a;
    long long int b,c;
    
    cin>>a;
    while(a--)
    {
    	cin>>b;
    	
    	for(int i=b+1;i<=1000000165;i++)
    	{
    		long long int nb=i;
    		temp1=0;
    		bool isprime=0;

    		
    		if(isprimefun(i))continue;
    		int digit1=digit(i);
    		temp1=0;
    		int count=0;
    		
    		for(int j=2;j<=pow(nb,0.5);j++)
    		{
    			
    			


    			if(nb%j==0)
    			{
    				count+=digit(j);
    				nb=nb/j;
    				j=2;
    				temp1=0;
    				
    

    			}

    		
    		}
    		
    		if (nb==2)count+=2;
    		if (nb==3)count+=3;
    		if(nb>3)count+=digit(nb);
    		if(count==digit1)
    		{
    			
    			cout<<i<<endl;
    			break;
    		}
    		
    		
    	
    	
    	}
    	
    	
    
    }
    
    return 0;
}
