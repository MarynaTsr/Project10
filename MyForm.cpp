#include <Windows.h>
#include "MyForm.h"

using namespace Project10;

int WINAPI WinMain(HINSTANCE,
	HINSTANCE, LPSTR, int) {


	Application::EnableVisualStyles();


	Application::SetCompatibleTextRenderingDefault(false);


	Application::Run(gcnew MyForm);


	return 0;
}



