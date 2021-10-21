#pragma once

#ifdef CONVERTER_EXPORTS
	#define CONVERTER_API __declspec(dllexport)
#else
	#define CONVERTER_API __declspec(dllimport)
#endif

#include <cmath>
#include <boost/math/constants/constants.hpp>

//#define PI             boost::math::constants::pi<float>()
#define PI              boost::math::float_constants::pi
#define TWO_PI          boost::math::float_constants::two_pi
#define INV_PI          boost::math::float_constants::one_div_pi
#define INV_TWO_PI      boost::math::float_constants::one_div_two_pi

constexpr float Deg2Rad()
{
	return PI / 180.0f;
}

constexpr float Rad2Deg()
{
	return INV_PI * 180.0f;
}
