/*
* @author Jahyung Yun
* @creationdate Oct, 2022
*/


#pragma once
#include <visa.h>
#include <memory.h>
#include <stdio.h>
#include <string>
#include <fstream>
#include <msclr\marshal_cppstd.h>


namespace AFGapp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Configuration;
	using namespace System::Xml;



	/// <summary>
	/// Summary for AFGapp
	/// </summary>
	public ref class AFGapp : public System::Windows::Forms::Form
	{
	public:
		AFGapp(void)
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
		~AFGapp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ INDButton;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ voltButton;


	private: System::Windows::Forms::Button^ freqButton;

	private: System::Windows::Forms::RadioButton^ SINradioButton;






	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ freqTextBox;

	private: System::Windows::Forms::Button^ cycButton;

	private: System::Windows::Forms::RadioButton^ SQUradioButton;
	private: System::Windows::Forms::Button^ qCurrFuncButton;
	private: System::Windows::Forms::Button^ qCurrFreqButton;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ qCurrVoltButton;
	private: System::Windows::Forms::Label^ funcLabel;
	private: System::Windows::Forms::Label^ cycLabel;
	private: System::Windows::Forms::Label^ freqLabel;
	private: System::Windows::Forms::Label^ voltLabel;
	private: System::Windows::Forms::Button^ qCurrCycleButton;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ cycTextBox;

	private: System::Windows::Forms::TextBox^ voltTextBox;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ onRadioButton;
	private: System::Windows::Forms::RadioButton^ offRadioButton;

	private: System::Windows::Forms::Button^ outputButton;
	private: System::Windows::Forms::Label^ outputLabel;
	private: System::Windows::Forms::Button^ burstButton;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ gatedRadioButton;
	private: System::Windows::Forms::RadioButton^ triggeredRadioButton;
	private: System::Windows::Forms::Label^ burstLabel;
	private: System::Windows::Forms::ComboBox^ preComboBox;
	private: System::Windows::Forms::Button^ loadPreButton;
	private: System::Windows::Forms::Button^ subPreButton;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ addPreButton;


	private: System::Windows::Forms::Button^ remButton;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::RadioButton^ timRadioButton;

	private: System::Windows::Forms::RadioButton^ externalRadioButton;
	private: System::Windows::Forms::Button^ qSourceButton;
	private: System::Windows::Forms::Label^ sourceLabel;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::RadioButton^ offBsRadioButton;
	private: System::Windows::Forms::RadioButton^ onBsRadioButton;
	private: System::Windows::Forms::Button^ qBurstStatButton;

	private: System::Windows::Forms::Label^ bsLabel;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->INDButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->voltButton = (gcnew System::Windows::Forms::Button());
			this->freqButton = (gcnew System::Windows::Forms::Button());
			this->SINradioButton = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->SQUradioButton = (gcnew System::Windows::Forms::RadioButton());
			this->freqTextBox = (gcnew System::Windows::Forms::TextBox());
			this->cycButton = (gcnew System::Windows::Forms::Button());
			this->qCurrFuncButton = (gcnew System::Windows::Forms::Button());
			this->qCurrFreqButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->qCurrVoltButton = (gcnew System::Windows::Forms::Button());
			this->funcLabel = (gcnew System::Windows::Forms::Label());
			this->cycLabel = (gcnew System::Windows::Forms::Label());
			this->freqLabel = (gcnew System::Windows::Forms::Label());
			this->voltLabel = (gcnew System::Windows::Forms::Label());
			this->qCurrCycleButton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cycTextBox = (gcnew System::Windows::Forms::TextBox());
			this->voltTextBox = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->offRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->onRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->outputButton = (gcnew System::Windows::Forms::Button());
			this->outputLabel = (gcnew System::Windows::Forms::Label());
			this->burstButton = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->gatedRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->triggeredRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->burstLabel = (gcnew System::Windows::Forms::Label());
			this->preComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->loadPreButton = (gcnew System::Windows::Forms::Button());
			this->subPreButton = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->addPreButton = (gcnew System::Windows::Forms::Button());
			this->remButton = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->timRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->externalRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->qSourceButton = (gcnew System::Windows::Forms::Button());
			this->sourceLabel = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->offBsRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->onBsRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->qBurstStatButton = (gcnew System::Windows::Forms::Button());
			this->bsLabel = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// INDButton
			// 
			this->INDButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->INDButton->Location = System::Drawing::Point(958, 31);
			this->INDButton->Name = L"INDButton";
			this->INDButton->Size = System::Drawing::Size(161, 47);
			this->INDButton->TabIndex = 0;
			this->INDButton->Text = L"Query Identify";
			this->INDButton->UseVisualStyleBackColor = false;
			this->INDButton->Click += gcnew System::EventHandler(this, &AFGapp::INDButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(112, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 20);
			this->label1->TabIndex = 1;
			// 
			// voltButton
			// 
			this->voltButton->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->voltButton->Location = System::Drawing::Point(143, 254);
			this->voltButton->Name = L"voltButton";
			this->voltButton->Size = System::Drawing::Size(129, 36);
			this->voltButton->TabIndex = 3;
			this->voltButton->Text = L"Voltage(v)";
			this->voltButton->UseVisualStyleBackColor = false;
			this->voltButton->Click += gcnew System::EventHandler(this, &AFGapp::voltButton_Click);
			// 
			// freqButton
			// 
			this->freqButton->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->freqButton->Location = System::Drawing::Point(143, 322);
			this->freqButton->Name = L"freqButton";
			this->freqButton->Size = System::Drawing::Size(129, 43);
			this->freqButton->TabIndex = 4;
			this->freqButton->Text = L"Frequency (kHz)";
			this->freqButton->UseVisualStyleBackColor = false;
			this->freqButton->Click += gcnew System::EventHandler(this, &AFGapp::freqButton_Click);
			// 
			// SINradioButton
			// 
			this->SINradioButton->AutoSize = true;
			this->SINradioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SINradioButton->Location = System::Drawing::Point(6, 19);
			this->SINradioButton->Name = L"SINradioButton";
			this->SINradioButton->Size = System::Drawing::Size(43, 19);
			this->SINradioButton->TabIndex = 10;
			this->SINradioButton->TabStop = true;
			this->SINradioButton->Text = L"Sin";
			this->SINradioButton->UseVisualStyleBackColor = true;
			this->SINradioButton->CheckedChanged += gcnew System::EventHandler(this, &AFGapp::SINradioButton_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->SQUradioButton);
			this->groupBox1->Controls->Add(this->SINradioButton);
			this->groupBox1->Location = System::Drawing::Point(19, 429);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(100, 71);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Wave Type";
			// 
			// SQUradioButton
			// 
			this->SQUradioButton->AutoSize = true;
			this->SQUradioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SQUradioButton->Location = System::Drawing::Point(6, 42);
			this->SQUradioButton->Name = L"SQUradioButton";
			this->SQUradioButton->Size = System::Drawing::Size(65, 19);
			this->SQUradioButton->TabIndex = 11;
			this->SQUradioButton->TabStop = true;
			this->SQUradioButton->Text = L"Square";
			this->SQUradioButton->UseVisualStyleBackColor = true;
			this->SQUradioButton->CheckedChanged += gcnew System::EventHandler(this, &AFGapp::SQUradioButton_CheckedChanged);
			// 
			// freqTextBox
			// 
			this->freqTextBox->Location = System::Drawing::Point(19, 321);
			this->freqTextBox->Name = L"freqTextBox";
			this->freqTextBox->Size = System::Drawing::Size(100, 20);
			this->freqTextBox->TabIndex = 12;
			this->freqTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AFGapp::Only_Decimal_KeyPress);
			// 
			// cycButton
			// 
			this->cycButton->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->cycButton->Location = System::Drawing::Point(143, 389);
			this->cycButton->Name = L"cycButton";
			this->cycButton->Size = System::Drawing::Size(129, 45);
			this->cycButton->TabIndex = 13;
			this->cycButton->Text = L"Cycles";
			this->cycButton->UseVisualStyleBackColor = false;
			this->cycButton->Click += gcnew System::EventHandler(this, &AFGapp::cycButton_Click);
			// 
			// qCurrFuncButton
			// 
			this->qCurrFuncButton->Location = System::Drawing::Point(299, 458);
			this->qCurrFuncButton->Name = L"qCurrFuncButton";
			this->qCurrFuncButton->Size = System::Drawing::Size(161, 47);
			this->qCurrFuncButton->TabIndex = 14;
			this->qCurrFuncButton->Text = L"Query Current Function";
			this->qCurrFuncButton->UseVisualStyleBackColor = true;
			this->qCurrFuncButton->Click += gcnew System::EventHandler(this, &AFGapp::qCurrFunctButton_Click);
			// 
			// qCurrFreqButton
			// 
			this->qCurrFreqButton->Location = System::Drawing::Point(299, 321);
			this->qCurrFreqButton->Name = L"qCurrFreqButton";
			this->qCurrFreqButton->Size = System::Drawing::Size(161, 47);
			this->qCurrFreqButton->TabIndex = 15;
			this->qCurrFreqButton->Text = L"Query Current Frequency";
			this->qCurrFreqButton->UseVisualStyleBackColor = true;
			this->qCurrFreqButton->Click += gcnew System::EventHandler(this, &AFGapp::qCurrFreqButton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(343, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 20);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Querys";
			// 
			// qCurrVoltButton
			// 
			this->qCurrVoltButton->Location = System::Drawing::Point(299, 254);
			this->qCurrVoltButton->Name = L"qCurrVoltButton";
			this->qCurrVoltButton->Size = System::Drawing::Size(161, 47);
			this->qCurrVoltButton->TabIndex = 17;
			this->qCurrVoltButton->Text = L"Query Current Voltage";
			this->qCurrVoltButton->UseVisualStyleBackColor = true;
			this->qCurrVoltButton->Click += gcnew System::EventHandler(this, &AFGapp::qCurrVoltButton_Click);
			// 
			// funcLabel
			// 
			this->funcLabel->AutoSize = true;
			this->funcLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->funcLabel->Location = System::Drawing::Point(518, 447);
			this->funcLabel->Name = L"funcLabel";
			this->funcLabel->Size = System::Drawing::Size(79, 20);
			this->funcLabel->TabIndex = 18;
			this->funcLabel->Text = L"Function: ";
			// 
			// cycLabel
			// 
			this->cycLabel->AutoSize = true;
			this->cycLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cycLabel->Location = System::Drawing::Point(518, 389);
			this->cycLabel->Name = L"cycLabel";
			this->cycLabel->Size = System::Drawing::Size(59, 20);
			this->cycLabel->TabIndex = 19;
			this->cycLabel->Text = L"Cycles:";
			// 
			// freqLabel
			// 
			this->freqLabel->AutoSize = true;
			this->freqLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->freqLabel->Location = System::Drawing::Point(518, 321);
			this->freqLabel->Name = L"freqLabel";
			this->freqLabel->Size = System::Drawing::Size(88, 20);
			this->freqLabel->TabIndex = 20;
			this->freqLabel->Text = L"Frequency:";
			// 
			// voltLabel
			// 
			this->voltLabel->AutoSize = true;
			this->voltLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->voltLabel->Location = System::Drawing::Point(518, 253);
			this->voltLabel->Name = L"voltLabel";
			this->voltLabel->Size = System::Drawing::Size(72, 20);
			this->voltLabel->TabIndex = 21;
			this->voltLabel->Text = L"Voltage: ";
			// 
			// qCurrCycleButton
			// 
			this->qCurrCycleButton->Location = System::Drawing::Point(299, 389);
			this->qCurrCycleButton->Name = L"qCurrCycleButton";
			this->qCurrCycleButton->Size = System::Drawing::Size(161, 47);
			this->qCurrCycleButton->TabIndex = 22;
			this->qCurrCycleButton->Text = L"Query Current Cycle";
			this->qCurrCycleButton->UseVisualStyleBackColor = true;
			this->qCurrCycleButton->Click += gcnew System::EventHandler(this, &AFGapp::qCurrCycleButton_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(24, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 20);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Result: ";
			// 
			// cycTextBox
			// 
			this->cycTextBox->Location = System::Drawing::Point(19, 387);
			this->cycTextBox->Name = L"cycTextBox";
			this->cycTextBox->Size = System::Drawing::Size(100, 20);
			this->cycTextBox->TabIndex = 24;
			this->cycTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AFGapp::Only_Int_KeyPress);
			// 
			// voltTextBox
			// 
			this->voltTextBox->Location = System::Drawing::Point(19, 253);
			this->voltTextBox->Name = L"voltTextBox";
			this->voltTextBox->Size = System::Drawing::Size(100, 20);
			this->voltTextBox->TabIndex = 25;
			this->voltTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AFGapp::Only_Decimal_KeyPress);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->offRadioButton);
			this->groupBox2->Controls->Add(this->onRadioButton);
			this->groupBox2->Location = System::Drawing::Point(756, 322);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(100, 66);
			this->groupBox2->TabIndex = 26;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Output";
			// 
			// offRadioButton
			// 
			this->offRadioButton->AutoSize = true;
			this->offRadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->offRadioButton->Location = System::Drawing::Point(7, 44);
			this->offRadioButton->Name = L"offRadioButton";
			this->offRadioButton->Size = System::Drawing::Size(40, 19);
			this->offRadioButton->TabIndex = 1;
			this->offRadioButton->TabStop = true;
			this->offRadioButton->Text = L"Off";
			this->offRadioButton->UseVisualStyleBackColor = true;
			this->offRadioButton->CheckedChanged += gcnew System::EventHandler(this, &AFGapp::offRadioButton_CheckedChanged);
			// 
			// onRadioButton
			// 
			this->onRadioButton->AutoSize = true;
			this->onRadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->onRadioButton->Location = System::Drawing::Point(7, 20);
			this->onRadioButton->Name = L"onRadioButton";
			this->onRadioButton->Size = System::Drawing::Size(41, 19);
			this->onRadioButton->TabIndex = 0;
			this->onRadioButton->TabStop = true;
			this->onRadioButton->Text = L"On";
			this->onRadioButton->UseVisualStyleBackColor = true;
			this->onRadioButton->CheckedChanged += gcnew System::EventHandler(this, &AFGapp::onRadioButton_CheckedChanged);
			// 
			// outputButton
			// 
			this->outputButton->Location = System::Drawing::Point(958, 261);
			this->outputButton->Name = L"outputButton";
			this->outputButton->Size = System::Drawing::Size(161, 47);
			this->outputButton->TabIndex = 28;
			this->outputButton->Text = L"Query Output";
			this->outputButton->UseVisualStyleBackColor = true;
			this->outputButton->Click += gcnew System::EventHandler(this, &AFGapp::outputButton_Click);
			// 
			// outputLabel
			// 
			this->outputLabel->AutoSize = true;
			this->outputLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->outputLabel->Location = System::Drawing::Point(754, 261);
			this->outputLabel->Name = L"outputLabel";
			this->outputLabel->Size = System::Drawing::Size(62, 20);
			this->outputLabel->TabIndex = 29;
			this->outputLabel->Text = L"Output:";
			// 
			// burstButton
			// 
			this->burstButton->Location = System::Drawing::Point(298, 180);
			this->burstButton->Name = L"burstButton";
			this->burstButton->Size = System::Drawing::Size(162, 47);
			this->burstButton->TabIndex = 30;
			this->burstButton->Text = L"Query Burst Mode";
			this->burstButton->UseVisualStyleBackColor = true;
			this->burstButton->Click += gcnew System::EventHandler(this, &AFGapp::burstButton_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->gatedRadioButton);
			this->groupBox3->Controls->Add(this->triggeredRadioButton);
			this->groupBox3->Location = System::Drawing::Point(143, 111);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(109, 70);
			this->groupBox3->TabIndex = 31;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Burst Mode";
			// 
			// gatedRadioButton
			// 
			this->gatedRadioButton->AutoSize = true;
			this->gatedRadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gatedRadioButton->Location = System::Drawing::Point(6, 40);
			this->gatedRadioButton->Name = L"gatedRadioButton";
			this->gatedRadioButton->Size = System::Drawing::Size(58, 19);
			this->gatedRadioButton->TabIndex = 1;
			this->gatedRadioButton->TabStop = true;
			this->gatedRadioButton->Text = L"Gated";
			this->gatedRadioButton->UseVisualStyleBackColor = true;
			this->gatedRadioButton->CheckedChanged += gcnew System::EventHandler(this, &AFGapp::gatedRadioButton_CheckedChanged);
			// 
			// triggeredRadioButton
			// 
			this->triggeredRadioButton->AutoSize = true;
			this->triggeredRadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->triggeredRadioButton->Location = System::Drawing::Point(6, 20);
			this->triggeredRadioButton->Name = L"triggeredRadioButton";
			this->triggeredRadioButton->Size = System::Drawing::Size(78, 19);
			this->triggeredRadioButton->TabIndex = 0;
			this->triggeredRadioButton->TabStop = true;
			this->triggeredRadioButton->Text = L"Triggered";
			this->triggeredRadioButton->UseVisualStyleBackColor = true;
			this->triggeredRadioButton->CheckedChanged += gcnew System::EventHandler(this, &AFGapp::triggeredRadioButton_CheckedChanged);
			// 
			// burstLabel
			// 
			this->burstLabel->AutoSize = true;
			this->burstLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->burstLabel->Location = System::Drawing::Point(518, 180);
			this->burstLabel->Name = L"burstLabel";
			this->burstLabel->Size = System::Drawing::Size(95, 20);
			this->burstLabel->TabIndex = 32;
			this->burstLabel->Text = L"Burst Mode:";
			// 
			// preComboBox
			// 
			this->preComboBox->FormattingEnabled = true;
			this->preComboBox->Location = System::Drawing::Point(776, 106);
			this->preComboBox->Name = L"preComboBox";
			this->preComboBox->Size = System::Drawing::Size(121, 21);
			this->preComboBox->TabIndex = 33;
			this->preComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &AFGapp::preComboBox_TextUpdate);
			this->preComboBox->TextUpdate += gcnew System::EventHandler(this, &AFGapp::preComboBox_TextUpdate);
			// 
			// loadPreButton
			// 
			this->loadPreButton->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->loadPreButton->Location = System::Drawing::Point(776, 202);
			this->loadPreButton->Name = L"loadPreButton";
			this->loadPreButton->Size = System::Drawing::Size(128, 34);
			this->loadPreButton->TabIndex = 34;
			this->loadPreButton->Text = L"Load Presets";
			this->loadPreButton->UseVisualStyleBackColor = false;
			this->loadPreButton->Click += gcnew System::EventHandler(this, &AFGapp::loadPrebutton_Click);
			// 
			// subPreButton
			// 
			this->subPreButton->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->subPreButton->Location = System::Drawing::Point(776, 155);
			this->subPreButton->Name = L"subPreButton";
			this->subPreButton->Size = System::Drawing::Size(128, 34);
			this->subPreButton->TabIndex = 35;
			this->subPreButton->Text = L"Submit Preset";
			this->subPreButton->UseVisualStyleBackColor = false;
			this->subPreButton->Click += gcnew System::EventHandler(this, &AFGapp::subPreButton_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(773, 71);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 16);
			this->label4->TabIndex = 36;
			this->label4->Text = L"Premade Profiles";
			// 
			// addPreButton
			// 
			this->addPreButton->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->addPreButton->Location = System::Drawing::Point(958, 104);
			this->addPreButton->Name = L"addPreButton";
			this->addPreButton->Size = System::Drawing::Size(128, 34);
			this->addPreButton->TabIndex = 37;
			this->addPreButton->Text = L"Add Preset";
			this->addPreButton->UseVisualStyleBackColor = false;
			this->addPreButton->Click += gcnew System::EventHandler(this, &AFGapp::addPreButton_Click);
			// 
			// remButton
			// 
			this->remButton->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->remButton->Location = System::Drawing::Point(958, 155);
			this->remButton->Name = L"remButton";
			this->remButton->Size = System::Drawing::Size(128, 34);
			this->remButton->TabIndex = 40;
			this->remButton->Text = L"Remove Preset";
			this->remButton->UseVisualStyleBackColor = false;
			this->remButton->Click += gcnew System::EventHandler(this, &AFGapp::remButton_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->timRadioButton);
			this->groupBox4->Controls->Add(this->externalRadioButton);
			this->groupBox4->Location = System::Drawing::Point(756, 458);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(109, 65);
			this->groupBox4->TabIndex = 41;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Source";
			// 
			// timRadioButton
			// 
			this->timRadioButton->AutoSize = true;
			this->timRadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timRadioButton->Location = System::Drawing::Point(6, 40);
			this->timRadioButton->Name = L"timRadioButton";
			this->timRadioButton->Size = System::Drawing::Size(57, 19);
			this->timRadioButton->TabIndex = 1;
			this->timRadioButton->TabStop = true;
			this->timRadioButton->Text = L"Timer";
			this->timRadioButton->UseVisualStyleBackColor = true;
			this->timRadioButton->CheckedChanged += gcnew System::EventHandler(this, &AFGapp::timRadioButton_CheckedChanged);
			// 
			// externalRadioButton
			// 
			this->externalRadioButton->AutoSize = true;
			this->externalRadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->externalRadioButton->Location = System::Drawing::Point(6, 20);
			this->externalRadioButton->Name = L"externalRadioButton";
			this->externalRadioButton->Size = System::Drawing::Size(70, 19);
			this->externalRadioButton->TabIndex = 0;
			this->externalRadioButton->TabStop = true;
			this->externalRadioButton->Text = L"External";
			this->externalRadioButton->UseVisualStyleBackColor = true;
			this->externalRadioButton->CheckedChanged += gcnew System::EventHandler(this, &AFGapp::externalRadioButton_CheckedChanged);
			// 
			// qSourceButton
			// 
			this->qSourceButton->Location = System::Drawing::Point(958, 420);
			this->qSourceButton->Name = L"qSourceButton";
			this->qSourceButton->Size = System::Drawing::Size(161, 47);
			this->qSourceButton->TabIndex = 42;
			this->qSourceButton->Text = L"Query Source";
			this->qSourceButton->UseVisualStyleBackColor = true;
			this->qSourceButton->Click += gcnew System::EventHandler(this, &AFGapp::qSourceButton_Click);
			// 
			// sourceLabel
			// 
			this->sourceLabel->AutoSize = true;
			this->sourceLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sourceLabel->Location = System::Drawing::Point(752, 414);
			this->sourceLabel->Name = L"sourceLabel";
			this->sourceLabel->Size = System::Drawing::Size(64, 20);
			this->sourceLabel->TabIndex = 43;
			this->sourceLabel->Text = L"Source:";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->offBsRadioButton);
			this->groupBox5->Controls->Add(this->onBsRadioButton);
			this->groupBox5->Location = System::Drawing::Point(19, 111);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(109, 70);
			this->groupBox5->TabIndex = 44;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Burst State";
			// 
			// offBsRadioButton
			// 
			this->offBsRadioButton->AutoSize = true;
			this->offBsRadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->offBsRadioButton->Location = System::Drawing::Point(6, 40);
			this->offBsRadioButton->Name = L"offBsRadioButton";
			this->offBsRadioButton->Size = System::Drawing::Size(40, 19);
			this->offBsRadioButton->TabIndex = 1;
			this->offBsRadioButton->TabStop = true;
			this->offBsRadioButton->Text = L"Off";
			this->offBsRadioButton->UseVisualStyleBackColor = true;
			this->offBsRadioButton->CheckedChanged += gcnew System::EventHandler(this, &AFGapp::offBsRadioButton_CheckedChanged);
			// 
			// onBsRadioButton
			// 
			this->onBsRadioButton->AutoSize = true;
			this->onBsRadioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->onBsRadioButton->Location = System::Drawing::Point(6, 20);
			this->onBsRadioButton->Name = L"onBsRadioButton";
			this->onBsRadioButton->Size = System::Drawing::Size(41, 19);
			this->onBsRadioButton->TabIndex = 0;
			this->onBsRadioButton->TabStop = true;
			this->onBsRadioButton->Text = L"On";
			this->onBsRadioButton->UseVisualStyleBackColor = true;
			this->onBsRadioButton->CheckedChanged += gcnew System::EventHandler(this, &AFGapp::onBsRadioButton_CheckedChanged);
			// 
			// qBurstStatButton
			// 
			this->qBurstStatButton->Location = System::Drawing::Point(298, 111);
			this->qBurstStatButton->Name = L"qBurstStatButton";
			this->qBurstStatButton->Size = System::Drawing::Size(162, 47);
			this->qBurstStatButton->TabIndex = 45;
			this->qBurstStatButton->Text = L"Query Burst State";
			this->qBurstStatButton->UseVisualStyleBackColor = true;
			this->qBurstStatButton->Click += gcnew System::EventHandler(this, &AFGapp::qBurstStatButton_Click);
			// 
			// bsLabel
			// 
			this->bsLabel->AutoSize = true;
			this->bsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bsLabel->Location = System::Drawing::Point(518, 118);
			this->bsLabel->Name = L"bsLabel";
			this->bsLabel->Size = System::Drawing::Size(94, 20);
			this->bsLabel->TabIndex = 46;
			this->bsLabel->Text = L"Burst State:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1191, 554);
			this->Controls->Add(this->bsLabel);
			this->Controls->Add(this->qBurstStatButton);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->sourceLabel);
			this->Controls->Add(this->qSourceButton);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->remButton);
			this->Controls->Add(this->addPreButton);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->subPreButton);
			this->Controls->Add(this->loadPreButton);
			this->Controls->Add(this->preComboBox);
			this->Controls->Add(this->burstLabel);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->burstButton);
			this->Controls->Add(this->outputLabel);
			this->Controls->Add(this->outputButton);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->voltTextBox);
			this->Controls->Add(this->cycTextBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->qCurrCycleButton);
			this->Controls->Add(this->voltLabel);
			this->Controls->Add(this->freqLabel);
			this->Controls->Add(this->cycLabel);
			this->Controls->Add(this->funcLabel);
			this->Controls->Add(this->qCurrVoltButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->qCurrFreqButton);
			this->Controls->Add(this->qCurrFuncButton);
			this->Controls->Add(this->cycButton);
			this->Controls->Add(this->freqTextBox);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->freqButton);
			this->Controls->Add(this->voltButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->INDButton);
			this->Name = L"MyForm";
			this->Text = L"AFG3000 Controller App";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ preset_path = "Presets.xml";


		void connect(Boolean only_write, int hold, ViBuf command, std::string out) {

			ViSession	rm = VI_NULL, vi = VI_NULL;
			ViStatus	status;
			ViChar		buffer[256];
			ViUInt32	retCnt;
			status = viOpenDefaultRM(&rm);
			if (status != VI_SUCCESS) goto error;

			status = viOpen(rm, "USB::0x0699::0x0350::C010612::INSTR", VI_NULL, VI_NULL, &vi);
			if (status != VI_SUCCESS) goto error;

			status = viSetAttribute(vi, VI_ATTR_TMO_VALUE, 5000);
			if (status < VI_SUCCESS) goto error;


			status = viWrite(vi, command, hold, &retCnt);
			if (status < VI_SUCCESS) goto error;
			memset(buffer, 0, sizeof(buffer));

			if (!only_write) {
				status = viRead(vi, (ViBuf)buffer, sizeof(buffer), &retCnt);
				if (status < VI_SUCCESS) goto error;
			}

			if (out == "id") {
				label1->Text = "id:\n" + gcnew String(buffer);
			}

			else if (out == "func") {
				label1->Text = "Func:\n" + gcnew String(buffer);
				funcLabel->Text = "Function: " + gcnew String(buffer);
			}

			else if (out == "freq") {
				label1->Text = "Freq:\n" + gcnew String(buffer);
				freqLabel->Text = "Frequency: " + gcnew String(buffer) + "Hz";
			}

			else if (out == "volt") {
				label1->Text = "Volt:\n" + gcnew String(buffer);
				voltLabel->Text = "Voltage: " + gcnew String(buffer) + "V";
			}

			else if (out == "cyc") {
				label1->Text = "Cyc:\n" + gcnew String(buffer);
				cycLabel->Text = "Cycles: " + gcnew String(buffer);
			}

			else if (out == "out") {
				label1->Text = "Out:\n" + gcnew String(buffer);
				if (gcnew String(buffer) == "1\n") {
					outputLabel->Text = "Output: On";
				}

				else if (gcnew String(buffer) == "0\n") {
					outputLabel->Text = "Output: Off";
				}
			}

			else if (out == "bm") {
				label1->Text = "BM:\n" + gcnew String(buffer);
				burstLabel->Text = "Burst Mode: " + gcnew String(buffer);
			}

			else if (out == "src") {
				label1->Text = "Src:\n" + gcnew String(buffer);
				sourceLabel->Text = "Source: " + gcnew String(buffer);
			}

			else if (out == "bs") {
				label1->Text = "Bstatus:\n" + gcnew String(buffer);
				if (gcnew String(buffer) == "1\n") {
					bsLabel->Text = "Burst Status: On";
				}

				else if (gcnew String(buffer) == "0\n") {
					bsLabel->Text = "Burst Status: Off ";
				}

			}

			viClose(rm);
			return;

		error:
			// Report error and clean up
			viStatusDesc(vi, status, buffer);
			label1->Text = "failure \n" + gcnew String(buffer);
			if (rm != VI_NULL) {
				viClose(rm);

			}
			return;

		}

		//Validates inputs for given type textbox
		BOOLEAN validate(std::string type) {
			if (type == "cyc") {
				return (1 <= System::Convert::ToInt64(cycTextBox->Text) && System::Convert::ToInt64(cycTextBox->Text) < 1000000);
			}

			else if (type == "freq") {
				return (0 <= System::Convert::ToDecimal(freqTextBox->Text) && System::Convert::ToDecimal(freqTextBox->Text) <= 5000);
			}

			else if (type == "volt") {
				return ((Decimal)0.01 <= System::Convert::ToDecimal(voltTextBox->Text) && System::Convert::ToDecimal(voltTextBox->Text) <= (Decimal)1.5);
			}

			else if (type == "xml") {
				XmlDocument^ doc = gcnew XmlDocument();
				doc->Load(preset_path);


				XmlNodeList^ nodeList;
				XmlNode^ root = doc->DocumentElement;
				nodeList = root->SelectNodes("//profile[@name=\"" + preComboBox->Text + "\"]");
				return (nodeList->Count == 0);

			}
			else {
				return false;
			}

		}

		/*
		Key press validation
		*/

		//Forces only int and backspace chars
	private: System::Void Only_Int_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
			e->Handled = true;

	}

		   //Forces only int, backspace, and decimal chars
	private: System::Void Only_Decimal_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08 && e->KeyChar != 0x2E)
			e->Handled = true;

	}

		   /*
		   Commands to AFG
		   */
		   //Identification command
	private: System::Void INDButton_Click(System::Object^ sender, System::EventArgs^ e) {
		connect(false, 5, (ViBuf)"*idn?\n", "id");

	}

		   //Query function type command
	private: System::Void qCurrFunctButton_Click(System::Object^ sender, System::EventArgs^ e) {
		connect(false, 6, (ViBuf)"Func?\n", "func");

	}

		   //Query frequency
	private: System::Void qCurrFreqButton_Click(System::Object^ sender, System::EventArgs^ e) {
		connect(false, 6, (ViBuf)"Freq?\n", "freq");

	}

		   //Query voltage
	private: System::Void qCurrVoltButton_Click(System::Object^ sender, System::EventArgs^ e) {
		connect(false, 9, (ViBuf)"voltage?\n", "volt");

	}

		   //Query burst cycles
	private: System::Void qCurrCycleButton_Click(System::Object^ sender, System::EventArgs^ e) {
		connect(false, 15, (ViBuf)"BURSt:NCYCles?\n", "cyc");

	}

		   //Query output on/off
	private: System::Void outputButton_Click(System::Object^ sender, System::EventArgs^ e) {
		connect(false, 8, (ViBuf)"OUTPUT?\n", "out");

	}

		   //Query burst mode trigger
	private: System::Void burstButton_Click(System::Object^ sender, System::EventArgs^ e) {
		connect(false, 12, (ViBuf)"BURST:MODE?\n", "bm");

	}

		   //Query burst mode status
	private: System::Void qBurstStatButton_Click(System::Object^ sender, System::EventArgs^ e) {
		connect(false, 13, (ViBuf)"BURSt:STATe?\n", "bs");
	}

		   //Query source type command
	private: System::Void qSourceButton_Click(System::Object^ sender, System::EventArgs^ e) {
		connect(false, 16, (ViBuf)"TRIGger:SOURce?\n", "src");
	}

		   //Send voltage change command	
	private: System::Void voltButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (voltTextBox->Text->Length != 0) {
			if (validate("volt")) {

				msclr::interop::marshal_context context;

				std::string command = "VOltage " + context.marshal_as<std::string>(voltTextBox->Text) + "\n";
				char* char_array = strcpy(new char[command.length() + 1], command.c_str());

				connect(true, command.length() + 1, (ViBuf)char_array, " ");
				qCurrVoltButton_Click(sender, e);

			}
			else {
				label1->Text = "Value must be between .01 and 1.5 V";

			}
		}
		else {
			label1->Text = "Please input a value";

		}

	}

		   //Send frequency change command
	private: System::Void freqButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (freqTextBox->Text->Length != 0) {
			if (validate("freq")) {

				msclr::interop::marshal_context context;

				std::string command = "Frequency " + context.marshal_as<std::string>(freqTextBox->Text) + "khz\n";
				char* char_array = strcpy(new char[command.length() + 1], command.c_str());

				connect(true, command.length() + 1, (ViBuf)char_array, " ");
				qCurrFreqButton_Click(sender, e);

			}
			else {
				label1->Text = "Value must be between 0 and 5000 kHZ";

			}
		}
		else {
			label1->Text = "Please input a value";

		}
	}

		   //Send cycle change command
	private: System::Void cycButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (cycTextBox->Text->Length != 0) {
			if (validate("cyc")) {

				msclr::interop::marshal_context context;

				std::string command = "BURSt:NCYCles " + context.marshal_as<std::string>(cycTextBox->Text) + '\n';
				char* char_array = strcpy(new char[command.length() + 1], command.c_str());

				connect(true, command.length() + 1, (ViBuf)char_array, " ");
				qCurrCycleButton_Click(sender, e);

			}
			else {
				label1->Text = "Value must be between 1 and 1,000,000";

			}
		}
		else {
			label1->Text = "Please input a value";

		}

	}

		   //Send function change to sin command
	private: System::Void SINradioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		connect(true, 14, (ViBuf)"FUNC:SHAP SIN\n", " ");
		qCurrFunctButton_Click(sender, e);

	}

		   //Send function change to square command
	private: System::Void SQUradioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		connect(true, 14, (ViBuf)"FUNC:SHAP SQU\n", " ");
		qCurrFunctButton_Click(sender, e);

	}

		   //Send output state to on command
	private: System::Void onRadioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		connect(true, 16, (ViBuf)"OUTPUT:STATE ON\n", " ");
		outputButton_Click(sender, e);

	}

		   //Send output state to off command
	private: System::Void offRadioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		connect(true, 17, (ViBuf)" OUTPUT:STATE OFF\n", " ");
		outputButton_Click(sender, e);

	}

		   //Send burst mode to triggered command
	private: System::Void triggeredRadioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		connect(true, 21, (ViBuf)"BURST:MODE TRIGgered\n", " ");
		burstButton_Click(sender, e);

	}

		   //Send burst mode to gated command
	private: System::Void gatedRadioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		connect(true, 17, (ViBuf)"BURST:MODE GATed\n", " ");
		burstButton_Click(sender, e);

	}

		   //Send external mode command
	private: System::Void externalRadioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		connect(true, 19, (ViBuf)"TRIGger:SOURce EXT\n", " ");
		qSourceButton_Click(sender, e);
	}

		   //Send timed mode command
	private: System::Void timRadioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		connect(true, 19, (ViBuf)"TRIGger:SOURce TIM\n", " ");
		qSourceButton_Click(sender, e);
	}

	private: System::Void onBsRadioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		connect(true, 15, (ViBuf)"BURSt:STATe ON\n", " ");
		qBurstStatButton_Click(sender, e);

	}
	private: System::Void offBsRadioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		connect(true, 16, (ViBuf)"BURSt:STATe OFF\n", " ");
		qBurstStatButton_Click(sender, e);
	}


		   //Load preset list
	private: System::Void loadPrebutton_Click(System::Object^ sender, System::EventArgs^ e) {
		preComboBox->Items->Clear();
		XmlDocument^ doc = gcnew XmlDocument();
		doc->Load(preset_path);

		XmlNodeList^ nodeList;
		XmlNode^ root = doc->DocumentElement;
		nodeList = root->SelectNodes("//profile");

		for each (XmlNode ^ book in nodeList)
		{
			preComboBox->Items->Add(book->Attributes[0]->Value);
		}

		label1->Text = "Completed loading";

	}

		   //Submit current cycle, freq, volt values to AFG
	private: System::Void subPreButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (preComboBox->Text->Length != 0) {
			cycButton_Click(sender, e);
			freqButton_Click(sender, e);
			voltButton_Click(sender, e);
		}
		else {
			label1->Text = "Please input profile";
		}

	}

		   //Add new preset
	private: System::Void addPreButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (preComboBox->Text->Length != 0 && cycTextBox->Text->Length != 0 && freqTextBox->Text->Length != 0 && voltTextBox->Text->Length != 0) {
			if (validate("cyc") && validate("freq") && validate("volt")) {
				if (validate("xml")) {
					XmlDocument^ doc = gcnew XmlDocument();
					doc->Load(preset_path);

					XmlNode^ add_node = doc->CreateNode("element", "profile", "");
					XmlNode^ freq_node = doc->CreateNode("element", "frequency", "");
					XmlNode^ cyc_node = doc->CreateNode("element", "cycle", "");

					XmlNode^ volt_node = doc->CreateNode("element", "voltage", "");


					freq_node->InnerText = freqTextBox->Text;
					cyc_node->InnerText = cycTextBox->Text;
					volt_node->InnerText = voltTextBox->Text;

					((XmlElement^)add_node)->SetAttribute("name", preComboBox->Text);

					add_node->AppendChild(freq_node);
					add_node->AppendChild(cyc_node);
					add_node->AppendChild(volt_node);

					doc->DocumentElement->AppendChild(add_node);

					doc->Save(preset_path);

					label1->Text = "Successfully added preset";

				}
				else {
					label1->Text = "Cannot use existing preset name";
				}

			}
			else {
				label1->Text = "Input values do not fall in range";
			}
		}
		else {
			label1->Text = "Please fill out all neccessary forms (Name, volt, freq, cycle)";
		}

	}

		   //Remove preset
	private: System::Void remButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (preComboBox->Text->Length != 0) {
			if (!validate("xml")) {
				XmlDocument^ doc = gcnew XmlDocument();
				doc->Load(preset_path);
				XmlNodeList^ nodeList;
				XmlNode^ root = doc->DocumentElement;
				nodeList = root->SelectNodes("//profile[@name=\"" + preComboBox->Text + "\"]");
				if (nodeList->Count == 0) {
					label1->Text = "Invalid name";
				}
				else {

					for each (XmlNode ^ node in nodeList) {
						root->RemoveChild(node);


					}
					doc->Save(preset_path);

					label1->Text = "Successfully removed preset";

				}


			}
			else {
				label1->Text = "Cannot use existing preset name";
			}
		}
		else {
			label1->Text = "Please fill out name";

		}
	}

		   //Display current profile values
	private: System::Void preComboBox_TextUpdate(System::Object^ sender, System::EventArgs^ e) {
		if (preComboBox->Text->Length != 0) {
			XmlDocument^ doc = gcnew XmlDocument();
			doc->Load(preset_path);


			XmlNodeList^ nodeList;
			XmlNode^ root = doc->DocumentElement;
			nodeList = root->SelectNodes("//profile[@name=\"" + preComboBox->Text + "\"]");
			if (nodeList->Count == 1) {
				XmlNode^ children = nodeList->Item(0);

				freqTextBox->Text = children["frequency"]->InnerText;
				cycTextBox->Text = children["cycle"]->InnerText;
				voltTextBox->Text = children["voltage"]->InnerText;
			}
			else {
				freqTextBox->Clear();
				cycTextBox->Clear();
				voltTextBox->Clear();

			}
		}
		else {
			freqTextBox->Clear();
			cycTextBox->Clear();
			voltTextBox->Clear();
		}

	}

	};
}
