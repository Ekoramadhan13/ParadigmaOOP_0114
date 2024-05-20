#include <iostream>
#include <string>

using namespace std;

#include "Headeranak.h"
#include "Headeribu.h"

int main()
{
    ibu* varibu = new ibu("dini");
    ibu* varibu2 = new ibu("novi");
    anak* varibuanak1 = new anak("tono");
    anak* varibuanak2 = new anak("rini");
    anak* varibuanak3 = new anak("dewi");

    varibu->tambahanak(varibuanak1);
    varibu->tambahanak(varibuanak2);
    varibu->tambahanak(varibuanak3);
    varibu->tambahanak(varibuanak1);
    
}

