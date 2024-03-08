#pragma once



class CName
{
public:
	CName() : name(nullptr) {}
	CName(const char* name) : name(name) {}

	const char* name;
};
