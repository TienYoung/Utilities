#include "Test.h" 

int main(int argc, char* argv[])
{
	std::vector<std::string> args(argv + 1, argv + argc);

	if (args[0] == "FOV")
	{
		TEST::FieldOfView();
	}
	if (args[0] == "CameraObscura")
	{
		TEST::CameraObscura();
	}


	return 0;
}