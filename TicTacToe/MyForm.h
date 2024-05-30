#pragma once

namespace TicTacToe {

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

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btnTic3;


	private: System::Windows::Forms::Button^ btnTic2;

	private: System::Windows::Forms::Button^ btnTic1;

	private: System::Windows::Forms::Panel^ panel6;


	private: System::Windows::Forms::Button^ btnTic9;

	private: System::Windows::Forms::Button^ btnTic8;

	private: System::Windows::Forms::Button^ btnTic7;

	private: System::Windows::Forms::Button^ btnTic6;









	private: System::Windows::Forms::Button^ btnTic5;

	private: System::Windows::Forms::Button^ btnTic4;
	private: System::Windows::Forms::Button^ btnNewGame;

	private: System::Windows::Forms::Button^ btnReset;







	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ lblPlayerO;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblPlayerX;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label6;






	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnTic9 = (gcnew System::Windows::Forms::Button());
			this->btnTic8 = (gcnew System::Windows::Forms::Button());
			this->btnTic7 = (gcnew System::Windows::Forms::Button());
			this->btnTic6 = (gcnew System::Windows::Forms::Button());
			this->btnTic5 = (gcnew System::Windows::Forms::Button());
			this->btnTic4 = (gcnew System::Windows::Forms::Button());
			this->btnTic3 = (gcnew System::Windows::Forms::Button());
			this->btnTic2 = (gcnew System::Windows::Forms::Button());
			this->btnTic1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->lblPlayerO = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblPlayerX = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->btnNewGame = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->btnTic9);
			this->panel2->Controls->Add(this->btnTic8);
			this->panel2->Controls->Add(this->btnTic7);
			this->panel2->Controls->Add(this->btnTic6);
			this->panel2->Controls->Add(this->btnTic5);
			this->panel2->Controls->Add(this->btnTic4);
			this->panel2->Controls->Add(this->btnTic3);
			this->panel2->Controls->Add(this->btnTic2);
			this->panel2->Controls->Add(this->btnTic1);
			this->panel2->Location = System::Drawing::Point(12, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(432, 394);
			this->panel2->TabIndex = 1;
			// 
			// btnTic9
			// 
			this->btnTic9->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic9->Location = System::Drawing::Point(285, 260);
			this->btnTic9->Name = L"btnTic9";
			this->btnTic9->Size = System::Drawing::Size(137, 127);
			this->btnTic9->TabIndex = 8;
			this->btnTic9->Text = L"\r\n";
			this->btnTic9->UseVisualStyleBackColor = false;
			this->btnTic9->Click += gcnew System::EventHandler(this, &MyForm::btnTic9_Click);
			// 
			// btnTic8
			// 
			this->btnTic8->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic8->Location = System::Drawing::Point(144, 260);
			this->btnTic8->Name = L"btnTic8";
			this->btnTic8->Size = System::Drawing::Size(137, 127);
			this->btnTic8->TabIndex = 7;
			this->btnTic8->Text = L"\r\n";
			this->btnTic8->UseVisualStyleBackColor = false;
			this->btnTic8->Click += gcnew System::EventHandler(this, &MyForm::btnTic8_Click);
			// 
			// btnTic7
			// 
			this->btnTic7->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic7->Location = System::Drawing::Point(3, 260);
			this->btnTic7->Name = L"btnTic7";
			this->btnTic7->Size = System::Drawing::Size(137, 127);
			this->btnTic7->TabIndex = 6;
			this->btnTic7->Text = L"\r\n";
			this->btnTic7->UseVisualStyleBackColor = false;
			this->btnTic7->Click += gcnew System::EventHandler(this, &MyForm::btnTic7_Click);
			// 
			// btnTic6
			// 
			this->btnTic6->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic6->Location = System::Drawing::Point(285, 132);
			this->btnTic6->Name = L"btnTic6";
			this->btnTic6->Size = System::Drawing::Size(137, 127);
			this->btnTic6->TabIndex = 5;
			this->btnTic6->Text = L"\r\n";
			this->btnTic6->UseVisualStyleBackColor = false;
			this->btnTic6->Click += gcnew System::EventHandler(this, &MyForm::btnTic6_Click);
			// 
			// btnTic5
			// 
			this->btnTic5->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic5->Location = System::Drawing::Point(144, 132);
			this->btnTic5->Name = L"btnTic5";
			this->btnTic5->Size = System::Drawing::Size(137, 127);
			this->btnTic5->TabIndex = 4;
			this->btnTic5->Text = L"\r\n";
			this->btnTic5->UseVisualStyleBackColor = false;
			this->btnTic5->Click += gcnew System::EventHandler(this, &MyForm::btnTic5_Click);
			// 
			// btnTic4
			// 
			this->btnTic4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic4->Location = System::Drawing::Point(3, 132);
			this->btnTic4->Name = L"btnTic4";
			this->btnTic4->Size = System::Drawing::Size(137, 127);
			this->btnTic4->TabIndex = 3;
			this->btnTic4->Text = L"\r\n";
			this->btnTic4->UseVisualStyleBackColor = false;
			this->btnTic4->Click += gcnew System::EventHandler(this, &MyForm::btnTic4_Click);
			// 
			// btnTic3
			// 
			this->btnTic3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic3->Location = System::Drawing::Point(285, 3);
			this->btnTic3->Name = L"btnTic3";
			this->btnTic3->Size = System::Drawing::Size(137, 127);
			this->btnTic3->TabIndex = 2;
			this->btnTic3->Text = L"\r\n";
			this->btnTic3->UseVisualStyleBackColor = false;
			this->btnTic3->Click += gcnew System::EventHandler(this, &MyForm::btnTic3_Click);
			// 
			// btnTic2
			// 
			this->btnTic2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic2->Location = System::Drawing::Point(144, 3);
			this->btnTic2->Name = L"btnTic2";
			this->btnTic2->Size = System::Drawing::Size(137, 127);
			this->btnTic2->TabIndex = 1;
			this->btnTic2->Text = L"\r\n";
			this->btnTic2->UseVisualStyleBackColor = false;
			this->btnTic2->Click += gcnew System::EventHandler(this, &MyForm::btnTic2_Click);
			// 
			// btnTic1
			// 
			this->btnTic1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic1->Location = System::Drawing::Point(3, 3);
			this->btnTic1->Name = L"btnTic1";
			this->btnTic1->Size = System::Drawing::Size(137, 127);
			this->btnTic1->TabIndex = 0;
			this->btnTic1->Text = L"\r\n";
			this->btnTic1->UseVisualStyleBackColor = false;
			this->btnTic1->Click += gcnew System::EventHandler(this, &MyForm::btnTic1_Click);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Location = System::Drawing::Point(477, 10);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(271, 391);
			this->panel3->TabIndex = 2;
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->panel7);
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Location = System::Drawing::Point(12, 12);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(243, 208);
			this->panel4->TabIndex = 4;
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel7->Controls->Add(this->lblPlayerO);
			this->panel7->Controls->Add(this->label2);
			this->panel7->Controls->Add(this->lblPlayerX);
			this->panel7->Controls->Add(this->label1);
			this->panel7->Location = System::Drawing::Point(12, 80);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(213, 116);
			this->panel7->TabIndex = 6;
			// 
			// lblPlayerO
			// 
			this->lblPlayerO->BackColor = System::Drawing::Color::White;
			this->lblPlayerO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblPlayerO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPlayerO->Location = System::Drawing::Point(135, 65);
			this->lblPlayerO->Name = L"lblPlayerO";
			this->lblPlayerO->Size = System::Drawing::Size(57, 33);
			this->lblPlayerO->TabIndex = 1;
			this->lblPlayerO->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(11, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Player O :";
			// 
			// lblPlayerX
			// 
			this->lblPlayerX->BackColor = System::Drawing::Color::White;
			this->lblPlayerX->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblPlayerX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPlayerX->Location = System::Drawing::Point(135, 17);
			this->lblPlayerX->Name = L"lblPlayerX";
			this->lblPlayerX->Size = System::Drawing::Size(57, 32);
			this->lblPlayerX->TabIndex = 1;
			this->lblPlayerX->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Player X :";
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->label6);
			this->panel5->Location = System::Drawing::Point(30, 20);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(176, 42);
			this->panel5->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(0, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(174, 37);
			this->label6->TabIndex = 1;
			this->label6->Text = L" Scoreboard";
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Controls->Add(this->btnNewGame);
			this->panel6->Controls->Add(this->btnReset);
			this->panel6->Location = System::Drawing::Point(12, 237);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(243, 129);
			this->panel6->TabIndex = 3;
			// 
			// btnNewGame
			// 
			this->btnNewGame->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnNewGame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNewGame->Location = System::Drawing::Point(12, 67);
			this->btnNewGame->Name = L"btnNewGame";
			this->btnNewGame->Size = System::Drawing::Size(213, 45);
			this->btnNewGame->TabIndex = 5;
			this->btnNewGame->Text = L"New Game";
			this->btnNewGame->UseVisualStyleBackColor = false;
			this->btnNewGame->Click += gcnew System::EventHandler(this, &MyForm::btnNewGame_Click);
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->Location = System::Drawing::Point(12, 13);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(213, 48);
			this->btnReset->TabIndex = 4;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(763, 418);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Tic Tac Toe";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->ResumeLayout(false);

		}
		Boolean checker;
		int plusone;

#pragma endregion

		void Enable_False()
		{
			btnTic1->Enabled = false;
			btnTic2->Enabled = false;
			btnTic3->Enabled = false;
			btnTic4->Enabled = false;
			btnTic5->Enabled = false;
			btnTic6->Enabled = false;
			btnTic7->Enabled = false;
			btnTic8->Enabled = false;
			btnTic9->Enabled = false;
		}

		void score()
		{

			if (btnTic1->Text == "X" && btnTic2->Text == "X" && btnTic3->Text == "X")
			{
				btnTic1->BackColor = System::Drawing::Color::PowderBlue;
				btnTic2->BackColor = System::Drawing::Color::PowderBlue;
				btnTic3->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X" , "Tic Tac Toe" , MessageBoxButtons::OK , MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			} 

			if (btnTic4->Text == "X" && btnTic5->Text == "X" && btnTic6->Text == "X")
			{
				btnTic4->BackColor = System::Drawing::Color::PowderBlue;
				btnTic5->BackColor = System::Drawing::Color::PowderBlue;
				btnTic6->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic7->Text == "X" && btnTic8->Text == "X" && btnTic9->Text == "X")
			{
				btnTic7->BackColor = System::Drawing::Color::PowderBlue;
				btnTic8->BackColor = System::Drawing::Color::PowderBlue;
				btnTic9->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}


			if (btnTic1->Text == "X" && btnTic4->Text == "X" && btnTic7->Text == "X")
			{
				btnTic1->BackColor = System::Drawing::Color::PowderBlue;
				btnTic4->BackColor = System::Drawing::Color::PowderBlue;
				btnTic7->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic2->Text == "X" && btnTic5->Text == "X" && btnTic8->Text == "X")
			{
				btnTic2->BackColor = System::Drawing::Color::PowderBlue;
				btnTic5->BackColor = System::Drawing::Color::PowderBlue;
				btnTic8->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic3->Text == "X" && btnTic6->Text == "X" && btnTic9->Text == "X")
			{
				btnTic3->BackColor = System::Drawing::Color::PowderBlue;
				btnTic6->BackColor = System::Drawing::Color::PowderBlue;
				btnTic9->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}


			if (btnTic1->Text == "X" && btnTic5->Text == "X" && btnTic9->Text == "X")
			{
				btnTic1->BackColor = System::Drawing::Color::PowderBlue;
				btnTic5->BackColor = System::Drawing::Color::PowderBlue;
				btnTic9->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic3->Text == "X" && btnTic5->Text == "X" && btnTic7->Text == "X")
			{
				btnTic3->BackColor = System::Drawing::Color::PowderBlue;
				btnTic5->BackColor = System::Drawing::Color::PowderBlue;
				btnTic7->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}




			//*************************************************************************************************************************************

			if (btnTic1->Text == "O" && btnTic2->Text == "O" && btnTic3->Text == "O")
			{
				btnTic1->BackColor = System::Drawing::Color::Orange;
				btnTic2->BackColor = System::Drawing::Color::Orange;
				btnTic3->BackColor = System::Drawing::Color::Orange;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic4->Text == "O" && btnTic5->Text == "O" && btnTic6->Text == "O")
			{
				btnTic4->BackColor = System::Drawing::Color::Orange;
				btnTic5->BackColor = System::Drawing::Color::Orange;
				btnTic6->BackColor = System::Drawing::Color::Orange;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic7->Text == "O" && btnTic8->Text == "O" && btnTic9->Text == "O")
			{
				btnTic7->BackColor = System::Drawing::Color::Orange;
				btnTic8->BackColor = System::Drawing::Color::Orange;
				btnTic9->BackColor = System::Drawing::Color::Orange;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}


			if (btnTic1->Text == "O" && btnTic4->Text == "O" && btnTic7->Text == "O")
			{
				btnTic1->BackColor = System::Drawing::Color::Orange;
				btnTic4->BackColor = System::Drawing::Color::Orange;
				btnTic7->BackColor = System::Drawing::Color::Orange;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic2->Text == "O" && btnTic5->Text == "O" && btnTic8->Text == "O")
			{
				btnTic2->BackColor = System::Drawing::Color::Orange;
				btnTic5->BackColor = System::Drawing::Color::Orange;
				btnTic8->BackColor = System::Drawing::Color::Orange;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic3->Text == "O" && btnTic6->Text == "O" && btnTic9->Text == "O")
			{
				btnTic3->BackColor = System::Drawing::Color::Orange;
				btnTic6->BackColor = System::Drawing::Color::Orange;
				btnTic9->BackColor = System::Drawing::Color::Orange;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}


			if (btnTic1->Text == "O" && btnTic5->Text == "O" && btnTic9->Text == "O")
			{
				btnTic1->BackColor = System::Drawing::Color::Orange;
				btnTic5->BackColor = System::Drawing::Color::Orange;
				btnTic9->BackColor = System::Drawing::Color::Orange;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic3->Text == "O" && btnTic5->Text == "O" && btnTic7->Text == "O")
			{
				btnTic3->BackColor = System::Drawing::Color::Orange;
				btnTic5->BackColor = System::Drawing::Color::Orange;
				btnTic7->BackColor = System::Drawing::Color::Orange;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			//===================================================================================================================================

		}
		
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void btnTic1_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false)
	{
		btnTic1->Text = "X";
		checker = true;
	}
	else
	{
		btnTic1->Text = "O";
		checker = false;
	}
	score();
	btnTic1->Enabled = false;
}

private: System::Void btnTic2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false)
	{
		btnTic2->Text = "X";
		checker = true;
	}
	else
	{
		btnTic2->Text = "O";
		checker = false;
	}
	score();
	btnTic2->Enabled = false;
}

private: System::Void btnTic3_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false)
	{
		btnTic3->Text = "X";
		checker = true;
	}
	else
	{
		btnTic3->Text = "O";
		checker = false;
	}
	score();
	btnTic3->Enabled = false;
}

private: System::Void btnTic4_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false)
	{
		btnTic4->Text = "X";
		checker = true;
	}
	else
	{
		btnTic4->Text = "O";
		checker = false;
	}
	score();
	btnTic4->Enabled = false;
}

private: System::Void btnTic5_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false)
	{
		btnTic5->Text = "X";
		checker = true;
	}
	else
	{
		btnTic5->Text = "O";
		checker = false;
	}
	score();
	btnTic5->Enabled = false;
}

private: System::Void btnTic6_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false)
	{
		btnTic6->Text = "X";
		checker = true;
	}
	else
	{
		btnTic6->Text = "O";
		checker = false;
	}
	score();
	btnTic6->Enabled = false;
}

private: System::Void btnTic7_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false)
	{
		btnTic7->Text = "X";
		checker = true;
	}
	else
	{
		btnTic7->Text = "O";
		checker = false;
	}
	score();
	btnTic7->Enabled = false;
}

private: System::Void btnTic8_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false)
	{
		btnTic8->Text = "X";
		checker = true;
	}
	else
	{
		btnTic8->Text = "O";
		checker = false;
	}
	score();
	btnTic8->Enabled = false;
}

private: System::Void btnTic9_Click(System::Object^ sender, System::EventArgs^ e) {
    
	if (checker == false)
	{
	    btnTic9->Text = "X";
		checker = true;
	}
    else 
	{
		 btnTic9->Text = "O";
		 checker = false;
	 }
		  score();
		  btnTic9->Enabled = false;
}

private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {

	btnTic1->Enabled = true;
	btnTic2->Enabled = true;
	btnTic3->Enabled = true;
	btnTic4->Enabled = true;
	btnTic5->Enabled = true;
	btnTic6->Enabled = true;
	btnTic7->Enabled = true;
	btnTic8->Enabled = true;
	btnTic9->Enabled = true;

	btnTic1->Text = "";
	btnTic2->Text = "";
	btnTic3->Text = "";
	btnTic4->Text = "";
	btnTic5->Text = "";
	btnTic6->Text = "";
	btnTic7->Text = "";
	btnTic8->Text = "";
	btnTic9->Text = "";
	btnNewGame->Enabled = true;

	btnTic1->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic2->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic3->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic4->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic5->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic6->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic7->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic8->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic9->BackColor = System::Drawing::Color::WhiteSmoke;

}
private: System::Void btnNewGame_Click(System::Object^ sender, System::EventArgs^ e) {

	btnTic1->Enabled = true;
	btnTic2->Enabled = true;
	btnTic3->Enabled = true;
	btnTic4->Enabled = true;
	btnTic5->Enabled = true;
	btnTic6->Enabled = true;
	btnTic7->Enabled = true;
	btnTic8->Enabled = true;
	btnTic9->Enabled = true;

	btnTic1->Text = "";
	btnTic2->Text = "";
	btnTic3->Text = "";
	btnTic4->Text = "";
	btnTic5->Text = "";
	btnTic6->Text = "";
	btnTic7->Text = "";
	btnTic8->Text = "";
	btnTic9->Text = "";
	lblPlayerO->Text = "0";
	lblPlayerX->Text = "0";


	btnTic1->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic2->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic3->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic4->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic5->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic6->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic7->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic8->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic9->BackColor = System::Drawing::Color::WhiteSmoke;
}
};
}
