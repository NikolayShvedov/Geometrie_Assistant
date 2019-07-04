#pragma once
#include "Cub.h"

namespace Praktika3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для form_cub
	/// </summary>
	public ref class form_cub : public System::Windows::Forms::Form
	{
	public:
		form_cub(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:

		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~form_cub()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  num1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  num2;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  num3;

	private: System::Windows::Forms::Button^  button3;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form_cub::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->num1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->num2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->num3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(483, 307);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Закрыть";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form_cub::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(315, 303);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(351, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(184, 39);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Введите необходимые параметры \r\n   для расчёта объёма фигуры и\r\n   площади полной"
				L" поверхности";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(351, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"a";
			this->label2->Click += gcnew System::EventHandler(this, &form_cub::label2_Click);
			// 
			// num1
			// 
			this->num1->Location = System::Drawing::Point(370, 72);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(150, 20);
			this->num1->TabIndex = 4;
			this->num1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &form_cub::num1_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(351, 121);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Объём:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(351, 148);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"V";
			// 
			// num2
			// 
			this->num2->Location = System::Drawing::Point(372, 141);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(148, 20);
			this->num2->TabIndex = 16;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(483, 167);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Вычислить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &form_cub::button2_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(351, 203);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(163, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Площадь полной поверхности:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(351, 234);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"S_poln";
			// 
			// num3
			// 
			this->num3->Location = System::Drawing::Point(397, 227);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(123, 20);
			this->num3->TabIndex = 20;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(483, 253);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Вычислить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &form_cub::button3_Click);
			// 
			// form_cub
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(570, 342);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->num3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"form_cub";
			this->Text = L"Cub";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		double number1 = System::Convert::ToDouble(num1->Text);
		cub volume;
		if (number1 > 0)
		{
			double decision2 = volume.Volume(number1);
			num2->Text = System::Convert::ToString(decision2);
		}
		else
		{
			num2->Text = "Error!!!";
		}

	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			/*double number1 = System::Convert::ToDouble(num1->Text);
			cub surface_area;
			if (number1 > 0)
			{
				double decision2 = surface_area.Surface_area(number1);
				num3->Text = System::Convert::ToString(decision2);
			}
			else
			{
				num3->Text = "Error!!!";
			}*/
	}

	private: System::Void num1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

		if ((e->KeyChar != (char)8) && (e->KeyChar < (char)48 || e->KeyChar >(char)57)) {
			e->Handled = true;
		}
	}
};
}