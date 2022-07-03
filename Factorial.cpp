#include<bits/stdc++.h>
using namespace std;

int factorial(int *a,int n){

if(n == 0) return 1;
int fast_fact = factorial(a,n-1);
int total = fast_fact * a[n-1];

return total;

}

int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int result = factorial(arr,n);
cout<<result;

return 0;
}
