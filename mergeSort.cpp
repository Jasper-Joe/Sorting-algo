//
//  main.cpp
//  mergeSort
//
//  Created by Jinglun Zhou on 2020/2/12.
//  Copyright © 2020 Jinglun Zhou. All rights reserved.
//

#include <iostream>
#include<vector>
using namespace std;



vector<int> merge(vector<int>& arr1, vector<int>& arr2){
    vector<int> ans;
    int a=0;
    int b=0;
    while(a<arr1.size() && b<arr2.size()){
        if(arr1[a]<arr2[b]){
            ans.push_back(arr1[a]);
            a++;
        }
        else{
            ans.push_back(arr2[b]);
            b++;
        }
    }
    
    while(a<arr1.size()){
        ans.push_back(arr1[a]);
        a++;
    }
    while(b<arr2.size()){
        ans.push_back(arr2[b]);
        b++;
    }
    
    return ans;
}

void mergeSort(vector<int>& arr){
    int n=arr.size();
    if(n==2){
        if(arr[0]>arr[1]){
            swap(arr[0],arr[1]);
        }
        return;
    }
    vector<int> arr1;
    vector<int> arr2;
    for(int i=0;i<arr.size();i++){
        if(i<arr.size()/2){
            arr1.push_back(arr[i]);
        }
        else{
            arr2.push_back(arr[i]);
        }
    }
    
    mergeSort(arr1);
    mergeSort(arr2);
    arr=merge(arr1,arr2);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> cnt{4,11,32,5,77,43,2,8};
    mergeSort(cnt);
    for(auto& x:cnt){
        cout<<x<<endl;
    }


    
    return 0;
}
