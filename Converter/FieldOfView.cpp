#include "FieldOfView.h"

FOV::FOV(float aspect) :Aspect(aspect)
{
}

float FOV::Horizontal(float vertical)
{
	vertical *= Deg2Rad();
	return std::atanf(std::tanf(vertical / 2.0f) * Aspect) * 2.0f * Rad2Deg();
}

float FOV::Vertical(float horizontal)
{
	horizontal *= Deg2Rad();
	return std::atanf(std::tanf(horizontal / 2.0f) / Aspect) * 2.0f * Rad2Deg();
}
