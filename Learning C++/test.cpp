#include <iostream>
int main() {
	int num;
	std::cin >> num;
	
	for(int i =0;i<num;i++){
		int size{},key{};
		std::cin>>size>>key;
		int arr[size];
		for(int i =0;i<size;i++){
			std::cin>>arr[i];
		}

		for(int i=0;i<key;i++){
            for(int j=0;j<size;j++){
            int temp=arr[j+1];
			arr[j+1]=arr[j];
            arr[j]=arr[size-1];
			
            }
			
		}
		for(int i=0;i<size;i++){
			std::cout<<arr[i];
		}
	}
	

}