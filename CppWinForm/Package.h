#pragma once
#include "Flight.h"
#include "Hotel.h"

using namespace System;
using namespace System::Collections;

ref class Package
{
public: String^ ID;
public: Flight^ Flight;
public: Hotel^ Hotel;
public: String^ Place;
public: int^ Price;
public: Package();
};

