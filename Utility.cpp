#include "Utility.h"

using namespace std;
namespace N_Utility
{
    void Utility::ClearConsole() {
#ifdef _WIN32
        system("cls"); // Clear console on Windows
#else
        system("clear"); // Clear console on Unix-based systems
#endif
    }

    void Utility::WaitForEnter() {
        std::cout << "Press Enter...";
        std::cin.get(); // Wait for Enter key
    }

    void Utility::ClearInputBuffer() {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear remaining input
    }

}