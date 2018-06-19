#include <stdio.h>
/* Exploring the pattern of a runModel function encapsulatiing a struct, of whose data member we want, after the struct function constructor does something to it */

int main()
{
    runModel();
    


    return 0;
}

struct Model
{
    int dataMember;
    Model()
    {
        int dataMember = 0;
        ++dataMember;
    }
};

