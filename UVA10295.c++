#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,input2;
    cin>>a>>b;
    string input1;
    vector <string> name;
     vector <int> values;
   	for(int i=0;i<a;i++){
   		cin>>input1>>input2;
   		name.push_back(input1);
   		values.push_back(input2);
 

   	}
   	
   	string vac="";
   	int money=0;
   	while(cin>>vac){
   		if(vac=="."){
   			cout<<money<<endl;
   			money=0;
   		}
   		for(int i=0;i<name.size();i++){
   			if(vac==name[i]){
   				money+=values[i];
   				break;
   			}
   		
   		}
   	
   	
   	}
   	
   	
    return 0;
}
