#pragma once
#include <cmath>
#include <vector>
#include <string>
#include <ctime>
#include <fstream>
#include <fstream>





namespace TaschenrechnerGui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ out;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::Button^ push_clear;

	private: System::Windows::Forms::Button^ push_del;
	private: System::Windows::Forms::Button^ push_plus;



	private: System::Windows::Forms::Button^ push_min;

	private: System::Windows::Forms::Button^ push_3;

	private: System::Windows::Forms::Button^ push_2;

	private: System::Windows::Forms::Button^ push_1;
	private: System::Windows::Forms::Button^ push_mal;


	private: System::Windows::Forms::Button^ push_6;

	private: System::Windows::Forms::Button^ push_5;


	private: System::Windows::Forms::Button^ push_4;
	private: System::Windows::Forms::Button^ push_res;


	private: System::Windows::Forms::Button^ push_p;

	private: System::Windows::Forms::Button^ push_0;
	private: System::Windows::Forms::Button^ push_div;


	private: System::Windows::Forms::Button^ push_9;

	private: System::Windows::Forms::Button^ push_8;

	private: System::Windows::Forms::Button^ push_7;













	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ histortToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ extrasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ historyToolStripMenuItem;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::Button^ button7;


	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Label^ lblShowOp;

private: System::Windows::Forms::ListBox^ listBox1;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::ToolStripMenuItem^ historyToolStripMenuItem1;







	private: System::ComponentModel::IContainer^ components;






	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->out = (gcnew System::Windows::Forms::TextBox());
			this->push_clear = (gcnew System::Windows::Forms::Button());
			this->push_del = (gcnew System::Windows::Forms::Button());
			this->push_plus = (gcnew System::Windows::Forms::Button());
			this->push_min = (gcnew System::Windows::Forms::Button());
			this->push_3 = (gcnew System::Windows::Forms::Button());
			this->push_2 = (gcnew System::Windows::Forms::Button());
			this->push_1 = (gcnew System::Windows::Forms::Button());
			this->push_mal = (gcnew System::Windows::Forms::Button());
			this->push_6 = (gcnew System::Windows::Forms::Button());
			this->push_5 = (gcnew System::Windows::Forms::Button());
			this->push_4 = (gcnew System::Windows::Forms::Button());
			this->push_res = (gcnew System::Windows::Forms::Button());
			this->push_p = (gcnew System::Windows::Forms::Button());
			this->push_0 = (gcnew System::Windows::Forms::Button());
			this->push_div = (gcnew System::Windows::Forms::Button());
			this->push_9 = (gcnew System::Windows::Forms::Button());
			this->push_8 = (gcnew System::Windows::Forms::Button());
			this->push_7 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->histortToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->extrasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historyToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->lblShowOp = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// out
			// 
			this->out->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->out->Location = System::Drawing::Point(13, 43);
			this->out->Multiline = true;
			this->out->Name = L"out";
			this->out->ReadOnly = true;
			this->out->Size = System::Drawing::Size(425, 100);
			this->out->TabIndex = 1;
			this->out->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// push_clear
			// 
			this->push_clear->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->push_clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->push_clear->ForeColor = System::Drawing::Color::Black;
			this->push_clear->Location = System::Drawing::Point(12, 149);
			this->push_clear->Name = L"push_clear";
			this->push_clear->Size = System::Drawing::Size(210, 90);
			this->push_clear->TabIndex = 8;
			this->push_clear->Text = L"Clear";
			this->push_clear->UseVisualStyleBackColor = false;
			this->push_clear->Click += gcnew System::EventHandler(this, &MyForm::push_clear_Click);
			// 
			// push_del
			// 
			this->push_del->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->push_del->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->push_del->ForeColor = System::Drawing::Color::Black;
			this->push_del->Location = System::Drawing::Point(228, 149);
			this->push_del->Name = L"push_del";
			this->push_del->Size = System::Drawing::Size(102, 90);
			this->push_del->TabIndex = 10;
			this->push_del->Text = L"Del";
			this->push_del->UseVisualStyleBackColor = false;
			this->push_del->Click += gcnew System::EventHandler(this, &MyForm::push_del_Click);
			// 
			// push_plus
			// 
			this->push_plus->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->push_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->push_plus->ForeColor = System::Drawing::Color::Black;
			this->push_plus->Location = System::Drawing::Point(336, 149);
			this->push_plus->Name = L"push_plus";
			this->push_plus->Size = System::Drawing::Size(102, 90);
			this->push_plus->TabIndex = 11;
			this->push_plus->Text = L"+";
			this->push_plus->UseVisualStyleBackColor = false;
			this->push_plus->Click += gcnew System::EventHandler(this, &MyForm::Ar_Op);
			// 
			// push_min
			// 
			this->push_min->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->push_min->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->push_min->ForeColor = System::Drawing::Color::Black;
			this->push_min->Location = System::Drawing::Point(336, 245);
			this->push_min->Name = L"push_min";
			this->push_min->Size = System::Drawing::Size(102, 90);
			this->push_min->TabIndex = 15;
			this->push_min->Text = L"-";
			this->push_min->UseVisualStyleBackColor = false;
			this->push_min->Click += gcnew System::EventHandler(this, &MyForm::Ar_Op);
			// 
			// push_3
			// 
			this->push_3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->push_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->push_3->ForeColor = System::Drawing::Color::Black;
			this->push_3->Location = System::Drawing::Point(228, 245);
			this->push_3->Name = L"push_3";
			this->push_3->Size = System::Drawing::Size(102, 90);
			this->push_3->TabIndex = 14;
			this->push_3->Text = L"3";
			this->push_3->UseVisualStyleBackColor = false;
			this->push_3->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// push_2
			// 
			this->push_2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->push_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->push_2->ForeColor = System::Drawing::Color::Black;
			this->push_2->Location = System::Drawing::Point(120, 245);
			this->push_2->Name = L"push_2";
			this->push_2->Size = System::Drawing::Size(102, 90);
			this->push_2->TabIndex = 13;
			this->push_2->Text = L"2";
			this->push_2->UseVisualStyleBackColor = false;
			this->push_2->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// push_1
			// 
			this->push_1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->push_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->push_1->ForeColor = System::Drawing::Color::Black;
			this->push_1->Location = System::Drawing::Point(12, 245);
			this->push_1->Name = L"push_1";
			this->push_1->Size = System::Drawing::Size(102, 90);
			this->push_1->TabIndex = 12;
			this->push_1->Text = L"1";
			this->push_1->UseVisualStyleBackColor = false;
			this->push_1->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// push_mal
			// 
			this->push_mal->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->push_mal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->push_mal->ForeColor = System::Drawing::Color::Black;
			this->push_mal->Location = System::Drawing::Point(336, 341);
			this->push_mal->Name = L"push_mal";
			this->push_mal->Size = System::Drawing::Size(102, 90);
			this->push_mal->TabIndex = 19;
			this->push_mal->Text = L"*";
			this->push_mal->UseVisualStyleBackColor = false;
			this->push_mal->Click += gcnew System::EventHandler(this, &MyForm::Ar_Op);
			// 
			// push_6
			// 
			this->push_6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->push_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->push_6->ForeColor = System::Drawing::Color::Black;
			this->push_6->Location = System::Drawing::Point(228, 341);
			this->push_6->Name = L"push_6";
			this->push_6->Size = System::Drawing::Size(102, 90);
			this->push_6->TabIndex = 18;
			this->push_6->Text = L"6";
			this->push_6->UseVisualStyleBackColor = false;
			this->push_6->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// push_5
			// 
			this->push_5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->push_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->push_5->ForeColor = System::Drawing::Color::Black;
			this->push_5->Location = System::Drawing::Point(120, 341);
			this->push_5->Name = L"push_5";
			this->push_5->Size = System::Drawing::Size(102, 90);
			this->push_5->TabIndex = 17;
			this->push_5->Text = L"5";
			this->push_5->UseVisualStyleBackColor = false;
			this->push_5->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// push_4
			// 
			this->push_4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->push_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->push_4->ForeColor = System::Drawing::Color::Black;
			this->push_4->Location = System::Drawing::Point(12, 341);
			this->push_4->Name = L"push_4";
			this->push_4->Size = System::Drawing::Size(102, 90);
			this->push_4->TabIndex = 16;
			this->push_4->Text = L"4";
			this->push_4->UseVisualStyleBackColor = false;
			this->push_4->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// push_res
			// 
			this->push_res->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->push_res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->push_res->ForeColor = System::Drawing::Color::Black;
			this->push_res->Location = System::Drawing::Point(336, 533);
			this->push_res->Name = L"push_res";
			this->push_res->Size = System::Drawing::Size(102, 90);
			this->push_res->TabIndex = 23;
			this->push_res->Text = L"=";
			this->push_res->UseVisualStyleBackColor = false;
			this->push_res->Click += gcnew System::EventHandler(this, &MyForm::push_res_Click);
			// 
			// push_p
			// 
			this->push_p->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->push_p->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->push_p->ForeColor = System::Drawing::Color::Black;
			this->push_p->Location = System::Drawing::Point(228, 533);
			this->push_p->Name = L"push_p";
			this->push_p->Size = System::Drawing::Size(102, 90);
			this->push_p->TabIndex = 22;
			this->push_p->Text = L".";
			this->push_p->UseVisualStyleBackColor = false;
			this->push_p->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// push_0
			// 
			this->push_0->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->push_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->push_0->ForeColor = System::Drawing::Color::Black;
			this->push_0->Location = System::Drawing::Point(12, 533);
			this->push_0->Name = L"push_0";
			this->push_0->Size = System::Drawing::Size(210, 90);
			this->push_0->TabIndex = 20;
			this->push_0->Text = L"0";
			this->push_0->UseVisualStyleBackColor = false;
			this->push_0->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// push_div
			// 
			this->push_div->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->push_div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->push_div->ForeColor = System::Drawing::Color::Black;
			this->push_div->Location = System::Drawing::Point(336, 437);
			this->push_div->Name = L"push_div";
			this->push_div->Size = System::Drawing::Size(102, 90);
			this->push_div->TabIndex = 27;
			this->push_div->Text = L"÷";
			this->push_div->UseVisualStyleBackColor = false;
			this->push_div->Click += gcnew System::EventHandler(this, &MyForm::Ar_Op);
			// 
			// push_9
			// 
			this->push_9->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->push_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->push_9->ForeColor = System::Drawing::Color::Black;
			this->push_9->Location = System::Drawing::Point(228, 437);
			this->push_9->Name = L"push_9";
			this->push_9->Size = System::Drawing::Size(102, 90);
			this->push_9->TabIndex = 26;
			this->push_9->Text = L"9";
			this->push_9->UseVisualStyleBackColor = false;
			this->push_9->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// push_8
			// 
			this->push_8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->push_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->push_8->ForeColor = System::Drawing::Color::Black;
			this->push_8->Location = System::Drawing::Point(120, 437);
			this->push_8->Name = L"push_8";
			this->push_8->Size = System::Drawing::Size(102, 90);
			this->push_8->TabIndex = 25;
			this->push_8->Text = L"8";
			this->push_8->UseVisualStyleBackColor = false;
			this->push_8->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// push_7
			// 
			this->push_7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->push_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->push_7->ForeColor = System::Drawing::Color::Black;
			this->push_7->Location = System::Drawing::Point(12, 437);
			this->push_7->Name = L"push_7";
			this->push_7->Size = System::Drawing::Size(102, 90);
			this->push_7->TabIndex = 24;
			this->push_7->Text = L"7";
			this->push_7->UseVisualStyleBackColor = false;
			this->push_7->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(454, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 31);
			this->label1->TabIndex = 33;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Silver;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(20, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 31);
			this->label2->TabIndex = 34;
			this->label2->Text = L"label2";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->histortToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(859, 24);
			this->menuStrip1->TabIndex = 35;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// histortToolStripMenuItem
			// 
			this->histortToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->extrasToolStripMenuItem,
					this->historyToolStripMenuItem, this->historyToolStripMenuItem1, this->exitToolStripMenuItem
			});
			this->histortToolStripMenuItem->Name = L"histortToolStripMenuItem";
			this->histortToolStripMenuItem->Size = System::Drawing::Size(66, 20);
			this->histortToolStripMenuItem->Text = L"Standard";
			this->histortToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::histortToolStripMenuItem_Click);
			// 
			// extrasToolStripMenuItem
			// 
			this->extrasToolStripMenuItem->Name = L"extrasToolStripMenuItem";
			this->extrasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->extrasToolStripMenuItem->Text = L"Extras";
			this->extrasToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::extrasToolStripMenuItem_Click);
			// 
			// historyToolStripMenuItem
			// 
			this->historyToolStripMenuItem->Checked = true;
			this->historyToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->historyToolStripMenuItem->Name = L"historyToolStripMenuItem";
			this->historyToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->historyToolStripMenuItem->Text = L"History";
			this->historyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::historyToolStripMenuItem_Click);
			// 
			// historyToolStripMenuItem1
			// 
			this->historyToolStripMenuItem1->Name = L"historyToolStripMenuItem1";
			this->historyToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->historyToolStripMenuItem1->Text = L"History";
			this->historyToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::historyToolStripMenuItem1_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(601, 343);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(210, 90);
			this->button3->TabIndex = 49;
			this->button3->Text = L"Cos";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(493, 535);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(102, 90);
			this->button4->TabIndex = 48;
			this->button4->Text = L"Hex";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(602, 535);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(101, 90);
			this->button7->TabIndex = 45;
			this->button7->Text = L"%";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(601, 439);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(210, 90);
			this->button10->TabIndex = 42;
			this->button10->Text = L"Tan";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(601, 247);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(210, 90);
			this->button11->TabIndex = 41;
			this->button11->Text = L"Sin";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(493, 343);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(102, 90);
			this->button12->TabIndex = 40;
			this->button12->Text = L"Bin";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(493, 439);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(102, 90);
			this->button13->TabIndex = 39;
			this->button13->Text = L"Oct";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(493, 151);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(102, 90);
			this->button14->TabIndex = 38;
			this->button14->Text = L"√";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click_1);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(709, 535);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(102, 90);
			this->button15->TabIndex = 37;
			this->button15->Text = L"π";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// lblShowOp
			// 
			this->lblShowOp->AutoSize = true;
			this->lblShowOp->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->lblShowOp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblShowOp->Location = System::Drawing::Point(22, 46);
			this->lblShowOp->Name = L"lblShowOp";
			this->lblShowOp->Size = System::Drawing::Size(66, 24);
			this->lblShowOp->TabIndex = 52;
			this->lblShowOp->Text = L"label3";
			this->lblShowOp->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 17;
			this->listBox1->Location = System::Drawing::Point(12, 629);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(430, 55);
			this->listBox1->TabIndex = 53;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(493, 247);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 90);
			this->button1->TabIndex = 54;
			this->button1->Text = L"Dec";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(602, 151);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(101, 90);
			this->button5->TabIndex = 47;
			this->button5->Text = L"²";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(709, 151);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 90);
			this->button2->TabIndex = 55;
			this->button2->Text = L"³";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InfoText;
			this->ClientSize = System::Drawing::Size(859, 673);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->lblShowOp);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->push_div);
			this->Controls->Add(this->push_9);
			this->Controls->Add(this->push_8);
			this->Controls->Add(this->push_7);
			this->Controls->Add(this->push_res);
			this->Controls->Add(this->push_p);
			this->Controls->Add(this->push_0);
			this->Controls->Add(this->push_mal);
			this->Controls->Add(this->push_6);
			this->Controls->Add(this->push_5);
			this->Controls->Add(this->push_4);
			this->Controls->Add(this->push_min);
			this->Controls->Add(this->push_3);
			this->Controls->Add(this->push_2);
			this->Controls->Add(this->push_1);
			this->Controls->Add(this->push_plus);
			this->Controls->Add(this->push_del);
			this->Controls->Add(this->push_clear);
			this->Controls->Add(this->out);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double Firstnum;
		double Secondnum;
		double result;
		double a;
		String^ Op;
		char Operation;
		
		

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		timer1->Start();
		MyForm::Width = 465;
		MyForm::Height = 666;
		histortToolStripMenuItem->Visible = true;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!out -> Text -> Contains("."))
		{
			out->Text = out->Text + ".";
		}
	}
	
	
	
	private: System::Void push_D_B_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		label2->Text = (System::Convert::ToString(DateTime::Now))->Remove(0, 10);

	}
	private: System::Void push_h_Click(System::Object^ sender, System::EventArgs^ e) {
		
		}

private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void histortToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::Width = 465;
	MyForm::Height = 666;
}
private: System::Void extrasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::Width = 840;
	MyForm::Height = 666;
	out->Width = 800;
}


private: System::Void Button_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);
	if (out->Text == "0")
	{
		out->Text = Numbers->Text;
	}
	else
	{
		out->Text = out->Text + Numbers->Text;
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Ar_Op(System::Object^ sender, System::EventArgs^ e) {

	Button^ op = safe_cast<Button^>(sender);

	Firstnum = Double::Parse(out->Text);
	out->Text = "";
	Op = op->Text;
	lblShowOp->Text = System::Convert::ToString(Firstnum) + " " + Op;
}
private: System::Void push_clear_Click(System::Object^ sender, System::EventArgs^ e) {
	out->Clear();
}
private: System::Void push_res_Click(System::Object^ sender, System::EventArgs^ e) {
	lblShowOp->Text = "";
	Secondnum = Double::Parse(out->Text);
	if (Op == "+")
	{
		result = Firstnum + Secondnum;
		out->Text = System::Convert::ToString(result);
		listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
	} else if(Op == "-")
	{
		result = Firstnum - Secondnum;
		out->Text = System::Convert::ToString(result);
		listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));

	}
	else if (Op == "*")
	{
		result = Firstnum * Secondnum;
		out->Text = System::Convert::ToString(result);
		listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
	}
	else if (Op == "÷")
	{
		result = Firstnum / Secondnum;
		out->Text = System::Convert::ToString(result);
	}
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void historyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (historyToolStripMenuItem->Checked == true)
	{
		listBox1->Visible = true;
		histortToolStripMenuItem->Visible = false;
		historyToolStripMenuItem1->Visible = true;
		MyForm::Height = 760;
	}

		
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void push_del_Click(System::Object^ sender, System::EventArgs^ e) {
	if (out->Text->Length > 0)
		out->Text = out->Text->Remove(out->Text->Length - 1, 1);
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	out->Text = ("3.14159");
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(out->Text);
	lblShowOp->Text = System::Convert::ToString("sind " + "(" + (out->Text) + ")");
	a = Math::Sin(a);
	out->Text = System::Convert::ToString(lblShowOp->Text);
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	int a = int::Parse(out->Text);
	out->Text = System::Convert::ToString(a, 2);
	lblShowOp->Text = "";
}

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	int a = int::Parse(out->Text);
	out->Text = System::Convert::ToString(a);
	listBox1->Items->Add(System::Convert::ToString(out->Text));
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(out->Text);
	lblShowOp->Text = System::Convert::ToString("cosd " + "(" + (out->Text) + ")");
	listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
	a = Math::Cos(a);
	out->Text = System::Convert::ToString(a);
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(out->Text);
	lblShowOp->Text = System::Convert::ToString("tand " + "(" + (out->Text) + ")");
	listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
	a = Math::Tan(a);
	out->Text = System::Convert::ToString(a);
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	int a = int::Parse(out->Text);
	out->Text = System::Convert::ToString(a, 16);
	lblShowOp->Text = "";
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	int a = int::Parse(out->Text);
	out->Text = System::Convert::ToString(a, 8);
	lblShowOp->Text = "";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Convert::ToDouble(out->Text) * Convert::ToDouble(out->Text);
	out->Text = Convert::ToString(a);

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Convert::ToDouble(out->Text) * Convert::ToDouble(out->Text) * Convert::ToDouble(out -> Text);
	out->Text = Convert::ToString(a);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Convert::ToDouble(out->Text) / Convert::ToDouble(100);
	out->Text = Convert::ToString(a);
}
private: System::Void button14_Click_1(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(out->Text);
	a = Math::Sqrt(a);
	out->Text = System::Convert::ToString(a);
	listBox1->Items->Add(System::Convert::ToString(out->Text));
}
private: System::Void historyToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	histortToolStripMenuItem->Visible = true;
	listBox1->Width = 265;
	listBox1->Visible = false;
	MyForm::Height = 437;
	historyToolStripMenuItem1->Visible = false;
}
};
	};

