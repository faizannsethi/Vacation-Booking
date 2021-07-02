#include "MyForm.h"
#include "Package.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void wWinMain()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CppWinForm::MyForm form;
	Application::Run(%form);
}
