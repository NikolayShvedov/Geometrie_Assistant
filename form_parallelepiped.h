#include "Parallelepiped.h"

#pragma once

namespace Praktika3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для form_parallelepiped
	/// </summary>
	public ref class form_parallelepiped : public System::Windows::Forms::Form
	{
	public:
		form_parallelepiped(void)
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
		~form_parallelepiped()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  num1;
	private: System::Windows::Forms::TextBox^  num2;
	private: System::Windows::Forms::TextBox^  num3;



	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  num4;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  num5;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form_parallelepiped::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->num1 = (gcnew System::Windows::Forms::TextBox());
			this->num2 = (gcnew System::Windows::Forms::TextBox());
			this->num3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->num4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->num5 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(641, 370);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Закрыть";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form_parallelepiped::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(501, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(184, 39);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введите необходимые параметры \r\n   для расчёта объёма фигуры и\r\n   площади полной"
				L" поверхности";
			this->label1->Click += gcnew System::EventHandler(this, &form_parallelepiped::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(27, 21);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(448, 339);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(501, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"a";
			this->label2->Click += gcnew System::EventHandler(this, &form_parallelepiped::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(501, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"b";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(501, 152);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"c";
			this->label4->Click += gcnew System::EventHandler(this, &form_parallelepiped::label4_Click);
			// 
			// num1
			// 
			this->num1->Location = System::Drawing::Point(520, 75);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(165, 20);
			this->num1->TabIndex = 6;
			this->num1->TextChanged += gcnew System::EventHandler(this, &form_parallelepiped::textBox1_TextChanged);
			this->num1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &form_parallelepiped::num1_KeyPress);
			// 
			// num2
			// 
			this->num2->Location = System::Drawing::Point(520, 111);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(165, 20);
			this->num2->TabIndex = 7;
			this->num2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &form_parallelepiped::num2_KeyPress);
			// 
			// num3
			// 
			this->num3->Location = System::Drawing::Point(520, 145);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(165, 20);
			this->num3->TabIndex = 8;
			this->num3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &form_parallelepiped::num3_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(501, 217);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"V";
			// 
			// num4
			// 
			this->num4->Location = System::Drawing::Point(521, 210);
			this->num4->Name = L"num4";
			this->num4->Size = System::Drawing::Size(164, 20);
			this->num4->TabIndex = 10;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(641, 236);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Вычислить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &form_parallelepiped::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(501, 304);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"S_poln";
			this->label6->Click += gcnew System::EventHandler(this, &form_parallelepiped::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(501, 183);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Объём:";
			this->label7->Click += gcnew System::EventHandler(this, &form_parallelepiped::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(501, 272);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(163, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Площадь полной поверхности:";
			// 
			// num5
			// 
			this->num5->Location = System::Drawing::Point(547, 297);
			this->num5->Name = L"num5";
			this->num5->Size = System::Drawing::Size(138, 20);
			this->num5->TabIndex = 15;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(641, 323);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Вычислить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &form_parallelepiped::button3_Click);
			// 
			// form_parallelepiped
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(728, 400);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->num5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->num4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->num3);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"form_parallelepiped";
			this->Text = L"Parallelepiped";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		
		
			double number1 = System::Convert::ToDouble(num1->Text);
			double number2 = System::Convert::ToDouble(num2->Text);
			double number3 = System::Convert::ToDouble(num3->Text);
			parallelepiped volume;
			if ((number1 > 0) && (number2 > 0) && (number3 > 0))
			{
				double decision1 = volume.Volume(number1, number2, number3);
				num4->Text = System::Convert::ToString(decision1);
			}
			else
			{
				num4->Text = "Error!!!";
			}
  
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		
			double number1 = System::Convert::ToDouble(num1->Text);
			double number2 = System::Convert::ToDouble(num2->Text);
			double number3 = System::Convert::ToDouble(num3->Text);
			parallelepiped surface_area;
			if ((number1 > 0) && (number2 > 0) && (number3 > 0))
			{
				double decision2 = surface_area.Surface_area(number1, number2, number3);
				num5->Text = System::Convert::ToString(decision2);
			}
			else
			{
				num5->Text = "Error!!!";
			}
		
	}
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void num1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar != (char)8) && (e->KeyChar < (char)48 || e->KeyChar >(char)57)) {
		e->Handled = true;
	}
}
private: System::Void num2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar != (char)8) && (e->KeyChar < (char)48 || e->KeyChar >(char)57)) {
		e->Handled = true;
	}
}
private: System::Void num3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar != (char)8) && (e->KeyChar < (char)48 || e->KeyChar >(char)57)) {
		e->Handled = true;
	}
}
};
}