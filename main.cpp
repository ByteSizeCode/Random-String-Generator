//
//  main.cpp
//  Random String Generator
//
//  Created by Isaac Raval on 4/26/18.
//  Copyright © 2018 Isaac Raval. All rights reserved.
//

#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

string GenerateRandomString() {
    const int SIZE_OF_STRING_TO_GENERATE = 4;
    int randNum = 0;
    string stringToReturn = "";
    
    vector<char> CharArray {
        '0','1','2','3','4', '5','6','7',
        '8','9', 'A','B','C','D','E','F',
        'G','H','I','J','K', 'L','M','N',
        'O','P', 'Q','R','S','T','U', 'V',
        'W','X','Y','Z', 'a','b','c','d',
        'e','f', 'g','h','i','j','k', 'l',
        'm','n','o','p', 'q','r','s','t',
        'u', 'v','w','x','y','z'
    };
    
    //Loop SIZE_OF_STRING_TO_GENERATE times
    for(int i = 0; i < SIZE_OF_STRING_TO_GENERATE; i++) {
        //Generate random number
        randNum = rand() % CharArray.size();
        
        //Add to return string
        stringToReturn += CharArray.at(randNum);
    }
    
    //Return random string
    return stringToReturn;
};

int main() {
    srand(time(0));
    
    //Generate Random String
    cout << GenerateRandomString() << endl;
    
    return 0;
}
