//
//  main.cpp
//  HW6
//
//  Created by Andy Nguyen on 11/6/16.
//  Copyright © 2016 Andy Nguyen. All rights reserved.
//

#include <iostream>

using namespace std;

void printStar(){
    for (int i = 0; i < 6; i++){
        for (int j = 0; j <= i; j ++){
            cout << "*";
        }
        cout << "" << endl;
    }
}

int main(int argc, const char * argv[]) {
    
    printStar();
    
    return 0;
}
