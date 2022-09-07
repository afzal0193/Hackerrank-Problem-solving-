
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3];
    int arr1[3];
    for(int i =0;i<3;i++){
        cin>>arr[i];

    }
    for(int j =0;j<3;j++){
        cin>>arr1[j];
    }

    int p1=0;
    int p2=0;
    for(int r=0;r<3;r++){
        if (arr[r]>arr1[r]){
            p1++;
        }
        else if (arr[r]<arr1[r]){
            p2++;
        }
    }
    cout<<p1<<" "<<p2<<endl;

    return 0;
}
