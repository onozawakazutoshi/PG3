#include "CharSet.h"
#include <Windows.h>

void CharSet::SetConsoleOutputToUTF8()
{

	SetConsoleOutputCP(CP_UTF8);
}
