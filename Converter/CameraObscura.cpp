#include "CameraObscura.h"

CameraObscura::CameraObscura(float focalLength, float filmSize, float aspect) : FocalLength(focalLength), FilmSize(filmSize), fov(aspect)
{	
}

float CameraObscura::Horizontal()
{
	return std::atan(0.5f * FilmSize / FocalLength) * 2 * Rad2Deg();
}

float CameraObscura::Vertical()
{
	return std::atan(0.5f * (FilmSize / fov.Aspect) / FocalLength) * 2 * Rad2Deg();
}
