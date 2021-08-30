#include<bits/stdc++.h>
using namespace std;
int dirx[4]={0,1,0,-1};
int diry[4]={1,0,-1,0};
char maze[120][120];
int main(){
    int n;
    cin>>n;
    while(n--){
    	int wx,wy;
    	cin>>wy>>wx;
    	
    	char temp;
    	int Jx,Jy,Fx,Fy;
    	for(int i=0;i<wy;i++){
    		for(int j=0;j<wx;j++){
    			cin>>temp;
   				maze[j][i]=temp;
   				if(temp=='F')Fx=j,Fy=i;
   				if(temp=='J')Jx=j,Jy=i;
    		}
    	}

		queue<int>Joex;
		queue<int>Joey;
    	queue<int>Firx;
    	queue<int>Firy;
    	Joex.push(Jx);
    	Joey.push(Jy);
    	Firx.push(Fx);
    	Firy.push(Fy);
    	
    	int time=0;
    	bool servive=0;
    	if(Jx==0||Jx==wx-1||Jy==0||Jy==wy-1)cout<<"1"<<endl,servive=1;
    	else{
    	while(Joex.size()){
    		time++;
    		int firsize=Firx.size();
    		for(int i=0;i<firsize;i++){
    			int nowx=Firx.front();
    			int nowy=Firy.front();
    			Firx.pop();
    			Firy.pop();
    			for(int j=0;j<4;j++){
    				if(maze[nowx+dirx[j]][nowy+diry[j]]!='#'&&maze[nowx+dirx[j]][nowy+diry[j]]!='F'&&nowx+dirx[j]>=0&&nowx+dirx[j]<wx&&nowy+diry[j]>=0&&nowy+diry[j]<wy){
    					maze[nowx+dirx[j]][nowy+diry[j]]='F';
    					Firx.push(nowx+dirx[j]);
    					Firy.push(nowy+diry[j]);
  
    				}
    				
    			}
    		}
    		
    		
    		int joesize=Joex.size();
    		for(int i=0;i<joesize;i++){
    			int nowx=Joex.front();
    			int nowy=Joey.front();
    			Joex.pop();
    			Joey.pop();
    			for(int j=0;j<4;j++){
    				if(maze[nowx+dirx[j]][nowy+diry[j]]=='.'){
   
    					 if(nowx+dirx[j]==0||nowx+dirx[j]==wx-1||nowy+diry[j]==0||nowy+diry[j]==wy-1){
    						cout<<time+1<<endl;
    						queue<int>Joex;
    				
    						j=5;
    						servive=1;
    						joesize=0;
    						break;
    					
    					}
    					maze[nowx+dirx[j]][nowy+diry[j]]='J';
    					Joex.push(nowx+dirx[j]);
    					Joey.push(nowy+diry[j]);
    				
    				}
    			}
    		}
    		
    		
    		
    		

    	if(servive==1)break;
    	
    	}
    	
    	}
    	
    	if(!servive)cout<<"IMPOSSIBLE"<<endl;
    	
    }
    return 0;
}







