#pragma once
#include <math.h>
#include <iostream>
#include <cmath>

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(67, 710);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(387, 81);
			this->button2->TabIndex = 29;
			this->button2->Text = L"Протабулювати";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(478, 239);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(439, 575);
			this->richTextBox1->TabIndex = 28;
			this->richTextBox1->Text = L"";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(206, 531);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(101, 59);
			this->textBox4->TabIndex = 27;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(206, 441);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(101, 59);
			this->textBox3->TabIndex = 26;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(206, 345);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(101, 59);
			this->textBox2->TabIndex = 25;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(125, 531);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 52);
			this->label6->TabIndex = 24;
			this->label6->Text = L"h=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(125, 444);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 52);
			this->label5->TabIndex = 23;
			this->label5->Text = L"b=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(125, 348);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 52);
			this->label4->TabIndex = 22;
			this->label4->Text = L"a=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(381, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(400, 52);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Табулювання функції";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(206, 100);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(824, 93);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 20;
			this->pictureBox2->TabStop = false;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(1077, 50);
			this->chart1->Name = L"chart1";
			series1->BorderColor = System::Drawing::SystemColors::ButtonFace;
			series1->BorderWidth = 4;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::SystemColors::ActiveCaptionText;
			series1->Legend = L"Legend1";
			series1->Name = L"Функція";
			series1->ShadowColor = System::Drawing::SystemColors::ActiveCaption;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(633, 575);
			this->chart1->TabIndex = 30;
			this->chart1->Text = L"chart1";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1224, 662);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(378, 75);
			this->button1->TabIndex = 31;
			this->button1->Text = L"Побудувати";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1790, 902);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox2);
			this->Name = L"MyForm";
			this->Text = L"Лабораторна робота №1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Очищення результатів попередніх обчислень
		richTextBox1->Clear();

		// Отримання вхідних даних з полів
		double a = Convert::ToDouble(textBox2->Text);
		double b = Convert::ToDouble(textBox3->Text);
		double h = Convert::ToDouble(textBox4->Text);
		richTextBox1->AppendText("  x\t\t      y\n");
		richTextBox1->AppendText("--------------------\n");

		// Перетворення вхідних даних
		double x = a;
		while (x <= b) {
			double y = cos(x * x) - pow(sin(x), 2); // Задана функція
			richTextBox1->AppendText(String::Format("x = {0}, y = {1}\n", x.ToString("0.00"), y.ToString("0.00")));
			x += h;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Очищення результатів попередніх обчислень
		richTextBox1->Clear();

		// Отримання вхідних даних з полів
		double a = Convert::ToDouble(textBox2->Text);
		double b = Convert::ToDouble(textBox3->Text);
		double h = Convert::ToDouble(textBox4->Text);

		richTextBox1->AppendText("  x\t\t      y\n");
		richTextBox1->AppendText("--------------------\n");

		// Очистка старого графика
		chart1->Series["Функція"]->Points->Clear();

		// Перетворення вхідних даних
		for (double x = a; x <= b; x += h) {
			double y = cos(x * x) - pow(sin(x), 2); // Задана функція
			richTextBox1->AppendText(String::Format("x = {0}, y = {1}\n", x.ToString("0.00"), y.ToString("0.00")));

			// Додаємо точку на графік
			chart1->Series["Функція"]->Points->AddXY(x, y);
		}
		}
	};

};