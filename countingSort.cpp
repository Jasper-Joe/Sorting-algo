//
//  main.cpp
//  countingSort
//
//  Created by Jinglun Zhou on 2020/2/13.
//  Copyright © 2020 Jinglun Zhou. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
void countingSort(vector<int>& cnt){
    int MAX=INT_MIN;
    for(auto& x:cnt){
        MAX=max(MAX,x);
        
    }
    
    vector<int> count(MAX+1,0);
    
    
    
    for(auto& x:cnt){
        count[x]+=1;
    }

    
    for(int i=1;i<count.size();i++){
        count[i]+=count[i-1];
    }
    
    

    vector<int> res=cnt;
    for(int i=0;i<cnt.size();i++){
        res[count[cnt[i]]-1]=cnt[i];
        count[cnt[i]]-=1;
        
    }
    
    cnt=res;
    
    
}
int main(int argc, const char * argv[]) {
    vector<int> arr{1,6,3,5,4,2,4,8,7,9};
    countingSort(arr);
    for(auto& x:arr){
        cout<<x<<endl;
    }
    
    return 0;
}
