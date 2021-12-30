#include <iostream>
#include <string>
#include "Calculator/Calculator.h"
#include "helpers/helpers.h"

int main(int argc, const char *argv[])
{
	Calculator calc;
	bool isRunning = true;
	while (isRunning)
	{
		calc.run();
		isRunning = checkIfUserWantsToContinue();
	}

	return 0;
}
