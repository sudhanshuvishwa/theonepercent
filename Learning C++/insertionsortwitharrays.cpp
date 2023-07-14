 #include<iostream>

 int main(){
    int size{};
    std::cout<<"Enter the size of arrays : ";
    std::cin>>size;

    int arr[size];
    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }

    for(int i=1;i<size;i++){
        int current = arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<< " ";
    }
    return 0;
 }
