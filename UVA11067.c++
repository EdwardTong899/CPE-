#include<bits/stdc++.h>
using namespace std;
int map1[102][102];

int bfs(int w,int h){
	queue<int>x;
    queue<int>y;
    x.push(1);
    y.push(1);
    map1[1][1]=1;
    while(x.size()!=0){
    	int nowX=x.front();
   	    int nowY=y.front();	
   	    x.pop(),y.pop();
    	if(map1[nowX][nowY]==-2||nowX==nowY==1){
    		if(nowX==1&&nowY==1)map1[nowX][nowY]=1;
    		else map1[nowX][nowY]=0;
    
    		if(map1[nowX-1][nowY]!=-1)map1[nowX][nowY]+=map1[nowX-1][nowY];
    		if(map1[nowX][nowY-1]!=-1)map1[nowX][nowY]+=map1[nowX][nowY-1];
    		if(map1[nowX+1][nowY]==0)x.push(nowX+1),y.push(nowY),map1[nowX+1][nowY]=-2;
    		if(map1[nowX][nowY+1]==0)x.push(nowX),y.push(nowY+1),map1[nowX][nowY+1]=-2;
    		    	
    	}
    	
    	
    }
   	return map1[w+1][h+1];
    
    
    
    

}

 
int main(){
    int w,h;
    while(cin>>w>>h,w!=0&&h!=0){
    	for(int i=0;i<=w+2;i++){
    		map1[i][0]=-1;
    		map1[i][h+2]=-1;
    
    	}
    	for(int i=0;i<=h+2;i++){
    		map1[0][i]=-1;
    		map1[w+2][i]=-1;
    	}
    	for(int i=1;i<=h+1;i++){
    		for(int j=1;j<=w+1;j++){
    			map1[j][i]=0;
    		}
    	}

    	int wolf;
    	int wolfx,wolfy;
    	cin>>wolf;
    	while(wolf--){
    		cin>>wolfx>>wolfy;
    		map1[wolfx+1][wolfy+1]=-1;
    	}
		
    	int path=bfs(w,h);
    	if(path==0)cout<<"There is no path."<<endl;
    	else if(path==1)cout<<"There is one path from Little Red Riding Hood's house to her grandmother's house."<<endl;
		else cout<<"There are "<<path<<" paths from Little Red Riding Hood's house to her grandmother's house."<<endl;
    }
    
    return 0;
}

