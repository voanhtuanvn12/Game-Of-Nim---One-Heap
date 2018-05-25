#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include <vector>
//using namespace std;
#define HUMAN 1
#define COMPUTER 0
int whose = 0, n , _num;


struct myPoint
{
	int x, y;
	int r;
};

namespace BaiTap02 {

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
		bool flag1, flag2;
	private: System::Windows::Forms::Label^  lbHuman;

	private: System::Windows::Forms::Label^  lbComputer;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txbStatus;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  lbResult;
	private: System::Windows::Forms::TextBox^  txbHumanChoose;
	private: System::Windows::Forms::Label^  lbChoose;
	private: System::Windows::Forms::Label^  lbBotStatus;
			 array<System::Windows::Forms::PictureBox^>^ asteroids;
	public:
		MyForm(void)
		{
			flag1 = flag2 = false;
			srand(time(NULL));
			InitializeComponent();
			int xx = 3;
			int yy = 3;
			asteroids = gcnew array<System::Windows::Forms::PictureBox^>(77);
			for (int i = 0; i < 77; i++) {
				asteroids[i] = gcnew System::Windows::Forms::PictureBox();
				asteroids[i]->BackColor = System::Drawing::Color::Transparent;
				asteroids[i]->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
				asteroids[i]->Image = Image::FromFile(L"object.png");//(cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
				asteroids[i]->Location = System::Drawing::Point(xx, yy);
				//this->pictureBox16->Name = L"pictureBox16";
				asteroids[i]->Size = System::Drawing::Size(30, 30);
				asteroids[i]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				//this->pictureBox16->TabIndex = 15;
				asteroids[i]->TabStop = false;
				asteroids[i]->Visible = false;
				xx += 36;
				if (xx > 363) {
					xx = 3;
					yy += 36;
				}
				this->panel1->Controls->Add(asteroids[i]);
			}
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
	private: System::Windows::Forms::Button^  btnRandomPlayer;
	private: System::Windows::Forms::Label^  lbStatus;
	private: System::Windows::Forms::Button^  btnRandomObjects;
	private: System::Windows::Forms::Label^  lbStatusObject;
	private: System::Windows::Forms::Button^  btnPlay;
	private: System::Windows::Forms::Button^  btnReset;

	private: System::Windows::Forms::Button^  btnGo;
	private: System::Windows::Forms::Panel^  panel1;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnRandomPlayer = (gcnew System::Windows::Forms::Button());
			this->lbStatus = (gcnew System::Windows::Forms::Label());
			this->btnRandomObjects = (gcnew System::Windows::Forms::Button());
			this->lbStatusObject = (gcnew System::Windows::Forms::Label());
			this->btnPlay = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnGo = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbHuman = (gcnew System::Windows::Forms::Label());
			this->lbComputer = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txbStatus = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->lbResult = (gcnew System::Windows::Forms::Label());
			this->txbHumanChoose = (gcnew System::Windows::Forms::TextBox());
			this->lbChoose = (gcnew System::Windows::Forms::Label());
			this->lbBotStatus = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// btnRandomPlayer
			// 
			this->btnRandomPlayer->Location = System::Drawing::Point(12, 12);
			this->btnRandomPlayer->Name = L"btnRandomPlayer";
			this->btnRandomPlayer->Size = System::Drawing::Size(160, 23);
			this->btnRandomPlayer->TabIndex = 0;
			this->btnRandomPlayer->Text = L"Random Player";
			this->btnRandomPlayer->UseVisualStyleBackColor = true;
			this->btnRandomPlayer->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// lbStatus
			// 
			this->lbStatus->AutoSize = true;
			this->lbStatus->Location = System::Drawing::Point(178, 17);
			this->lbStatus->Name = L"lbStatus";
			this->lbStatus->Size = System::Drawing::Size(87, 13);
			this->lbStatus->TabIndex = 1;
			this->lbStatus->Text = L"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"";
			// 
			// btnRandomObjects
			// 
			this->btnRandomObjects->Location = System::Drawing::Point(12, 44);
			this->btnRandomObjects->Name = L"btnRandomObjects";
			this->btnRandomObjects->Size = System::Drawing::Size(159, 23);
			this->btnRandomObjects->TabIndex = 2;
			this->btnRandomObjects->Text = L"Random Objects";
			this->btnRandomObjects->UseVisualStyleBackColor = true;
			this->btnRandomObjects->Click += gcnew System::EventHandler(this, &MyForm::btnRandomObjects_Click);
			// 
			// lbStatusObject
			// 
			this->lbStatusObject->AutoSize = true;
			this->lbStatusObject->Location = System::Drawing::Point(178, 49);
			this->lbStatusObject->Name = L"lbStatusObject";
			this->lbStatusObject->Size = System::Drawing::Size(87, 13);
			this->lbStatusObject->TabIndex = 3;
			this->lbStatusObject->Text = L"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"";
			// 
			// btnPlay
			// 
			this->btnPlay->Location = System::Drawing::Point(14, 77);
			this->btnPlay->Name = L"btnPlay";
			this->btnPlay->Size = System::Drawing::Size(156, 25);
			this->btnPlay->TabIndex = 4;
			this->btnPlay->Text = L"Play";
			this->btnPlay->UseVisualStyleBackColor = true;
			this->btnPlay->Visible = false;
			this->btnPlay->Click += gcnew System::EventHandler(this, &MyForm::btnPlay_Click);
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(634, 11);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(87, 24);
			this->btnReset->TabIndex = 5;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// btnGo
			// 
			this->btnGo->Location = System::Drawing::Point(41, 301);
			this->btnGo->Name = L"btnGo";
			this->btnGo->Size = System::Drawing::Size(100, 26);
			this->btnGo->TabIndex = 7;
			this->btnGo->Text = L"Go";
			this->btnGo->UseVisualStyleBackColor = true;
			this->btnGo->Click += gcnew System::EventHandler(this, &MyForm::btnGo_Click);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(181, 103);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(397, 251);
			this->panel1->TabIndex = 8;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// lbHuman
			// 
			this->lbHuman->AutoSize = true;
			this->lbHuman->Location = System::Drawing::Point(12, 216);
			this->lbHuman->Name = L"lbHuman";
			this->lbHuman->Size = System::Drawing::Size(69, 13);
			this->lbHuman->TabIndex = 9;
			this->lbHuman->Text = L"Nhập số sỏi :";
			// 
			// lbComputer
			// 
			this->lbComputer->AutoSize = true;
			this->lbComputer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbComputer->Location = System::Drawing::Point(635, 200);
			this->lbComputer->Name = L"lbComputer";
			this->lbComputer->Size = System::Drawing::Size(60, 13);
			this->lbComputer->TabIndex = 10;
			this->lbComputer->Text = L"I am BOT";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(178, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 11;
			// 
			// txbStatus
			// 
			this->txbStatus->Location = System::Drawing::Point(181, 77);
			this->txbStatus->Name = L"txbStatus";
			this->txbStatus->ReadOnly = true;
			this->txbStatus->Size = System::Drawing::Size(397, 20);
			this->txbStatus->TabIndex = 12;
			this->txbStatus->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(41, 103);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 100);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(616, 101);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(96, 96);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			// 
			// lbResult
			// 
			this->lbResult->BackColor = System::Drawing::Color::Transparent;
			this->lbResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbResult->ForeColor = System::Drawing::Color::Maroon;
			this->lbResult->Location = System::Drawing::Point(322, 12);
			this->lbResult->Name = L"lbResult";
			this->lbResult->Size = System::Drawing::Size(193, 50);
			this->lbResult->TabIndex = 15;
			this->lbResult->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txbHumanChoose
			// 
			this->txbHumanChoose->Location = System::Drawing::Point(12, 241);
			this->txbHumanChoose->Name = L"txbHumanChoose";
			this->txbHumanChoose->Size = System::Drawing::Size(154, 20);
			this->txbHumanChoose->TabIndex = 16;
			// 
			// lbChoose
			// 
			this->lbChoose->Location = System::Drawing::Point(12, 272);
			this->lbChoose->Name = L"lbChoose";
			this->lbChoose->Size = System::Drawing::Size(153, 26);
			this->lbChoose->TabIndex = 17;
			// 
			// lbBotStatus
			// 
			this->lbBotStatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbBotStatus->ForeColor = System::Drawing::Color::Red;
			this->lbBotStatus->Location = System::Drawing::Point(616, 229);
			this->lbBotStatus->Name = L"lbBotStatus";
			this->lbBotStatus->Size = System::Drawing::Size(96, 32);
			this->lbBotStatus->TabIndex = 18;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(733, 366);
			this->Controls->Add(this->lbBotStatus);
			this->Controls->Add(this->lbChoose);
			this->Controls->Add(this->txbHumanChoose);
			this->Controls->Add(this->lbResult);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->txbStatus);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbComputer);
			this->Controls->Add(this->lbHuman);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btnGo);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnPlay);
			this->Controls->Add(this->lbStatusObject);
			this->Controls->Add(this->btnRandomObjects);
			this->Controls->Add(this->lbStatus);
			this->Controls->Add(this->btnRandomPlayer);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Nim Game";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		whose = rand() % 2;
		if (whose == COMPUTER) {
			lbStatus->Text = "First player is COMPUTER\n";
		}
		else {
			lbStatus->Text = "First player is HUMAN\n";
		}
		flag1 = true;
		if (flag1 && flag2) {
			btnPlay->Visible = true;
		}
	}
	private: System::Void btnRandomObjects_Click(System::Object^  sender, System::EventArgs^  e) {
		for (int i = 0; i < 77; i++) {
			asteroids[i]->Visible = false;
		}
		n = rand() % 78;
		String^ temp("Number of object is ");
		temp = temp + n.ToString();
		lbStatusObject->Text = temp;
		flag2 = true;
		if (flag1 && flag2) {
			btnPlay->Visible = true;
		}
		for (int i = 0; i < n; i++) {
			asteroids[i]->Visible = true;
		}
		_num = n;
	}

private: System::Void btnPlay_Click(System::Object^  sender, System::EventArgs^  e) {
	btnPlay->Visible = true;
	btnRandomObjects->Enabled = false;
	btnRandomPlayer->Enabled = false;
	if (whose == HUMAN) {
		String^ s(L"Bạn đi trước");
		txbStatus->Text = s;
		txbHumanChoose->Enabled = true;
		btnGo->Enabled = true;
		if (Check())
			return;
	}
	else {
		String^ s(L"Máy đi trước");
		txbStatus->Text = s;
		if (Check()) {
			return;
		}
		txbStatus->Text = s;
		txbHumanChoose->Enabled = false;
		btnGo->Enabled = false;
		System::Threading::Thread::Sleep(1000);
		int x = CalculateTurn();
		for (int i = x; i > 0; i--) {
			asteroids[n - i]->Visible = false;
		}
		n = n - x;
		String^ s2(L"Máy lấy ");
		s2 = s2 + x.ToString();
		s2 = s2 + L" viên sỏi. còn lại ";
		s2 = s2 + n.ToString();
		s2 = s2 + L" .Đến lượt bạn";
		txbStatus->Text = s2;
		whose = HUMAN;
		txbHumanChoose->Enabled = true;
		btnGo->Enabled = true;
	}
}
private: void ComTurn() {
	txbHumanChoose->Enabled = false;
	btnGo->Enabled = false;
	System::Threading::Thread::Sleep(1000);
	int x = CalculateTurn();
	for (int i = x; i > 0; i--) {
		asteroids[n - i]->Visible = false;
	}
	n = n - x;
	String^ s2(L"Máy lấy ");
	s2 = s2 + x.ToString();
	s2 = s2 + L" viên sỏi. còn lại ";
	s2 = s2 + n.ToString();
	if (Check()) {
		txbStatus->Text = s2;
		return;
	}
	s2 = s2 + L" .Đến lượt bạn";
	txbStatus->Text = s2;
	whose = HUMAN;
	txbHumanChoose->Enabled = true;
	btnGo->Enabled = true;
}

private:bool Check() {
	if (n == 0) {
		if (whose == COMPUTER) {
			String^ s = L"MÁY THẮNG";
			lbBotStatus->Text = L"Ahihi NGUVL :v";
			lbResult->Text = s;
		}
		else {
			String^s = L"BẠN THẮNG";
			lbResult->Text = s;
		}
		return true;
	}
	return false;
}

private:int CalculateTurn() {
	if (n > 8) {
		if (n % 4) {
			int x = n % 4;
			return x;
		}
		else
			return rand() % 3 + 1;
	}
	if (n == 8 || n == 4) {
		return rand() % 3 + 1;
	}
	if (n >= 5 && n <= 7) {
		return n - 4;
	}
	if (n <= 3) {
		return n;
	}
}

private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	txbStatus->Text = "";
	lbBotStatus->Text = "";
	lbResult->Text = "";
	txbHumanChoose->Text = "";

	btnRandomObjects->Enabled = true;
	btnRandomPlayer->Enabled = true;
	for (int i = 0; i < 77; i++) {
		asteroids[i]->Visible = false;
	}
	btnPlay->Visible = false;
	flag1 = flag2 = false;
	lbStatusObject->Text = "";
	lbStatus->Text = "";
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void btnGo_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ x = txbHumanChoose->Text;
	int val;
	if (convertInt(x,val) == false) {
		lbChoose->Text = L"Nhập sai, nhập lại";
	}
	else {
		if (val > n) {
			lbChoose->Text = L"Nhập sai, nhập lại";
		}
		else {
			lbChoose->Text = "OK";
			String^ s2(L"Bạn lấy ");
			s2 = s2 + val.ToString();
			s2 = s2 + L" viên sỏi. còn lại ";
			s2 = s2 + n.ToString();
			for (int i = val; i > 0; i--) {
				asteroids[n - i]->Visible = false;
			}
			n -= val;
			if (Check()) {
				txbStatus->Text = s2;
				return;
			}
			s2 = s2 + L" .Đến lượt máy";
			
			
			txbStatus->Text = s2;
			whose = COMPUTER;
			ComTurn();
		}
	}
}
private: bool convertInt(String^ str, int &value) {
	int len = str->Length;
	if (len == 0)
		return false;
	value = 0;
	for (int i = len - 1; i >= 0;i--) {
		if (str[i] <'0' || str[i]>'3') {
			return false;
		}
		value = value * 10 + str[i] - '0';
	}
	return true;
}

};
}
