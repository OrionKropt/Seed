#include "generate_id.h"

auto GenerateID() -> unsigned int
{
    static unsigned int count = 0;
    return count++;
}
