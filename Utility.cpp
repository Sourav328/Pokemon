#include "Utility.h"

using namespace std;
namespace N_Utility
{
    void Utility::ClearConsole() {
#ifdef _WIN32
        system("cls"); 
#else
        system("clear"); 
#endif
    }

    void Utility::WaitForEnter() {
        std::cout << "Press Enter to continue...";
        std::cin.get(); 
    }

    void Utility::ClearInputBuffer() {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    }

}