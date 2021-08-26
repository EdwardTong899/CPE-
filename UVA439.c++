#include<bits/stdc++.h>
using namespace std;

int table[8][8];
int dirx[8]={1,2,2,1,-1,-2,-2,-1};
int diry[8]={2,1,-1,-2,2,1,-1,-2};
int main(){
    string s1,s2;
    while(cin>>s1>>s2){
    	//cout<<s1<<s2<<endl;
    	for(int i=0;i<8;i++){
    		for(int j=0;j<8;j++){
    			table[i][j]=0;
    		}
    	}
    	int x1,y1,x2,y2;
    	x1=int(s1[0]-97),x2=int(s2[0]-97),y1=int(s1[1]-49),y2=int(s2[1]-49);
		queue<int>x;
		queue<int>y;
		x.push(x1),y.push(y1);
		table[x1][y1]=1;
		if(s1==s2){
    			cout<<"To get from "<<s1<<" to "<<s2<<" takes 0 knight moves."<<endl;
    		}
    	else {
    	while(x.size()){

    		int nowx=x.front();
    		int nowy=y.front();
    		for(int i=0;i<8;i++){
    			
    			if(nowx+dirx[i]>=0&&nowx+dirx[i]<=7&&nowy+diry[i]>=0&&nowy+diry[i]<=7&&table[nowx+dirx[i]][nowy+diry[i]]==0){
    				x.push(nowx+dirx[i]),y.push(nowy+diry[i]);
    				table[nowx+dirx[i]][nowy+diry[i]]=table[nowx][nowy]+1;
    				if(nowx+dirx[i]==x2&&nowy+diry[i]==y2){
    					cout<<"To get from "<<s1<<" to "<<s2<<" takes ";
    					cout<<table[nowx+dirx[i]][nowy+diry[i]]-1;
    					cout<<" knight moves."<<endl;
    					queue<int>x;
    					break;
    				}
    			}
    		}
    		x.pop();
    		y.pop();
    	}
    }
    
    }
    
    
    return 0;
}
