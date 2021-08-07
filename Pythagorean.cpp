#include "PPTriple.h"
#include <algorithm>
#include <iostream>
#include <cmath>

int main()
{
    PPTriple* table;
    long N;

    std::cout << "Please enter N (upper bound on triples) : ";
    std::cin >> N;
    if( N <= 0 ) return 0;

    table = new PPTriple[N];

    long idx = 0;
    long rootN = long( sqrt(double(N)) );

    for(long m=1; m <= rootN; m++)
    {
        for(long n=1; n <= rootN; n++)
        {
            PPTriple P = PPTriple(m,n);
            if(P.getC() <= N)
            {
                table[idx] = P;
                idx++;
            }
        }
    }

    sort(table, table + idx);

    std::cout << table[0] << std::endl;
    
    for(int k=1; k <  idx; k++)
        if(table[k] != table[k-1])
            std::cout << table[k] << std::endl;

    delete[] table;
    return 0;
}