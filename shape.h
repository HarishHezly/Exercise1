#ifndef SHAPE
#define SHAPE

#include <iostream>

using namespace std;

class shape
{
    protected:


    public: 
        virtual void draw(){
            cout<<"Parent class"<<endl;
        };

};

#endif // !SHAPE