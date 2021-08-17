#include<bits/stdc++.h>
using namespace std;
static const int MAXN = 100005;
static char s[MAXN];
int main(){
    int N;
    cin>>N;
 	
    while(N--){
    	
    	
    	scanf("%s", s);
        int n = (int) strlen(s);
    	int table[n];
    	int list[26]={0};
    
    	
		for(int i=0;i<n;i++){
			table[i]=list[s[i]-'A'];
			list[s[i]-'A']=i+1;
    	}


		int count=0;
		for(int i=0;i<n-2;i++){
			if(table[i]!=0)continue;
			for(int j=i+1;j<n-1;j++){
				if(table[j]-1>=i+1&&table[j]-1<n-1)continue;
				for(int k=j+1;k<n;k++){
					if(table[k]-1>=j+1&&table[k]-1<n)continue;
					count++;
				}
			}
			
		}
		cout<<count<<endl;
    	
    	

    }
    return 0;
}
