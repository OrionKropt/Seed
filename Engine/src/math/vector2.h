#pragma once
#include <cmath>

class vector2
{
public:
	float x;
	float y;
	vector2();
	vector2(float x, float y);
	vector2(const vector2&);

	auto Length() -> float const;
	auto Distance(vector2&) -> float const;
	auto ScalarProduct(const vector2&) -> float const;


	bool operator ==(const vector2&);
	vector2 operator+(const vector2&);
	vector2 operator-(const vector2&);
	vector2 operator*(const float&);
	vector2& operator*=(const float&);
	vector2& operator/=(const float&);
	void operator+=(const vector2&);
	void operator-=(const vector2&);

};

