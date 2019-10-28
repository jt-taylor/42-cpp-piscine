#include "Fixed.hpp"
#include <iostream>
int main( void ) {
Fixed a;
Fixed l (34.005f);
Fixed const b( 10 );
Fixed const c( 42.42f );
Fixed const d( b );
a = Fixed( 1234.4321f );
std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;
std::cout << "c is " << c << std::endl;
std::cout << "d is " << d << std::endl;
std::cout << "a is " << a.toInt() << " as integer" << std::endl;
std::cout << "b is " << b.toInt() << " as integer" << std::endl;
std::cout << "c is " << c.toInt() << " as integer" << std::endl;
std::cout << "d is " << d.toInt() << " as integer" << std::endl;
// -----------------------------------------------------------------------------
std::cout << "My tests" << std::endl;
std::cout << "Boolean comparators -- b and c" << std::endl;
std::cout << ">\t" <<  (b > c);
std::cout << "\n";
std::cout << "<\t" <<  (b < c);
std::cout << "\n";
std::cout << ">=\t" <<  (b >= c);
std::cout << "\n";
std::cout << "<=\t" <<  (b <= c);
std::cout << "\n";
std::cout << "==\t" <<  (b == c);
std::cout << "\n";
std::cout << "!=\t" <<  (b != c);
std::cout << "\n";
// -----------------------------------------------------------------------------
std::cout << "Arithmetic operators -- b and c" << std::endl;
std::cout << "+\t" << (b + c);
std::cout << "\n";
std::cout << "-\t" << (b - c);
std::cout << "\n";
std::cout << "*\t" << (b * c);
std::cout << "\n";
std::cout << "/\t" << (b / c);
std::cout << "\n";
// -----------------------------------------------------------------------------
Fixed i(10.00f);
std::cout << "Increment // Decrement i" << std::endl;
std::cout << "i++\t" << i++ << std::endl;
std::cout << "new i\t" << i << std::endl;
std::cout << "++i\t" << ++i << std::endl;
std::cout << "i--\t" << i-- << std::endl;
std::cout << "new i\t" << i << std::endl;
std::cout << "--i\t" << --i << std::endl;
// -----------------------------------------------------------------------------
std::cout << "Min() && Max()" << std::endl;
std::cout << std::min(a,b) << std::endl;
std::cout << std::max(a,b) << std::endl;
std::cout << std::min(a,l) << std::endl;
return 0;
}
