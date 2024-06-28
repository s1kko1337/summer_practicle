#include "MainForm.h"
#include <iostream>
#include "Car.h"
#include "Motorcycle.h"
using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SummerPracticle::MainForm form;
	Application::Run(% form);
}
