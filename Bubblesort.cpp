#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubblesort(int arr[],int n){
    int issorted=0;
    for(int i=0;i<n-1;i++){
          
        issorted=1;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    issorted=0;
                }
        
            }
            if(issorted){
                return;
            }
   
            }
        }
int main(){
    int arr[]={2,100,60,70,300};
    int n=5;
   display(arr,n);
  bubblesort(arr,n);
   display(arr,n);

    
return 0;
}
