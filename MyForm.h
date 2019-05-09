#pragma once

namespace Print {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Printing;

	/// <summary>
	/// Zusammenfassung für MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button_drucken;
	protected:
	private: System::Windows::Forms::Button^  button_zeichnen;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button_drucken = (gcnew System::Windows::Forms::Button());
			this->button_zeichnen = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_drucken
			// 
			this->button_drucken->Location = System::Drawing::Point(81, 324);
			this->button_drucken->Name = L"button_drucken";
			this->button_drucken->Size = System::Drawing::Size(75, 23);
			this->button_drucken->TabIndex = 0;
			this->button_drucken->Text = L"Drucken";
			this->button_drucken->UseVisualStyleBackColor = true;
			this->button_drucken->Click += gcnew System::EventHandler(this, &MyForm::button_drucken_Click);
			// 
			// button_zeichnen
			// 
			this->button_zeichnen->Location = System::Drawing::Point(268, 324);
			this->button_zeichnen->Name = L"button_zeichnen";
			this->button_zeichnen->Size = System::Drawing::Size(75, 23);
			this->button_zeichnen->TabIndex = 1;
			this->button_zeichnen->Text = L"Zeichnen";
			this->button_zeichnen->UseVisualStyleBackColor = true;
			this->button_zeichnen->Click += gcnew System::EventHandler(this, &MyForm::button_zeichnen_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(438, 391);
			this->Controls->Add(this->button_zeichnen);
			this->Controls->Add(this->button_drucken);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_drucken_Click(System::Object^  sender, System::EventArgs^  e);
	
	private: System::Void button_zeichnen_Click(System::Object^  sender, System::EventArgs^  e);
	
			 System::Void PrintAPage(Object ^pSender, System::Drawing::Printing::PrintPageEventArgs ^ e);

	};
}
