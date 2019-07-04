#pragma once
#include "Prizma.h"

namespace Praktika3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для form_prizma
	/// </summary>
	public ref class form_prizma : public System::Windows::Forms::Form
	{
	public:
		form_prizma(void)
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
		~form_prizma()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  num3;
	private: System::Windows::Forms::TextBox^  num2;
	private: System::Windows::Forms::TextBox^  num1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  num4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  num6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  num5;
	private: System::Windows::Forms::Label^  label9;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form_prizma::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->num3 = (gcnew System::Windows::Forms::TextBox());
			this->num2 = (gcnew System::Windows::Forms::TextBox());
			this->num1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->num4 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->num6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->num5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(514, 396);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Закрыть";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form_prizma::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(351, 384);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// num3
			// 
			this->num3->Location = System::Drawing::Point(404, 139);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(136, 20);
			this->num3->TabIndex = 23;
			this->num3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &form_prizma::num3_KeyPress);
			// 
			// num2
			// 
			this->num2->Location = System::Drawing::Point(404, 108);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(136, 20);
			this->num2->TabIndex = 22;
			this->num2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &form_prizma::num2_KeyPress);
			// 
			// num1
			// 
			this->num1->Location = System::Drawing::Point(404, 72);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(136, 20);
			this->num1->TabIndex = 21;
			this->num1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &form_prizma::num1_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(375, 146);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 20;
			this->label4->Text = L"c";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(375, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 19;
			this->label3->Text = L"b";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(375, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 18;
			this->label2->Text = L"a";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(380, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(184, 39);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Введите необходимые параметры \r\n   для расчёта объёма фигуры и\r\n   площади полной"
				L" поверхности";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(375, 181);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 24;
			this->label5->Text = L"h";
			// 
			// num4
			// 
			this->num4->Location = System::Drawing::Point(404, 173);
			this->num4->Name = L"num4";
			this->num4->Size = System::Drawing::Size(136, 20);
			this->num4->TabIndex = 25;
			this->num4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &form_prizma::num4_KeyPress);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(514, 348);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 39;
			this->button3->Text = L"Вычислить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &form_prizma::button3_Click);
			// 
			// num6
			// 
			this->num6->Location = System::Drawing::Point(421, 322);
			this->num6->Name = L"num6";
			this->num6->Size = System::Drawing::Size(129, 20);
			this->num6->TabIndex = 38;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(375, 297);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(163, 13);
			this->label8->TabIndex = 37;
			this->label8->Text = L"Площадь полной поверхности:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(375, 208);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 13);
			this->label7->TabIndex = 36;
			this->label7->Text = L"Объём:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(375, 329);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 13);
			this->label6->TabIndex = 35;
			this->label6->Text = L"S_poln";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(514, 261);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 34;
			this->button2->Text = L"Вычислить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &form_prizma::button2_Click);
			// 
			// num5
			// 
			this->num5->Location = System::Drawing::Point(404, 235);
			this->num5->Name = L"num5";
			this->num5->Size = System::Drawing::Size(146, 20);
			this->num5->TabIndex = 33;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(375, 242);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(14, 13);
			this->label9->TabIndex = 32;
			this->label9->Text = L"V";
			// 
			// form_prizma
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(601, 431);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->num6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->num5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->num4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->num3);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"form_prizma";
			this->Text = L"Prizma";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			double number1 = System::Convert::ToDouble(num1->Text);
			double number2 = System::Convert::ToDouble(num2->Text);
			double number3 = System::Convert::ToDouble(num3->Text);
			double number4 = System::Convert::ToDouble(num4->Text);
			prizma volume;
			if ((number1 > 0) && (number2 > 0) && (number3 > 0) && (number4 > 0))
			{
				if (((number1 + number2) > number3) && ((number2 + number3) > number1) && ((number1 + number3) > number2))
				{
					double decision1 = volume.Volume(number1, number2, number3, number4);
					num5->Text = System::Convert::ToString(decision1);
				}
				else
				{
					num5->Text = "Error!!!";
				}
			}
			else
			{
				num5->Text = "Error!!!";
			}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		double number1 = System::Convert::ToDouble(num1->Text);
		double number2 = System::Convert::ToDouble(num2->Text);
		double number3 = System::Convert::ToDouble(num3->Text);
		double number4 = System::Convert::ToDouble(num4->Text);
		prizma surface_area;
		if ((number1 > 0) && (number2 > 0) && (number3 > 0) && (number4 > 0))
		{
			if (((number1 + number2) > number3) && ((number2 + number3) > number1) && ((number1 + number3) > number2))
			{
				double decision2 = surface_area.Surface_area(number1, number2, number3, number4);
				num6->Text = System::Convert::ToString(decision2);
			}
			else
			{
				num6->Text = "Error!!!";
			}
		}
		else
		{
			num6->Text = "Error!!!";
		}
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
private: System::Void num4_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar != (char)8) && (e->KeyChar < (char)48 || e->KeyChar >(char)57)) {
		e->Handled = true;
	}
}
};
}
