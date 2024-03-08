#pragma once


class vector2
{
public:
	vector2();
	vector2(float x, float y);
	vector2(const vector2&);
	float x;
	float y;
	bool operator ==(const vector2&);
	vector2 operator+(const vector2&);
	vector2 operator-(const vector2&);
	void operator+=(const vector2&);
	void operator-=(const vector2&);
};

