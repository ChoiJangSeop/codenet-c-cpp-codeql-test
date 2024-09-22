//
//  main.cpp
//  ALDS1_1-B
//
//  Created by Saicj on 2015/08/31.
//  Copyright (c) 2015??´ saicj. All rights reserved.
//

#include <iostream>
//#include <vector>
#include <algorithm>

int main() {
    
    int x, y;
    std::cin >> x >> y;
    
//    std::vector<int> results;
    
    int count = 0;
    
    if (x < y) {
        count = x;
    }else{
        count = y;
    }
    
    int divisor = 1;
    
    for (int i = count; i > 1; --i) {
        
        if (x % i == 0 && y % i == 0) {
            
            divisor = i;
        }
    }
    
//    std::sort(results.begin(), results.end());
//
//    for (auto & num : results){
//        printf("%d ", num);
//    }

//    printf("%d\n", results.back());
    printf("%d\n", divisor);
    
    return 0;
}