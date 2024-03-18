// Color.cpp
// Ñolor is stored in rgb format

#include "generate_signature.h"

class Color
{
public:
	
	Color();
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char alfa;
	static const std::bitset<MAX_BITS> signature;

};
