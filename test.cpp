#include<bits/stdc++.h>

using namespace std;



int main(){

int n,t;
cin>>n>>t;
int arr[n];


for(int i=0;i<n;i++){

    cin>>arr[i];
}
bool found = false;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        if(arr[i]*arr[j] == t){
            found = true;
            break;
        }
    }
}
if(found){
    cout<<"Yes";
}else{
    cout<<"No";
}

return 0;
}
