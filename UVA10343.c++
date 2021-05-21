!!!!!!!!!!could not pass the test!!!!!!!!!!!!!1

#include<bits/stdc++.h>
using namespace std;
char table[65]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9','+','/','='};
int main(){
    string s1,s2;
    s1="";
    int nb;
    while(cin>>s2)
    {
    	s1+=s2;
    	if(s2[0]=='#')
    	{

    		int binary[24];
    		int indexbinary=-1;
    		for(int i=0;i<s1.size();i++)
    		{
    			
    			for(int j=0;j<65;j++)
    			{
    				if(s1[i]==table[j])
    				{
    					nb=j;
    					break;
    				}
    				else nb=10000;
    				
    				
    			}
    			if(nb==10000)continue;

    			for(int j=5;j>=0;j--)
    			{
    				binary[++indexbinary]=nb>>j&1;
    				
    				//cout<<binary[indexbinary];
    				
    			
    			}
    			
    			if(indexbinary==23)
    			{
    				int run;
    				if(s1[i]=='='&&s1[i-1]=='=')run=7;
    				else if(s1[i]=='=')run=15;
    				else run=23;
    				indexbinary=-1;
    				
    				int p=7;
    				int otnb=0;
    			
					for(int j=0;j<=run;j++)
					{
						
						otnb+=pow(2,p)*binary[j];
						
						
						p--;
						if(p==-1)
						{
							cout<<char(otnb);
							p=7;
							otnb=0;
							
						
						}
						
					}
    				
    			}
    
    		
    		}
    	
    	
    	
    		cout<<'#';
    		s1="";
    		
    	}
    
    }
    return 0;
}
