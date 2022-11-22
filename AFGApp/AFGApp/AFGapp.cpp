#include "AFGapp.h"


using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args)

{

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	AFGapp::AFGapp form;

	Application::Run(% form);

}