#pragma once
#include "CMFunctions.h"
namespace CoffeMachine {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ Results;
	private: System::Windows::Forms::Button^ Fill;
	private: System::Windows::Forms::PictureBox^ EsspressoIm;
	private: System::Windows::Forms::PictureBox^ AmericanoIm;
	private: System::Windows::Forms::PictureBox^ CappuccinoIm;
	private: System::Windows::Forms::PictureBox^ MochaIm;



	protected:


	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Results = (gcnew System::Windows::Forms::Label());
			this->Fill = (gcnew System::Windows::Forms::Button());
			this->EsspressoIm = (gcnew System::Windows::Forms::PictureBox());
			this->AmericanoIm = (gcnew System::Windows::Forms::PictureBox());
			this->CappuccinoIm = (gcnew System::Windows::Forms::PictureBox());
			this->MochaIm = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EsspressoIm))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AmericanoIm))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CappuccinoIm))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MochaIm))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Location = System::Drawing::Point(573, 210);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(83, 108);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::PicBCofMachButton);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Enabled = false;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(-6, -18);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(820, 590);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(12, 138);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(208, 120);
			this->button2->TabIndex = 4;
			this->button2->Text = L"AMERICANO";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::AmericanoCM);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(12, 264);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(208, 120);
			this->button3->TabIndex = 5;
			this->button3->Text = L"CAPUCCINO";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::CappuccinoCM);
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(12, 390);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(208, 120);
			this->button4->TabIndex = 6;
			this->button4->Text = L"MOCHA";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::MochaCM);
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(208, 120);
			this->button1->TabIndex = 7;
			this->button1->Text = L"ESPRESSO";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::EspressoCl);
			// 
			// Results
			// 
			this->Results->AutoSize = true;
			this->Results->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Results->Location = System::Drawing::Point(259, 12);
			this->Results->Name = L"Results";
			this->Results->Size = System::Drawing::Size(0, 39);
			this->Results->TabIndex = 8;
			// 
			// Fill
			// 
			this->Fill->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Fill->Location = System::Drawing::Point(690, 473);
			this->Fill->Name = L"Fill";
			this->Fill->Size = System::Drawing::Size(110, 74);
			this->Fill->TabIndex = 9;
			this->Fill->Text = L"\?";
			this->Fill->UseVisualStyleBackColor = true;
			this->Fill->Click += gcnew System::EventHandler(this, &MyForm::RefillCM);
			// 
			// EsspressoIm
			// 
			this->EsspressoIm->Enabled = false;
			this->EsspressoIm->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"EsspressoIm.Image")));
			this->EsspressoIm->Location = System::Drawing::Point(347, 286);
			this->EsspressoIm->Name = L"EsspressoIm";
			this->EsspressoIm->Size = System::Drawing::Size(109, 79);
			this->EsspressoIm->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->EsspressoIm->TabIndex = 10;
			this->EsspressoIm->TabStop = false;
			this->EsspressoIm->Visible = false;
			this->EsspressoIm->Click += gcnew System::EventHandler(this, &MyForm::EspressoTake);
			// 
			// AmericanoIm
			// 
			this->AmericanoIm->Enabled = false;
			this->AmericanoIm->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AmericanoIm.Image")));
			this->AmericanoIm->Location = System::Drawing::Point(347, 264);
			this->AmericanoIm->Name = L"AmericanoIm";
			this->AmericanoIm->Size = System::Drawing::Size(124, 101);
			this->AmericanoIm->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->AmericanoIm->TabIndex = 11;
			this->AmericanoIm->TabStop = false;
			this->AmericanoIm->Visible = false;
			this->AmericanoIm->Click += gcnew System::EventHandler(this, &MyForm::AmericanoTake);
			// 
			// CappuccinoIm
			// 
			this->CappuccinoIm->Enabled = false;
			this->CappuccinoIm->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CappuccinoIm.Image")));
			this->CappuccinoIm->Location = System::Drawing::Point(347, 257);
			this->CappuccinoIm->Name = L"CappuccinoIm";
			this->CappuccinoIm->Size = System::Drawing::Size(124, 110);
			this->CappuccinoIm->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->CappuccinoIm->TabIndex = 12;
			this->CappuccinoIm->TabStop = false;
			this->CappuccinoIm->Visible = false;
			this->CappuccinoIm->Click += gcnew System::EventHandler(this, &MyForm::CappuccinoTake);
			// 
			// MochaIm
			// 
			this->MochaIm->Enabled = false;
			this->MochaIm->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MochaIm.Image")));
			this->MochaIm->Location = System::Drawing::Point(366, 255);
			this->MochaIm->Name = L"MochaIm";
			this->MochaIm->Size = System::Drawing::Size(81, 112);
			this->MochaIm->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->MochaIm->TabIndex = 13;
			this->MochaIm->TabStop = false;
			this->MochaIm->Visible = false;
			this->MochaIm->Click += gcnew System::EventHandler(this, &MyForm::MochaTake);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(812, 559);
			this->Controls->Add(this->CappuccinoIm);
			this->Controls->Add(this->MochaIm);
			this->Controls->Add(this->AmericanoIm);
			this->Controls->Add(this->EsspressoIm);
			this->Controls->Add(this->Fill);
			this->Controls->Add(this->Results);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox3);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Name = L"MyForm";
			this->Text = L"MakeUrCoffe";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EsspressoIm))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AmericanoIm))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CappuccinoIm))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MochaIm))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	int
		Water = 1000,
		Milk = 500,
		Coffee = 12;
	private: System::Void PicBCofMachButton(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->Enabled = false;
		pictureBox1->Visible = false;
		pictureBox3->Visible = true;
		button1->Enabled = true;
		button1->Visible = true;
		button2->Enabled = true;
		button2->Visible = true;
		button3->Enabled = true;
		button3->Visible = true;
		button4->Enabled = true;
		button4->Visible = true;
	}

	private: System::Void EspressoCl(System::Object^ sender, System::EventArgs^ e) {
		button1->Enabled = false;
		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		Fill->Enabled = false;
		if (Espresso(Water, Coffee))
		{
			Water -= 35;
			Coffee -= 1;
			Results->Text = "Water " + Convert::ToString(Water) + "  Espresso Shots " + Convert::ToString(Coffee) + "  Milk " + Convert::ToString(Milk);
			EsspressoIm->Visible = true;
			EsspressoIm->Enabled = true;
		}
		else
		{
			Results->Text = "Something is out of stock, fill the CM.\nTo fill the CM press question mark button)";
			button1->Enabled = true;
			button2->Enabled = true;
			button3->Enabled = true;
			button4->Enabled = true;
			Fill->Enabled = true;
		}
	}

private: System::Void CappuccinoCM(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = false;
	button2->Enabled = false;
	button3->Enabled = false;
	button4->Enabled = false;
	Fill->Enabled = false;
	if (Cappuccino(Water, Coffee, Milk))
	{
		CappuccinoIm->Visible = true;
		CappuccinoIm->Enabled = true;
		Water -= 70;
		Coffee -= 2;
		Milk -= 100;
		Results->Text = "Water " + Convert::ToString(Water) + "  Espresso Shots " + Convert::ToString(Coffee) + "  Milk " + Convert::ToString(Milk);
	}
	else
	{
		Results->Text = "Something is out of stock, fill the CM.\nTo fill the CM press question mark button)";
		button1->Enabled = true;
		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = true;
		Fill->Enabled = true;
	}
}

private: System::Void MochaCM(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = false;
	button2->Enabled = false;
	button3->Enabled = false;
	button4->Enabled = false;
	Fill->Enabled = false;
	if (Mocha(Water, Coffee, Milk))
	{
		MochaIm->Visible = true;
		MochaIm->Enabled = true;
		Water -= 70;
		Coffee -= 2;
		Milk -= 30;
		Results->Text = "Water " + Convert::ToString(Water) + "  Espresso Shots " + Convert::ToString(Coffee) + "  Milk " + Convert::ToString(Milk);
	}
	else
	{
		Results->Text = "Something is out of stock, fill the CM.\nTo fill the CM press question mark button)";
		button1->Enabled = true;
		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = true;
		Fill->Enabled = true;
	}
}
private: System::Void AmericanoCM(System::Object^ sender, System::EventArgs^ e) {

	button1->Enabled = false;
	button2->Enabled = false;
	button3->Enabled = false;
	button4->Enabled = false;
	Fill->Enabled = false;
	if (Americano(Water, Coffee))
	{
		AmericanoIm->Visible = true;
		AmericanoIm->Enabled = true;
		Water -= 190;
		Coffee -= 2;
		Results->Text = "Water " + Convert::ToString(Water) + "  Espresso Shots " + Convert::ToString(Coffee) + "  Milk " + Convert::ToString(Milk);
	}
	else
	{
		Results->Text = "Something is out of stock, fill the CM.\nTo fill the CM press question mark button)";
		button1->Enabled = true;
		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = true;
		Fill->Enabled = true;
	}
}

private: System::Void RefillCM(System::Object^ sender, System::EventArgs^ e) {
	Water = 1000;
	Coffee = 12;
	Milk = 500;
	Results->Text = "Water " + Convert::ToString(Water) + "  Espresso Shots " + Convert::ToString(Coffee) + "  Milk " + Convert::ToString(Milk);
}
private: System::Void EspressoTake(System::Object^ sender, System::EventArgs^ e) {
	EsspressoIm->Visible = false;
	EsspressoIm->Enabled = false;
	button1->Enabled = true;
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	Fill->Enabled = true;
}

private: System::Void AmericanoTake(System::Object^ sender, System::EventArgs^ e) {
	AmericanoIm->Visible = false;
	AmericanoIm->Enabled = false;
	button1->Enabled = true;
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	Fill->Enabled = true;
}

private: System::Void CappuccinoTake(System::Object^ sender, System::EventArgs^ e) {
	CappuccinoIm->Visible = false;
	CappuccinoIm->Enabled = false;
	button1->Enabled = true;
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	Fill->Enabled = true;
}
private: System::Void MochaTake(System::Object^ sender, System::EventArgs^ e) {
	MochaIm->Visible = false;
	MochaIm->Enabled = false;
	button1->Enabled = true;
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	Fill->Enabled = true;
}
};
}
