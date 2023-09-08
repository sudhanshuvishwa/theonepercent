 #include<iostream>

 void primeSieve(int n){
    int prime[100]={0};
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            std::cout<<i<<std::endl;
        }
    }
 }


 int main(){
    int n;
    std::cin>>n;

    primeSieve(n);
 }