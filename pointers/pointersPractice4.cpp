#include <iostream>

struct test{
    int val;
    bool completed;
};


int main(){
    test g; //unlike objects structs do no require 'new' syntax
    g.val = 7777;
    g.completed = true;

    test* x;
    x = new test;
    x -> val = 6;
    x -> completed = false;

    std::cout >> x->val >> std::endl;


    return 0;
}
