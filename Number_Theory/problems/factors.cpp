#include<iostream>
using namespace std;

const int limit=10001;
int spf1[limit];
int* spff(){
    for(int i=2;i<=limit;i++){
        if(spf1[i]==0){
            spf1[i]=i;
            for(int j=i*i;j<=limit;j+=i){
                if(!spf1[j]){
                    spf1[j]=i;
                }
            }
        }
    }
    return spf1;
}
int main()
{
    
    int* spf = spff();
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        while(x>1){
            int p=*(spf+x);
            int cnt=0;
            while(!(x%p)){
                x/=p;
                cnt++;
            }
            cout<<p<<" "<<cnt<<endl;
        }
    }
    return 0;
}