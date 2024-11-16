//RECRUSION - when a function calls itself in the body directly or indirectly
// OR- when a big problem is depend on the soln of a small problem of same type

// #include <iostream>
// using namespace std;
// int factorial(int n) {

//     //base case

//     if(n==1)
//     return 1;
//     if(n==0)
//     return 1;

//     //processing

//     // recrusive relation
//     int recursionKaAns = factorial(n-1);

//     //processing
//     int finalAns = n* recursionKaAns;
//     return finalAns;
// }
// int main(){
//     cout<<factorial(5)<<endl;
//     return 0;

// }


// //print reverse counting

// #include <iostream>
// using namespace std;
// int factorial(int n) {

//     //base case

//     if(n==1)
//     return 1;
//     if(n==0)
//     return 1;

//     //processing

//     // recrusive relation
//     int recursionKaAns = factorial(n-1);

//     //processing
//     int finalAns = n* recursionKaAns;
//     return finalAns;
// }

// void print (int n ){
//     //base case
//     if(n==1){
//         cout<<1<<" ";
//         return;
       
//     }
//     //processing
//     cout<<n<<" ";
//     //recursion call
//      print(n-1);

// }
// int main(){
//     print(5);
//     // cout<<factorial(5)<<endl;
//     return 0;

// }


// #include<iostream>
// #include<limits.h>
// using namespace std;


// void printArray(int *arr,int size,int index){
//     //base case
//     if(index>=size){
//         return;
// }
// //recursive call
// printArray(arr,size,index+1);


// // processing
// cout<<arr[index]<<" ";
// }

// bool searchArray(int arr[],int size,int target,int index){


//     //base case
//     if(index>=size){
//         return false;
//     }
//     if(arr[index]==target){
//         return true;
//     }

//     //recrusive call

//     bool  aageKaAns= searchArray(arr,size,target,index+1);
//     return aageKaAns;

// }

// void findMin(int arr[],int size, int index, int &min){

//     //base case

//     if(index>=size){
//         return ;
//     }

//     //processing
//     mini= min(mini,arr[index]);

//     //recursive call

//     findMin(arr, size,index+1,mini);
// }

// int main (){
//     int arr[]={10,20,30,40,50};
//     int size=5;
//     int index=0;

//     int mini=INT_MAX;
//     findMin(arr,size,index,mini);
//     cout<<"minimum number in array:"<<mini<<endl;
//     return 0;

// }

