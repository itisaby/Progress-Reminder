#include<iostream>
using namespace std;
//Sieve Of eratosthenes

void primeSieve(int n){
    int p[100]={0};

    for(int i=2;i<=n;i++){
        if(p[i]==0){
            for(int j=i*i; j<=n; j+=i){
                p[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(p[i]==0){
            cout<<i<<" ";
        }
    }cout<< endl;
}

void PrimeFactors(int n){
    int spf[100]={0};
    for(int i=2;i<=n;i++){
        spf[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    while(n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
}

int main() {
    int n;
    cin>>n;
    primeSieve(n);
    PrimeFactors(n);
    return 0;
}