#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project2::MyForm form;
	Application::Run(%form);
}

System::Void Project2::MyForm::button1_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	openFileDialog1->Title = L"����ҧ֧�ڧ�� ��ѧۧ� �էݧ� ��֧�֧ߧڧ�";
	openFileDialog1->Filter = "(*.doc;*docx;*xls;*xlsx;*rtf;*txt)|*.doc;*docx;*xls;*xlsx;*rtf;*txt";
	openFileDialog1->ShowDialog();
	//if (openfiledialog1->checkfileexists) {
		System::String^ s_path = openFileDialog1->FileName;
		char* path= new char[s_path->Length];
		for (__int64 i = 0; i < s_path->Length; ++i) {
			path[i] = (char)s_path[i];
		}
		solve(path);
	//}
	//else {
	//	messagebox::show("��ѧۧ� �ߧ� �ӧ�ҧ�ѧ� �ڧݧ� �ߧ� ����֧��ӧ�֧�.");
	//}
	return System::Void();
}
