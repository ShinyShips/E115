//
//  main.cpp
//  HW5
//
//  Created by Andy Nguyen on 10/31/16.
//  Copyright © 2016 Andy Nguyen. All rights reserved.
//

#include <iostream>
#include <string>


using namespace std;

int main(int argc, const char * argv[]) {
    string str1;
    string str2;
    double len1;
    double len2;
    
    cout << "Enter string 1: " << endl;
    getline(cin, str1);
    cout << "Enter string 2: " << endl;
    getline(cin, str2);
    
    len1 = str1.length();
    len2 = str2.length();
    
    
    cout << "Your 1st string is " + to_string(len1) + " characters long." << endl;
    cout << "Your 2nd string is " + to_string(len2) + " characters long." << endl;
    
    if (str1.compare(str2) == 0){
        cout << "The strings are the same." << endl;
    }
    else {
        cout << "The strings are not the same." << endl;
    }
    
    
    if (len1 < len2)
    {
        if (str2.find(str1) != string::npos)
        {
            cout << "String 1 is within string 2." << endl;
        }
        else
        {
            cout << "String 1 is not in string 2." << endl;
        }
    }
    else
    {
        if (str1.find(str2) != string::npos)
        {
            cout << "String 2 is within string 1." << endl;
        }
        else
        {
            cout << "String 2 is not in string 1." << endl;
        }

    }
    
    
    
}