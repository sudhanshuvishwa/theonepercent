#include<iostream>

int main(){
    int n,m;
    std::cin>>n>>m;

    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            std::cin>>arr[i][j];
        }
    }
    //spiral order travel
    int row_start=0,row_end=n-1,column_start=0,column_end=m-1;

    while (row_start<=row_end && column_start<=column_end){
        //row start
        for(int col=column_start;col<=column_end;col++){
            std::cout<<arr[row_start][col]<<" ";
        }
        row_start++;
        //column end
        for(int row=row_start;row<=row_end;row++){
            std::cout<<arr[row][column_end]<<" ";
        }
        column_end--;
        // row_end
        for(int col=column_end;col>=column_start;col--){
            std::cout<<arr[row_end][col]<<" ";
        }
        row_end--;
        //column start
        for(int row=row_end;row>=row_start;row--){
            std::cout<<arr[row][column_start]<<" ";
        }
        column_start++;

    }
    return 0;
}