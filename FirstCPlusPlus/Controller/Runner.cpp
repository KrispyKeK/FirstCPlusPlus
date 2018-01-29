//
//  Runner.cpp
//  FirstCPlusPlus
//
//  Created by Dela Cruz, Juan on 1/23/18.
//  Copyright © 2018 Dela Cruz, Juan. All rights reserved.
//

#include <iostream>
#include "Controller.hpp"


using namespace std;

int main()
{
    //does not require the = new like Java
    Controller * app = new Controller();
    int age;
    (*app).start();
    app -> start();
    for (int index = 1; index <= 31; index++){
        cout << index << endl;
    }
    cout << "Juan Delacruz" << endl;
    string name = "Juan Delacruz";
    string food = "pasta";
    cout << &name << endl;
    cout << "My name is " << name << " and I like to eat " << food << endl;
    
    return 0;
}
