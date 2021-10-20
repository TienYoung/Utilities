#include <iostream>
#include <vector>
#include <string>
#include <cmath>

# define PI           3.14159265358979323846f  /* pi */

int main(int argc, char* argv[])
{
	std::vector<std::string> args(argv + 1, argv + argc);
	
	if (args.size() == 3)
	{
		float fov = std::stof(args[1]) / 360.0f * 2.0f * PI;
		float aspect = std::stof(args[2]);

		if (args[0] == "H_FOV")
		{
			float width = std::tanf(fov / 2.0f) * 2.0f;
			float height = width / aspect;

			float vfov = std::atanf(height / 2.0f) * 2.0f;

			std::cout << "V_FOV " << vfov / ( 2 * PI) * 360.0f;
		}
		if (args[0] == "V_FOV")
		{
			float hfov = std::atanf(std::tanf(fov / 2.0f) * aspect) * 2.0f;

			std::cout << "H_FOV " << hfov / (2 * PI) * 360.0f;
		}
	}

	return 0;
}