#include <iostream>
#include <string>

using namespace std;

#include "Header.h"
#include "Headermanusia.h"

int main()
{
    Manusia* varmanusia = new Manusia("jono");
    delete varmanusia;
    return 0;
}

