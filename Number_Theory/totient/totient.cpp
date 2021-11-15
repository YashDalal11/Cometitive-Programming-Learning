
// Totient Function: - ϕ(n) = n*(1- (1/p1))*(1- (1/p2))*(1- (1/p3))..........(1- (1/pk))

// #include<iostream>   
#include<bits/stdc++.h>
using namespace std;
const int n = 1e5+2,mod = 1e9+7;
int main()
{
    int totient[n+1];    
    for(int i=0;i<=n;i++){                                //initially fill i to all values so n is 
        totient[i]=i;                                     //always be multiply to value as given in formula
    }
    for(int i=2;i<=n;i++){
        if(totient[i]==i){
            totient[i]=i-1;                               //as i is prime all value (i-1) will be coprime to it that`s why we assign value of i-1;
            for(int j=2*i;j<=n;j+=i){                     //iterating to all p, 2p,3p ......n
                totient[j] *= i-1;                        //multiply (1-(1/p)) to each value 
                totient[j] /=i;
            }
        }
    }
    for(int i=2;i<11;i++){
        cout<<i<<" = "<<totient[i]<<"\n";
    }
    return 0;
}