#pragma once

#include "FieldOfView.h"

class CONVERTER_API CameraObscura
{
public:
	CameraObscura() = delete;
	CameraObscura(float focalLength, float filmSize, float aspect);

	float FocalLength;
	float FilmSize;
	float Horizontal();
	float Vertical();

private:
	FOV fov;
};