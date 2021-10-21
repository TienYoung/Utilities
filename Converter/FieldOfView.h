#pragma once

#include "Common.h"

struct CONVERTER_API FOV
{
	FOV() = delete;
	FOV(float aspect);

	float Horizontal(float vertical);
	float Vertical(float horizontal);
	float Aspect;
};