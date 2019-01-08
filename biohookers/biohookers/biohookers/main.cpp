//
//  main.cpp
//  biohookers
//
//  Created by Kostia on 08.01.19.
//  Copyright © 2019 Kostia. All rights reserved.
//

#include <iostream>

using namespace std;

/*class Array
{
public:
    int a[];
    Array();
    void splitting();
};

void Array::splitting()
{
    a[]={"string"};
    
}
*/

int main(int argc, const char * argv[]) {
    string a="denyspidor";
    for (int i = 0; i<a.size(); i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
