#include "MyForm.h"

System::Void Print::MyForm::button_drucken_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	// enthält die Einstellungen zu Drucken
	PrintDocument ^ pdoc = gcnew PrintDocument();
	// Erzeugen eines Druckdialogs (des Betriebssystems)
	PrintDialog ^ pd = gcnew PrintDialog();
	pd->Document = pdoc;
	// Anzeigen des Dialogfensters
	pd->ShowDialog();

	pdoc->PrintPage += gcnew PrintPageEventHandler(this, &MyForm::PrintAPage);
	pdoc->Print();  // Startet den Druckvorgang
}

System::Void Print::MyForm::button_zeichnen_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	Graphics ^ g = CreateGraphics();
	Bitmap ^ bmp = gcnew Bitmap("lufthansa.png");
	g->DrawImage(bmp, 10, 10);
}

System::Void Print::MyForm::PrintAPage(Object ^pSender, System::Drawing::Printing::PrintPageEventArgs ^ e)
{
	Graphics ^ g = e->Graphics;
	Bitmap ^ bmp = gcnew Bitmap("lufthansa.png");
	g->DrawImage(bmp, 10, 10);
}
