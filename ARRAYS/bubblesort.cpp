#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n-1;i++){
        int noswap=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                noswap=1;
            }
        }
        if(noswap==0) break;
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << ' ';
    }
}