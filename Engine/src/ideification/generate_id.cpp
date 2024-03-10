#include "generate_id.h"

auto GenerateID() -> unsigned int
{
    static unsigned int count = 1;
    return count++;
}
