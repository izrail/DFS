#include <iostream>
#include <string.h>
using namespace std;
 int a[5][5];

 bool dfs(int myStart,int myEnd){
    if(myStart==myEnd){
        return true;
    }
    for(int i=0;i<5;i++){
        if(a[myStart][i]==1){
                cout<<"i="<<i<<endl;
            if(dfs(i,myEnd)){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    memset(a,0,sizeof(int)*25);
  a[0][2]=1;
  a[2][4]=1;
  a[3][4]=1;
   cout<<"flag= "<<dfs(0,4)<<endl;
    return 0;
}

