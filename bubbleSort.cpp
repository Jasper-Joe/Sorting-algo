//
//  main.cpp
//  bubbleSort
//
//  Created by Jinglun Zhou on 2020/2/13.
//  Copyright © 2020 Jinglun Zhou. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& cnt){
    for(int i=0;i<cnt.size();i++){
        for(int j=1;j<cnt.size();j++){
            if(cnt[j]<cnt[j-1]){
                swap(cnt[j],cnt[j-1]);
            }
        }
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    
    vector<int> arr{1,4,-100,99,455,3,0,0,0,4,3,22,444,55,7,21};
    bubbleSort(arr);
    for(auto& x:arr){
        cout<<x<<endl;
    }
    return 0;
}
