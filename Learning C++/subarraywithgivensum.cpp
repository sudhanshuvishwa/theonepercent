 #include<iostream>

 int main(){
    int n;
    std::cout<<"Input size of array : ";
    std::cin>>n;

    int s;
    std::cout<<"Enter the sum needed to find : ";
    std::cin>>s;

    int array[n];
    for(int i=0;i<n;i++){
        std::cin>>array[i];
    }

    int i=0,j=0,st= -1,en = -1,sum=0;

    while(j<n && sum + array[j]<=s){
        sum += array[j];
        j++;
    }

    if(sum == s){
        std::cout<<i+1<<" "<<j<<std::endl;
        return 0;
    }
    while(j<n){
        sum += array[j];
        while(sum>s){
            sum -=array[i];
            i++;
        }
        if(sum==s){
            st = i+1;
            en=j+1;
            break;
        }
        j++;
    }
    std::cout<<st<<" "<<en<<std::endl;
 }