#pragma once

#include "Common.h"

struct FOV
{
public:
	FOV() = delete;
	FOV(float aspect) :Aspect(aspect) {}

	float Horizontal(float vertical)
	{
		vertical *= Deg2Rad();
		return std::atanf(std::tanf(vertical / 2.0f) * Aspect) * 2.0f * Rad2Deg();
	}

	float Vertical(float horizontal)
	{
		horizontal *= Deg2Rad();
		return std::atanf(std::tanf(horizontal / 2.0f) / Aspect) * 2.0f * Rad2Deg();
	}

	float Aspect;
};