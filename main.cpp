#include <iostream>
#include "Character.hh"
#include "Gun.hh"

int main() 
{
    Character* c = new Character();
    Gun* g = new Gun();

    if(c->a()){
        printf("palle");
    }
    return 0;
}