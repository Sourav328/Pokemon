#pragma once

#include <iostream>
#include <limits> 

namespace N_Utility
{

	class Utility {
	public:
		static void ClearConsole();      // Clears the console
		static void WaitForEnter();     // Waits for the user to press Enter
		static void ClearInputBuffer(); // Clears the input buffer
	};
}