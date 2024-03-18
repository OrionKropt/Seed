#pragma once



class Name
{
public:
	Name() : NAME(L"default") {}
	Name(const wchar_t* name) : NAME(name) {}

	const wchar_t* NAME;
};
