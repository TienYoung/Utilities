#pragma once

#include "FieldOfView.h"

class CameraObscura
{
public:
	CameraObscura() = delete;

	float FocalLength;
	float FilmSize;

private:
	FOV fov;
};