#include "position.h"


Position::Position() : x(0), y(0) {}
Position::Position(const float& X, const float& Y) : x(X), y(X) {}
Position::Position(const vector2 vec) { x = vec.x; y = vec.y; }


const std::bitset<MAX_BITS> Position::signature(generate_signature());