#include "PPTriple.h"
#include "gcd.h"

PPTriple::PPTriple(long m, long n)
{
	a = 2*m*n;
	b = m*m - n*n;
	c = m*m + n*n;

	reduce();
}

void PPTriple::reduce()
{
	if( (a == 0) && (b == 0) && (c == 0)) return;

	if( a < 0 ) a = -a;
	if( b < 0 ) b = -b;

	if( a > b )
	{
		long tmp = a;
		a = b;
		b = tmp;
	}

	long d = gcd(a,b);
	a /= d;
	b /= d;
	c /= d;
}

bool PPTriple::operator<(const PPTriple& that) const
{
	if( c < that.c ) return true;
	if( c > that.c ) return false;
	if( b < that.b ) return true;
	return false;
}

std::ostream& operator<<(std::ostream& os, const PPTriple& PPT)
{
	os << "(" << PPT.getA() << "," << PPT.getB() << ","
	   << PPT.getC() << ")";

	return os;
}