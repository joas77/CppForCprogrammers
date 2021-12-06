#include "DynMem.h"

DynMem::DynMem(int eps, int wSize)
{
    if(eps < minEpsilon)
        eps = minEpsilon;
    if(wSize < minWordSize)
        wSize = minWordSize;

    epsilon = eps;
    wordSize = wSize;

    Header* head1 = (Header*) heap;
    Footer* foot1 = (Footer*) (head + 1);

    Header* blkHead = (Header*) (foot + 1);
}
