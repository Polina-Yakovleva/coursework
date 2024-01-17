#pragma once

#include <iostream>
#include <limits.h>
#include <string.h>
#include <queue>
#include <vector>
#include <fstream>
#include <msclr/marshal_cppstd.h>
#include "Class.h"
#include <ctype.h>


using namespace std;


Graf element;


namespace itProgerWinApp {

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
	private: System::Windows::Forms::Button^ button;
		   
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ErrorProvider^ errorProvider2;
	private: System::Windows::Forms::Label^ label8;




	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		
		
		void Pole(int n);

		 


		


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
	private: System::Windows::Forms::NumericUpDown^ numericUpDownN;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridViewMas;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_source;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_sink;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::TextBox^ res_name;
private: System::Windows::Forms::ErrorProvider^ errorProvider1;


private: System::ComponentModel::IContainer^ components;

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->numericUpDownN = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewMas = (gcnew System::Windows::Forms::DataGridView());
			this->button = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_source = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_sink = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->res_name = (gcnew System::Windows::Forms::TextBox());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->errorProvider2 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownN))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMas))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_source))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_sink))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->BeginInit();
			this->SuspendLayout();
			// 
			// numericUpDownN
			// 
			this->numericUpDownN->Location = System::Drawing::Point(159, 7);
			this->numericUpDownN->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDownN->Name = L"numericUpDownN";
			this->numericUpDownN->Size = System::Drawing::Size(61, 22);
			this->numericUpDownN->TabIndex = 0;
			this->numericUpDownN->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDownN->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Количество вершин";
			// 
			// dataGridViewMas
			// 
			this->dataGridViewMas->AllowUserToAddRows = false;
			this->dataGridViewMas->AllowUserToDeleteRows = false;
			this->dataGridViewMas->AllowUserToResizeColumns = false;
			this->dataGridViewMas->AllowUserToResizeRows = false;
			this->dataGridViewMas->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCellsExceptHeader;
			this->dataGridViewMas->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders;
			this->dataGridViewMas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewMas->ColumnHeadersVisible = false;
			this->dataGridViewMas->Location = System::Drawing::Point(19, 82);
			this->dataGridViewMas->Name = L"dataGridViewMas";
			this->dataGridViewMas->RowHeadersVisible = false;
			this->dataGridViewMas->RowHeadersWidth = 51;
			this->dataGridViewMas->RowTemplate->Height = 24;
			this->dataGridViewMas->Size = System::Drawing::Size(370, 335);
			this->dataGridViewMas->TabIndex = 2;
			
			// 
			// button
			// 
			this->button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button->Location = System::Drawing::Point(19, 43);
			this->button->Name = L"button";
			this->button->Size = System::Drawing::Size(122, 23);
			this->button->TabIndex = 3;
			this->button->Text = L"Создать";
			this->button->UseVisualStyleBackColor = false;
			this->button->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(413, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(392, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Максимальная пропускная способность сети:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(597, 137);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 29);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Посчитать";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(594, 513);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 16);
			this->label3->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(848, 82);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 34);
			this->label4->TabIndex = 7;
			this->label4->Text = L"0";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numericUpDown_source
			// 
			this->numericUpDown_source->Location = System::Drawing::Point(304, 7);
			this->numericUpDown_source->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown_source->Name = L"numericUpDown_source";
			this->numericUpDown_source->Size = System::Drawing::Size(45, 22);
			this->numericUpDown_source->TabIndex = 8;
			this->numericUpDown_source->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown_sink
			// 
			this->numericUpDown_sink->Location = System::Drawing::Point(417, 7);
			this->numericUpDown_sink->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown_sink->Name = L"numericUpDown_sink";
			this->numericUpDown_sink->Size = System::Drawing::Size(47, 22);
			this->numericUpDown_sink->TabIndex = 9;
			this->numericUpDown_sink->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(252, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Исток";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(373, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 16);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Сток";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(417, 470);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(244, 24);
			this->comboBox1->TabIndex = 12;
			this->comboBox1->Text = L"История ";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::PaleVioletRed;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(218, 471);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 23);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Сохранить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// res_name
			// 
			this->res_name->AccessibleRole = System::Windows::Forms::AccessibleRole::Dialog;
			this->res_name->BackColor = System::Drawing::SystemColors::Menu;
			this->res_name->Location = System::Drawing::Point(19, 472);
			this->res_name->Multiline = true;
			this->res_name->Name = L"res_name";
			this->res_name->Size = System::Drawing::Size(175, 22);
			this->res_name->TabIndex = 14;
			this->res_name->Text = L"тут напишите название";
			this->res_name->Click += gcnew System::EventHandler(this, &MyForm::res_name_Click);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::PaleVioletRed;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(510, 537);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(84, 24);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Удалить";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"MV Boli", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(16, 540);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(471, 17);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Чтобы удалить из истории выбранный результат, нажмите кнопку:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(15, 436);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(248, 21);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Вы можете сохранить результат ";
			// 
			// errorProvider2
			// 
			this->errorProvider2->ContainerControl = this;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(914, 582);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->res_name);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->numericUpDown_sink);
			this->Controls->Add(this->numericUpDown_source);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button);
			this->Controls->Add(this->dataGridViewMas);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDownN);
			this->Name = L"MyForm";
			this->Text = L"Реализация сети";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownN))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMas))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_source))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_sink))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->numericUpDown_sink->Value = 2;
		
		ifstream fin("story.txt");
				for (string str; fin >> str;) {
					PNode a = new Node;
					a->name = str;
					fin >> str;
					a->N = stoi(str);
					fin >> str;
					a->source = stoi(str);
					fin >> str;
					a->sink = stoi(str);
					a->mas.assign(a->N, vector<int>(a->N));
					for (int i = 0; i < a->N; i++)
						for (int j = 0; j < a->N; j++) {
							fin >> str;
							a->mas[i][j] = stoi(str);
						}
					fin >> str;
					a->result = stoi(str);
					element.element = a;
					element.AddLast();
					this->comboBox1->Items->Add(msclr::interop::marshal_as<String^>(a->name));
				}
			
		
		
		
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void webBrowser1_DocumentCompleted(System::Object^ sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^ e) {
	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		this->numericUpDown_source->Maximum = this->numericUpDownN->Value;
		this->numericUpDown_sink->Maximum = this->numericUpDownN->Value;
	}
private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
	int n = System::Convert::ToInt32( this->numericUpDownN->Value);
	Pole(n);
	this->label4->Text = System::Convert::ToString( 0);

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


	PNode a = new Node; 
	a->N = System::Convert::ToInt32(this->numericUpDownN->Value);
	
	a->source= System::Convert::ToInt32(this->numericUpDown_source->Value);
	a->sink = System::Convert::ToInt32(this->numericUpDown_sink->Value);
	a->mas.assign(a->N, vector<int>(a->N));
	
	for (int i = 0; i < a->N; i++)
		for (int j = 0; j < a->N; j++) {
			a->mas[i][j] = System::Convert::ToInt32(this->dataGridViewMas->Rows[i+1]->Cells[j+1]->Value);
		}
	element.element = a;
	a->result = element.EdmondsKarp();
	this->label4->Text= System::Convert::ToString(a->result);
	

}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	PNode a = new Node;
	msclr::interop::marshal_context context; 
	string name = context.marshal_as<string>(this->res_name->Text); 
	if ((element.Find(name)==1) || (name.find(' ')!= string::npos)) {

		if (element.Find(name) ==1) 
			errorProvider1->SetError(res_name, "Такое название уже есть!");
		if (name.find(' ')!= string::npos) 
			errorProvider2->SetError(res_name, "Название не должно содержать пробелы или быть пустым!");
	}
	else {
		errorProvider1->Clear(); 
		errorProvider2->Clear();
		a->name = name;
		a->N = System::Convert::ToInt32(this->numericUpDownN->Value);
		a->source = System::Convert::ToInt32(this->numericUpDown_source->Value);
		a->sink = System::Convert::ToInt32(this->numericUpDown_sink->Value);
		a->mas.assign(a->N, vector<int>(a->N));

		for (int i = 0; i < a->N; i++)
			for (int j = 0; j < a->N; j++) {
				a->mas[i][j] = System::Convert::ToInt32(this->dataGridViewMas->Rows[i + 1]->Cells[j + 1]->Value);
			}
		
		a->result = element.EdmondsKarp();
		element.element = a;
		element.AddLast();
		this->comboBox1->Items->Add(this->res_name->Text);
		this->res_name->Text = "тут напишите незвание";

		ofstream fin("story.txt", std::ios_base::out | std::ios_base::app);
		string str; 
		str = a->name+" ";
		fin << str;
		str = to_string(a->N)+" ";
		fin << str;
		str = to_string(a->source)+" ";
		fin << str;
		str = to_string(a->sink)+" ";
		fin << str;
		for (int i=0; i<a->N; i++)
			for (int j = 0; j < a->N; j++)
			{
				str = to_string(a->mas[i][j])+" ";
				fin << str;
			}
		str = to_string(a->result);
		fin << str << "\n"; 
		 
	}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	msclr::interop::marshal_context context; 
	string name = context.marshal_as<string>(this->comboBox1->SelectedItem->ToString()) ;
	Node *q = element.Find_2(name);
	this->numericUpDownN->Value = q->N;
	this->numericUpDown_source->Value = q->source;
	this->numericUpDown_sink->Value = q->sink;
	this->label4->Text = System::Convert::ToString(q->result);
	Pole(q->N);
	for (int i = 0; i < q->N; i++)
		for (int j = 0; j < q->N; j++) {
			this->dataGridViewMas->Rows[i+1]->Cells[j+1]->Value = q->mas[i][j];
		}
}
private: System::Void res_name_Click(System::Object^ sender, System::EventArgs^ e) {
	this->res_name->Text = "";
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	msclr::interop::marshal_context context;
	string name = context.marshal_as<string>(this->comboBox1->SelectedItem->ToString());
	
	element.DelGraf( element.Find_2(name));
	this->comboBox1->Items->Remove(this->comboBox1->SelectedItem);
	this->comboBox1->Text = "";
	element.Story();
}



};
}

