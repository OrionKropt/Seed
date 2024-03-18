#include "generate_signature.h"

auto generate_signature() -> std::bitset<MAX_BITS>
{
	static std::bitset<MAX_BITS> signature = 1;

	assert(signature.test(MAX_BITS-1) == 0 && "To many components in existence.");
	std::cout << signature << std::endl << std::endl;
	std::bitset<MAX_BITS> out = signature;
	signature <<= 1;
	return out;
}
