#ifndef PPTRIPLE_H
#define PPTRIPLE_H
#include <iostream>


class PPTriple
{
	private:
		long a;
		long b;
		long c;

		void reduce();

	public:
		PPTriple()
		{
			a = 3;
			b = 4;
			c = 5;
		}

		PPTriple(long m, long n);

		long getA() const
		{
			return a;
		}

		long getB() const
		{
			return b;
		}

		long getC() const
		{
			return c;
		}

		bool operator<(const PPTriple& that) const;

		bool operator==(const PPTriple& that) const 
		{
			return ( ( a==that.a ) && (  b==that.b ) && (c==that.c) );
		}

		bool operator!=(const PPTriple& that) const
		{
			return !( ( *this ) == that );
		}
};

// Send a PPTriple to an output stream
std::ostream& operator<<(std::ostream& os, const PPTriple& PPT);

#endif