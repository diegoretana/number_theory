#include "gcd.h"
#include <iostream>

long gcd(long a, long b)
{
    if( a < 0 ) a = -a;
    if( b < 0 ) b = -b;

    if( (a == 0) && (b == 0) )
    {
        std::cerr << "WARNING: gcd called with both arguments equal to zero."
                  << std::endl;
        
        return 0;
    }

    long a_, b_;

    while( b != 0 )
    {
        a_ = b;
        b_ = a%b;

        a = a_;
        b = b_;
    }

    return a;
}