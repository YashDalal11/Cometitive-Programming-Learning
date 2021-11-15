#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
typedef vector<int> vi;
typedef long long ll;

void findpath(int maze[][20],int n,int x,int y,int path[][20]){
    if(x<0 || x>=n || y<0 || y>=n){
        return;
    }
    if(x==n-1 && y==n-1){
        path[x][y]=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<path[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    if(maze[x][y]==0 || path[x][y]==1){
        return;
    } 
    path[x][y]=1;
    // right
    findpath(maze,n,x,y+1,path);
    // left
    findpath(maze,n,x,y-1,path);
    // top
    findpath(maze,n,x-1,y,path);
    // bottom
    findpath(maze,n,x+1,y,path);

    path[x][y]=0;

}

void findpath(int maze[][20],int n){
    int path[20][20] = {0};
    findpath(maze,n,0,0,path);
}

int main()
{
    int n=3;
    int maze[20][20]= {{1,1,0},{1,1,0},{0,1,0}};
    findpath(maze,n);
    return 0;
}