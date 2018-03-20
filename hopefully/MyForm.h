#pragma once
#include "Controller.h"

namespace hopefully {

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
	
	private: System::Windows::Forms::Panel^  startPagePanel1;
	private: System::Windows::Forms::Panel^  startPagePanel2;
	private: System::Windows::Forms::Panel^  startPagePanel3;
	protected:



	private: System::Windows::Forms::Label^  startMenuLabel;
	private: System::Windows::Forms::PictureBox^  mainMenuLogo;
	

	private: System::Windows::Forms::Button^  startButton;

	protected:
		Controller controller;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Panel^  mainMenuPanel;
	private: System::Windows::Forms::Panel^  addPlayerPanel;
	private: System::Windows::Forms::Button^  addPlayerButton1;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  AddPlayerTextBox;
	private: System::Windows::Forms::Button^  closeAddPlayerDialog;
	private: System::Windows::Forms::Button^  aPDbButton;
	private: System::Windows::Forms::TextBox^  playerNameTextbox;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  errorMessageAddPlayerTextbox;
	private: System::Windows::Forms::Panel^  gameModeScreens;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel7;




	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Label^  playerNameLabel;










	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;


	private: System::Windows::Forms::Button^  generateLargemonButton;

	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Label^  aiNameLabel;



	private: System::Windows::Forms::Label^  largeMonType;

	private: System::Windows::Forms::Label^  largeMonLabel;
	private: System::Windows::Forms::Label^  largeMonDescription;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Panel^  panel9;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Panel^  panel10;
	private: System::Windows::Forms::Panel^  panel11;
	private: System::Windows::Forms::Panel^  panel12;
	private: System::Windows::Forms::Panel^  panel13;
	private: System::Windows::Forms::Panel^  panel14;
	private: System::Windows::Forms::Panel^  panel15;
private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
private: System::Windows::Forms::Panel^  panel16;
private: System::Windows::Forms::Panel^  panel17;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Panel^  panel18;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Panel^  panel19;
private: System::Windows::Forms::Label^  playerLargemonNameLabel;
private: System::Windows::Forms::Panel^  panel20;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Panel^  panel21;
private: System::Windows::Forms::Label^  playerLargemonTypeLabel;
private: System::Windows::Forms::Panel^  panel22;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Panel^  panel23;
private: System::Windows::Forms::Label^  playerLargemonDescLabel;








			 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->startPagePanel1 = (gcnew System::Windows::Forms::Panel());
			this->mainMenuLogo = (gcnew System::Windows::Forms::PictureBox());
			this->startPagePanel2 = (gcnew System::Windows::Forms::Panel());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->startPagePanel3 = (gcnew System::Windows::Forms::Panel());
			this->startMenuLabel = (gcnew System::Windows::Forms::Label());
			this->mainMenuPanel = (gcnew System::Windows::Forms::Panel());
			this->addPlayerPanel = (gcnew System::Windows::Forms::Panel());
			this->AddPlayerTextBox = (gcnew System::Windows::Forms::Panel());
			this->errorMessageAddPlayerTextbox = (gcnew System::Windows::Forms::Label());
			this->playerNameTextbox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->closeAddPlayerDialog = (gcnew System::Windows::Forms::Button());
			this->aPDbButton = (gcnew System::Windows::Forms::Button());
			this->addPlayerButton1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->gameModeScreens = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->playerLargemonNameLabel = (gcnew System::Windows::Forms::Label());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->playerLargemonTypeLabel = (gcnew System::Windows::Forms::Label());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->playerLargemonDescLabel = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->largeMonLabel = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->largeMonType = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->largeMonDescription = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->aiNameLabel = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->playerNameLabel = (gcnew System::Windows::Forms::Label());
			this->generateLargemonButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->startPagePanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mainMenuLogo))->BeginInit();
			this->startPagePanel2->SuspendLayout();
			this->startPagePanel3->SuspendLayout();
			this->mainMenuPanel->SuspendLayout();
			this->addPlayerPanel->SuspendLayout();
			this->AddPlayerTextBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->gameModeScreens->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->panel17->SuspendLayout();
			this->panel18->SuspendLayout();
			this->panel19->SuspendLayout();
			this->panel20->SuspendLayout();
			this->panel21->SuspendLayout();
			this->panel22->SuspendLayout();
			this->panel23->SuspendLayout();
			this->panel5->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// startPagePanel1
			// 
			this->startPagePanel1->BackColor = System::Drawing::Color::Transparent;
			this->startPagePanel1->Controls->Add(this->mainMenuLogo);
			this->startPagePanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->startPagePanel1->Location = System::Drawing::Point(0, 0);
			this->startPagePanel1->Name = L"startPagePanel1";
			this->startPagePanel1->Size = System::Drawing::Size(714, 142);
			this->startPagePanel1->TabIndex = 0;
			// 
			// mainMenuLogo
			// 
			this->mainMenuLogo->BackColor = System::Drawing::Color::Transparent;
			this->mainMenuLogo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mainMenuLogo.BackgroundImage")));
			this->mainMenuLogo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->mainMenuLogo->InitialImage = nullptr;
			this->mainMenuLogo->Location = System::Drawing::Point(101, 3);
			this->mainMenuLogo->Name = L"mainMenuLogo";
			this->mainMenuLogo->Size = System::Drawing::Size(510, 136);
			this->mainMenuLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->mainMenuLogo->TabIndex = 0;
			this->mainMenuLogo->TabStop = false;
			// 
			// startPagePanel2
			// 
			this->startPagePanel2->BackColor = System::Drawing::Color::Transparent;
			this->startPagePanel2->Controls->Add(this->startButton);
			this->startPagePanel2->Location = System::Drawing::Point(3, 145);
			this->startPagePanel2->Name = L"startPagePanel2";
			this->startPagePanel2->Size = System::Drawing::Size(708, 328);
			this->startPagePanel2->TabIndex = 1;
			// 
			// startButton
			// 
			this->startButton->BackColor = System::Drawing::Color::Transparent;
			this->startButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"startButton.BackgroundImage")));
			this->startButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->startButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->startButton->FlatAppearance->BorderSize = 0;
			this->startButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->startButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::SkyBlue;
			this->startButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->startButton->Location = System::Drawing::Point(103, 143);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(510, 42);
			this->startButton->TabIndex = 0;
			this->startButton->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->startButton->UseVisualStyleBackColor = false;
			this->startButton->Click += gcnew System::EventHandler(this, &MyForm::startButton_Click);
			// 
			// startPagePanel3
			// 
			this->startPagePanel3->BackColor = System::Drawing::Color::Transparent;
			this->startPagePanel3->Controls->Add(this->startMenuLabel);
			this->startPagePanel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->startPagePanel3->Location = System::Drawing::Point(0, 479);
			this->startPagePanel3->Name = L"startPagePanel3";
			this->startPagePanel3->Size = System::Drawing::Size(714, 44);
			this->startPagePanel3->TabIndex = 2;
			// 
			// startMenuLabel
			// 
			this->startMenuLabel->AutoSize = true;
			this->startMenuLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->startMenuLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->startMenuLabel->Location = System::Drawing::Point(186, 17);
			this->startMenuLabel->Name = L"startMenuLabel";
			this->startMenuLabel->Size = System::Drawing::Size(334, 17);
			this->startMenuLabel->TabIndex = 0;
			this->startMenuLabel->Text = L"Owned and Developed by Eromosele Okhilua";
			this->startMenuLabel->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// mainMenuPanel
			// 
			this->mainMenuPanel->BackColor = System::Drawing::Color::Transparent;
			this->mainMenuPanel->Controls->Add(this->addPlayerPanel);
			this->mainMenuPanel->Controls->Add(this->startPagePanel1);
			this->mainMenuPanel->Controls->Add(this->startPagePanel3);
			this->mainMenuPanel->Controls->Add(this->startPagePanel2);
			this->mainMenuPanel->Location = System::Drawing::Point(12, 12);
			this->mainMenuPanel->Name = L"mainMenuPanel";
			this->mainMenuPanel->Size = System::Drawing::Size(714, 523);
			this->mainMenuPanel->TabIndex = 3;
			// 
			// addPlayerPanel
			// 
			this->addPlayerPanel->Controls->Add(this->AddPlayerTextBox);
			this->addPlayerPanel->Controls->Add(this->addPlayerButton1);
			this->addPlayerPanel->Controls->Add(this->pictureBox1);
			this->addPlayerPanel->Location = System::Drawing::Point(3, 145);
			this->addPlayerPanel->Name = L"addPlayerPanel";
			this->addPlayerPanel->Size = System::Drawing::Size(708, 328);
			this->addPlayerPanel->TabIndex = 3;
			// 
			// AddPlayerTextBox
			// 
			this->AddPlayerTextBox->BackColor = System::Drawing::Color::Transparent;
			this->AddPlayerTextBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddPlayerTextBox.BackgroundImage")));
			this->AddPlayerTextBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->AddPlayerTextBox->Controls->Add(this->errorMessageAddPlayerTextbox);
			this->AddPlayerTextBox->Controls->Add(this->playerNameTextbox);
			this->AddPlayerTextBox->Controls->Add(this->label1);
			this->AddPlayerTextBox->Controls->Add(this->closeAddPlayerDialog);
			this->AddPlayerTextBox->Controls->Add(this->aPDbButton);
			this->AddPlayerTextBox->ForeColor = System::Drawing::Color::Black;
			this->AddPlayerTextBox->Location = System::Drawing::Point(135, 27);
			this->AddPlayerTextBox->Name = L"AddPlayerTextBox";
			this->AddPlayerTextBox->Size = System::Drawing::Size(473, 254);
			this->AddPlayerTextBox->TabIndex = 2;
			// 
			// errorMessageAddPlayerTextbox
			// 
			this->errorMessageAddPlayerTextbox->AutoSize = true;
			this->errorMessageAddPlayerTextbox->ForeColor = System::Drawing::Color::Red;
			this->errorMessageAddPlayerTextbox->Location = System::Drawing::Point(39, 124);
			this->errorMessageAddPlayerTextbox->Name = L"errorMessageAddPlayerTextbox";
			this->errorMessageAddPlayerTextbox->Size = System::Drawing::Size(0, 13);
			this->errorMessageAddPlayerTextbox->TabIndex = 4;
			// 
			// playerNameTextbox
			// 
			this->playerNameTextbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->playerNameTextbox->Location = System::Drawing::Point(39, 87);
			this->playerNameTextbox->Multiline = true;
			this->playerNameTextbox->Name = L"playerNameTextbox";
			this->playerNameTextbox->Size = System::Drawing::Size(268, 30);
			this->playerNameTextbox->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(38, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Enter Player Name:";
			// 
			// closeAddPlayerDialog
			// 
			this->closeAddPlayerDialog->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closeAddPlayerDialog.BackgroundImage")));
			this->closeAddPlayerDialog->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->closeAddPlayerDialog->FlatAppearance->BorderSize = 0;
			this->closeAddPlayerDialog->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->closeAddPlayerDialog->Location = System::Drawing::Point(405, 29);
			this->closeAddPlayerDialog->Name = L"closeAddPlayerDialog";
			this->closeAddPlayerDialog->Size = System::Drawing::Size(35, 29);
			this->closeAddPlayerDialog->TabIndex = 1;
			this->closeAddPlayerDialog->UseVisualStyleBackColor = true;
			this->closeAddPlayerDialog->Click += gcnew System::EventHandler(this, &MyForm::closeAddPlayerDialog_Click);
			// 
			// aPDbButton
			// 
			this->aPDbButton->FlatAppearance->BorderSize = 0;
			this->aPDbButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Lime;
			this->aPDbButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->aPDbButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->aPDbButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->aPDbButton->ForeColor = System::Drawing::Color::White;
			this->aPDbButton->Location = System::Drawing::Point(315, 181);
			this->aPDbButton->Name = L"aPDbButton";
			this->aPDbButton->Size = System::Drawing::Size(125, 51);
			this->aPDbButton->TabIndex = 0;
			this->aPDbButton->Text = L"create";
			this->aPDbButton->UseVisualStyleBackColor = true;
			this->aPDbButton->Click += gcnew System::EventHandler(this, &MyForm::aPDbButton_Click);
			// 
			// addPlayerButton1
			// 
			this->addPlayerButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->addPlayerButton1->FlatAppearance->BorderSize = 0;
			this->addPlayerButton1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Firebrick;
			this->addPlayerButton1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->addPlayerButton1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addPlayerButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addPlayerButton1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->addPlayerButton1->Location = System::Drawing::Point(36, 254);
			this->addPlayerButton1->Name = L"addPlayerButton1";
			this->addPlayerButton1->Size = System::Drawing::Size(193, 47);
			this->addPlayerButton1->TabIndex = 1;
			this->addPlayerButton1->Text = L"add player";
			this->addPlayerButton1->UseVisualStyleBackColor = true;
			this->addPlayerButton1->Click += gcnew System::EventHandler(this, &MyForm::addPlayerButton1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(36, 43);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(193, 205);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// gameModeScreens
			// 
			this->gameModeScreens->BackColor = System::Drawing::Color::Transparent;
			this->gameModeScreens->Controls->Add(this->panel3);
			this->gameModeScreens->Controls->Add(this->panel2);
			this->gameModeScreens->Controls->Add(this->panel1);
			this->gameModeScreens->Dock = System::Windows::Forms::DockStyle::Fill;
			this->gameModeScreens->Location = System::Drawing::Point(0, 0);
			this->gameModeScreens->Name = L"gameModeScreens";
			this->gameModeScreens->Size = System::Drawing::Size(739, 548);
			this->gameModeScreens->TabIndex = 4;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Controls->Add(this->panel7);
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Controls->Add(this->pictureBox4);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Location = System::Drawing::Point(0, 161);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(739, 384);
			this->panel3->TabIndex = 2;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->tableLayoutPanel2);
			this->panel4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel4->Location = System::Drawing::Point(10, 178);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(350, 200);
			this->panel4->TabIndex = 8;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				37.71429F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				62.28571F)));
			this->tableLayoutPanel2->Controls->Add(this->panel16, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->panel17, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->panel18, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->panel19, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->panel20, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->panel21, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->panel22, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->panel23, 1, 3);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->ForeColor = System::Drawing::Color::Red;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 4;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50.79365F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 49.20635F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 104)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(350, 200);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// panel16
			// 
			this->panel16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel16->Location = System::Drawing::Point(3, 3);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(126, 27);
			this->panel16->TabIndex = 0;
			// 
			// panel17
			// 
			this->panel17->Controls->Add(this->label3);
			this->panel17->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel17->Location = System::Drawing::Point(135, 3);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(212, 27);
			this->panel17->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(143, 18);
			this->label3->TabIndex = 1;
			this->label3->Text = L"LargeMon Profile";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel18
			// 
			this->panel18->Controls->Add(this->label4);
			this->panel18->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel18->Location = System::Drawing::Point(3, 36);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(126, 26);
			this->panel18->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Dock = System::Windows::Forms::DockStyle::Right;
			this->label4->Location = System::Drawing::Point(67, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 18);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Name:";
			// 
			// panel19
			// 
			this->panel19->Controls->Add(this->playerLargemonNameLabel);
			this->panel19->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel19->Location = System::Drawing::Point(135, 36);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(212, 26);
			this->panel19->TabIndex = 3;
			// 
			// playerLargemonNameLabel
			// 
			this->playerLargemonNameLabel->AutoSize = true;
			this->playerLargemonNameLabel->Dock = System::Windows::Forms::DockStyle::Left;
			this->playerLargemonNameLabel->Location = System::Drawing::Point(0, 0);
			this->playerLargemonNameLabel->Name = L"playerLargemonNameLabel";
			this->playerLargemonNameLabel->Size = System::Drawing::Size(48, 18);
			this->playerLargemonNameLabel->TabIndex = 4;
			this->playerLargemonNameLabel->Text = L"none";
			// 
			// panel20
			// 
			this->panel20->Controls->Add(this->label9);
			this->panel20->Location = System::Drawing::Point(3, 68);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(126, 24);
			this->panel20->TabIndex = 4;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Dock = System::Windows::Forms::DockStyle::Right;
			this->label9->Location = System::Drawing::Point(74, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 18);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Type:";
			// 
			// panel21
			// 
			this->panel21->Controls->Add(this->playerLargemonTypeLabel);
			this->panel21->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel21->Location = System::Drawing::Point(135, 68);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(212, 24);
			this->panel21->TabIndex = 5;
			// 
			// playerLargemonTypeLabel
			// 
			this->playerLargemonTypeLabel->AutoSize = true;
			this->playerLargemonTypeLabel->Dock = System::Windows::Forms::DockStyle::Left;
			this->playerLargemonTypeLabel->Location = System::Drawing::Point(0, 0);
			this->playerLargemonTypeLabel->Name = L"playerLargemonTypeLabel";
			this->playerLargemonTypeLabel->Size = System::Drawing::Size(48, 18);
			this->playerLargemonTypeLabel->TabIndex = 5;
			this->playerLargemonTypeLabel->Text = L"none";
			// 
			// panel22
			// 
			this->panel22->Controls->Add(this->label11);
			this->panel22->Location = System::Drawing::Point(3, 98);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(126, 99);
			this->panel22->TabIndex = 6;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Dock = System::Windows::Forms::DockStyle::Right;
			this->label11->Location = System::Drawing::Point(21, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(105, 18);
			this->label11->TabIndex = 7;
			this->label11->Text = L"Description:";
			// 
			// panel23
			// 
			this->panel23->Controls->Add(this->playerLargemonDescLabel);
			this->panel23->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel23->Location = System::Drawing::Point(135, 98);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(212, 99);
			this->panel23->TabIndex = 7;
			// 
			// playerLargemonDescLabel
			// 
			this->playerLargemonDescLabel->AutoSize = true;
			this->playerLargemonDescLabel->Dock = System::Windows::Forms::DockStyle::Left;
			this->playerLargemonDescLabel->Location = System::Drawing::Point(0, 0);
			this->playerLargemonDescLabel->Name = L"playerLargemonDescLabel";
			this->playerLargemonDescLabel->Size = System::Drawing::Size(48, 18);
			this->playerLargemonDescLabel->TabIndex = 8;
			this->playerLargemonDescLabel->Text = L"none";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->tableLayoutPanel1);
			this->panel5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel5->Location = System::Drawing::Point(376, 175);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(350, 200);
			this->panel5->TabIndex = 7;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				37.71429F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				62.28571F)));
			this->tableLayoutPanel1->Controls->Add(this->panel8, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->panel9, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->panel10, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->panel11, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->panel12, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->panel13, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->panel14, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->panel15, 1, 3);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->ForeColor = System::Drawing::Color::Red;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50.79365F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 49.20635F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 104)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(350, 200);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// panel8
			// 
			this->panel8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel8->Location = System::Drawing::Point(3, 3);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(126, 27);
			this->panel8->TabIndex = 0;
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->label7);
			this->panel9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel9->Location = System::Drawing::Point(135, 3);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(212, 27);
			this->panel9->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label7->Location = System::Drawing::Point(0, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(143, 18);
			this->label7->TabIndex = 1;
			this->label7->Text = L"LargeMon Profile";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->label13);
			this->panel10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel10->Location = System::Drawing::Point(3, 36);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(126, 26);
			this->panel10->TabIndex = 2;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Dock = System::Windows::Forms::DockStyle::Right;
			this->label13->Location = System::Drawing::Point(67, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(59, 18);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Name:";
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->largeMonLabel);
			this->panel11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel11->Location = System::Drawing::Point(135, 36);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(212, 26);
			this->panel11->TabIndex = 3;
			// 
			// largeMonLabel
			// 
			this->largeMonLabel->AutoSize = true;
			this->largeMonLabel->Dock = System::Windows::Forms::DockStyle::Left;
			this->largeMonLabel->Location = System::Drawing::Point(0, 0);
			this->largeMonLabel->Name = L"largeMonLabel";
			this->largeMonLabel->Size = System::Drawing::Size(48, 18);
			this->largeMonLabel->TabIndex = 4;
			this->largeMonLabel->Text = L"none";
			// 
			// panel12
			// 
			this->panel12->Controls->Add(this->label14);
			this->panel12->Location = System::Drawing::Point(3, 68);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(126, 24);
			this->panel12->TabIndex = 4;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Dock = System::Windows::Forms::DockStyle::Right;
			this->label14->Location = System::Drawing::Point(74, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(52, 18);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Type:";
			// 
			// panel13
			// 
			this->panel13->Controls->Add(this->largeMonType);
			this->panel13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel13->Location = System::Drawing::Point(135, 68);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(212, 24);
			this->panel13->TabIndex = 5;
			// 
			// largeMonType
			// 
			this->largeMonType->AutoSize = true;
			this->largeMonType->Dock = System::Windows::Forms::DockStyle::Left;
			this->largeMonType->Location = System::Drawing::Point(0, 0);
			this->largeMonType->Name = L"largeMonType";
			this->largeMonType->Size = System::Drawing::Size(48, 18);
			this->largeMonType->TabIndex = 5;
			this->largeMonType->Text = L"none";
			// 
			// panel14
			// 
			this->panel14->Controls->Add(this->label6);
			this->panel14->Location = System::Drawing::Point(3, 98);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(126, 99);
			this->panel14->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Dock = System::Windows::Forms::DockStyle::Right;
			this->label6->Location = System::Drawing::Point(21, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(105, 18);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Description:";
			// 
			// panel15
			// 
			this->panel15->Controls->Add(this->largeMonDescription);
			this->panel15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel15->Location = System::Drawing::Point(135, 98);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(212, 99);
			this->panel15->TabIndex = 7;
			// 
			// largeMonDescription
			// 
			this->largeMonDescription->AutoSize = true;
			this->largeMonDescription->Dock = System::Windows::Forms::DockStyle::Left;
			this->largeMonDescription->Location = System::Drawing::Point(0, 0);
			this->largeMonDescription->Name = L"largeMonDescription";
			this->largeMonDescription->Size = System::Drawing::Size(48, 18);
			this->largeMonDescription->TabIndex = 8;
			this->largeMonDescription->Text = L"none";
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->aiNameLabel);
			this->panel7->Location = System::Drawing::Point(378, 17);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(196, 152);
			this->panel7->TabIndex = 6;
			// 
			// aiNameLabel
			// 
			this->aiNameLabel->AutoSize = true;
			this->aiNameLabel->Dock = System::Windows::Forms::DockStyle::Right;
			this->aiNameLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->aiNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->aiNameLabel->Location = System::Drawing::Point(111, 0);
			this->aiNameLabel->Name = L"aiNameLabel";
			this->aiNameLabel->Size = System::Drawing::Size(85, 16);
			this->aiNameLabel->TabIndex = 2;
			this->aiNameLabel->Text = L"USERNAME";
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->playerNameLabel);
			this->panel6->Controls->Add(this->generateLargemonButton);
			this->panel6->Location = System::Drawing::Point(164, 16);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(196, 152);
			this->panel6->TabIndex = 5;
			// 
			// playerNameLabel
			// 
			this->playerNameLabel->AutoEllipsis = true;
			this->playerNameLabel->AutoSize = true;
			this->playerNameLabel->Dock = System::Windows::Forms::DockStyle::Left;
			this->playerNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->playerNameLabel->Location = System::Drawing::Point(0, 0);
			this->playerNameLabel->Name = L"playerNameLabel";
			this->playerNameLabel->Size = System::Drawing::Size(85, 16);
			this->playerNameLabel->TabIndex = 1;
			this->playerNameLabel->Text = L"USERNAME";
			// 
			// generateLargemonButton
			// 
			this->generateLargemonButton->BackColor = System::Drawing::Color::Red;
			this->generateLargemonButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->generateLargemonButton->FlatAppearance->BorderSize = 0;
			this->generateLargemonButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->generateLargemonButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->generateLargemonButton->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->generateLargemonButton->Location = System::Drawing::Point(13, 88);
			this->generateLargemonButton->Name = L"generateLargemonButton";
			this->generateLargemonButton->Size = System::Drawing::Size(135, 56);
			this->generateLargemonButton->TabIndex = 2;
			this->generateLargemonButton->Text = L"Generate Largemon";
			this->generateLargemonButton->UseVisualStyleBackColor = false;
			this->generateLargemonButton->Click += gcnew System::EventHandler(this, &MyForm::generateLargemonButton_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox4->Location = System::Drawing::Point(580, 16);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(147, 152);
			this->pictureBox4->TabIndex = 1;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(10, 16);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(147, 152);
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(0, 75);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(739, 88);
			this->panel2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Yellow;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(118, 27);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(233, 47);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Exhibition Match";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Yellow;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(421, 27);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(207, 47);
			this->button2->TabIndex = 3;
			this->button2->Text = L"King Of Kings";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(267, 4);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Select A Game Mode";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Location = System::Drawing::Point(0, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(738, 73);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(209, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(334, 72);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(739, 548);
			this->Controls->Add(this->gameModeScreens);
			this->Controls->Add(this->mainMenuPanel);
			this->DoubleBuffered = true;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Largemon Battle Royale";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->startPagePanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mainMenuLogo))->EndInit();
			this->startPagePanel2->ResumeLayout(false);
			this->startPagePanel3->ResumeLayout(false);
			this->startPagePanel3->PerformLayout();
			this->mainMenuPanel->ResumeLayout(false);
			this->addPlayerPanel->ResumeLayout(false);
			this->AddPlayerTextBox->ResumeLayout(false);
			this->AddPlayerTextBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->gameModeScreens->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			this->panel21->ResumeLayout(false);
			this->panel21->PerformLayout();
			this->panel22->ResumeLayout(false);
			this->panel22->PerformLayout();
			this->panel23->ResumeLayout(false);
			this->panel23->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion		

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}
	private: System::Void startButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->startPagePanel2->Hide();
		this->addPlayerPanel->Show();
	}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	this->mainMenuPanel->Show();
	this->startPagePanel2->Show();
	this->addPlayerPanel->Hide();
	this->AddPlayerTextBox->Hide();
	this->gameModeScreens->Hide();

}
private: System::Void addPlayerButton1_Click(System::Object^  sender, System::EventArgs^  e) {	
	if (this->addPlayerButton1->Text == L"add player")
	{
		this->AddPlayerTextBox->Show();
		this->pictureBox1->Hide();
		this->addPlayerButton1->Hide();
	}
	else if (this->addPlayerButton1->Text == L"Start Game")
	{
		this->mainMenuPanel->Hide();
		this->gameModeScreens->Show();
		this->playerNameLabel->Text = this->playerNameTextbox->Text;
		this->aiNameLabel->Text = L"COM";
	}
	
	
}
private: System::Void closeAddPlayerDialog_Click(System::Object^  sender, System::EventArgs^  e) {
	this->pictureBox1->Show();
	this->addPlayerPanel->Show();
	this->AddPlayerTextBox->Hide();
	this->addPlayerButton1->Show();
}
private: System::Void aPDbButton_Click(System::Object^  sender, System::EventArgs^  e) {
	//if user put in a name
	if (this->playerNameTextbox->Text->IsNullOrWhiteSpace(this->playerNameTextbox->Text))
	{
		this->errorMessageAddPlayerTextbox->Text = L"You have to input something, don't you want to battle anymore";
		
	}
	else {
		controller.player->setName(this->playerNameTextbox->Text);
		this->pictureBox1->Show();
		this->addPlayerButton1->Show();
		this->AddPlayerTextBox->Hide();
		this->addPlayerButton1->Text = L"Start Game";

	}	
}

private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void generateLargemonButton_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
