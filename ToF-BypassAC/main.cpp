#include <Windows.h>
#include <iostream>
#include <filesystem>
using namespace std;
namespace f = std::filesystem;
namespace AntiCheat_Bypass_Config {
	f::path x("C:\\Program Files\\TowerOfFantasy_Global\\HottaLaunch\\driver\\GameDriverX64.Sys");
}
bool CheckIfGameDriverX64IsFounded() {
	
	if (f::exists(AntiCheat_Bypass_Config::x)) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	if (CheckIfGameDriverX64IsFounded()) {
		f::remove(AntiCheat_Bypass_Config::x);
		printf("Successfully Deleted This Driver!!! \nThis Bypass is Created by RikkoMatsumatoOfficial!!!");
		Sleep(4300);
		exit(45);
	}
	else
	{
		MessageBoxA(0, "This AntiCheat Driver is Already Deleted!!!", "ToF-BypassAC", MB_OK | MB_ICONERROR);
		exit(43);
	}
	return 0;
}