#include "MyForm.h"
#include"MyForm1.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    MyProject::MyForm form;
    Application::Run(% form);
}
