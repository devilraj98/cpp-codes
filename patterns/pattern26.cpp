//author name Neeraj jaiswal
//date 17 july 2019
/*
        * * * * * 
      *       * 
    *       * 
  *       * 
* * * * * 

*/
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int k=1;k<=n-i;k++){
			cout<<"  ";
		}
		for(int j=1;j<=n;j++){
			if(i==1||i==n||j==1|j==n){
				cout<<"*"<<" ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}

}