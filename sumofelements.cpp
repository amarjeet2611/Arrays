#include<iostream>
using namespace std;
int sumOfElements(int arr[],int size){
int sum=0;
for(int i=0;i<size;i++){
    sum=sum+arr[i];
   
}
return sum;


}


int main(){
int size;
cout<<"Enter the size of array"<<endl;
cin>>size;
int arr[100];
for(int i=0;i<size;i++){
    cout<<"Enter the elements:"<<endl;
    cin>>arr[i];
}
cout<<"The sum of elements of array is :"<< sumOfElements(arr, size)<<endl;
return 0;
}