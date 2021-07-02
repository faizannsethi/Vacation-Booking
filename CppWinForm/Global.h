#pragma once
using namespace System;
ref class Global
{
public:
	Global();

	static string* GetPlaces() {
		string* names = new string[3];
		names[0] = "Simon";
		names[1] = "Peter";
		names[2] = "Dave";

		return names;
	}
};

