//
//  Controller.cpp
//  VectorPractice
//
//  Created by Pulsipher, Noah on 1/29/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"
#include <vector>
#include <iostream>

using namespace std;

Controller :: Controller()
{
    
    
}

void Controller :: start()
{
    vector<int> practice;
    practice.push_back(1);
    practice.push_back(2);
    practice.push_back(3);
    
    for(int i=0; i < practice.size(); i++)
    {
        cout << practice.at(i) << endl;
    }
   
    vector<string> wordpractice;
    wordpractice.push_back("Hello!");
    wordpractice.push_back("How are you?");
    wordpractice.push_back("Goodbye!");
    
    for(int i=0; i < wordpractice.size(); i++)
    {
        cout << wordpractice.at(i) << endl;
    }
}
