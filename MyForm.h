#pragma once
#include "Package.h"
#include "Flight.h"
#include "Hotel.h"
#include "PackageComparer.h"

namespace CppWinForm
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	public ref class MyForm : public System::Windows::Forms::Form
	{

#pragma region Windows Form Designer generated code
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  btn_Find;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  nud_Budget;
	private: System::Windows::Forms::ComboBox^  cb_Places;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DateTimePicker^  dt_From;
	private: System::Windows::Forms::DateTimePicker^  dt_To;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ComboBox^  cb_Priority;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  cb_ViewBy;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::DataGridView^  Grid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::ComponentModel::Container ^components;

			 void InitializeComponent(void)
			 {
				 this->btn_Find = (gcnew System::Windows::Forms::Button());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->nud_Budget = (gcnew System::Windows::Forms::NumericUpDown());
				 this->cb_Places = (gcnew System::Windows::Forms::ComboBox());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->dt_From = (gcnew System::Windows::Forms::DateTimePicker());
				 this->dt_To = (gcnew System::Windows::Forms::DateTimePicker());
				 this->label4 = (gcnew System::Windows::Forms::Label());
				 this->cb_Priority = (gcnew System::Windows::Forms::ComboBox());
				 this->label5 = (gcnew System::Windows::Forms::Label());
				 this->cb_ViewBy = (gcnew System::Windows::Forms::ComboBox());
				 this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
				 this->label7 = (gcnew System::Windows::Forms::Label());
				 this->label6 = (gcnew System::Windows::Forms::Label());
				 this->Grid = (gcnew System::Windows::Forms::DataGridView());
				 this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nud_Budget))->BeginInit();
				 this->tableLayoutPanel1->SuspendLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid))->BeginInit();
				 this->groupBox1->SuspendLayout();
				 this->SuspendLayout();
				 // 
				 // btn_Find
				 // 
				 this->btn_Find->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btn_Find->Location = System::Drawing::Point(137, 121);
				 this->btn_Find->Margin = System::Windows::Forms::Padding(4);
				 this->btn_Find->Name = L"btn_Find";
				 this->btn_Find->Size = System::Drawing::Size(111, 47);
				 this->btn_Find->TabIndex = 0;
				 this->btn_Find->Text = L"Find";
				 this->btn_Find->UseVisualStyleBackColor = true;
				 this->btn_Find->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label1->Location = System::Drawing::Point(4, 0);
				 this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(70, 24);
				 this->label1->TabIndex = 1;
				 this->label1->Text = L"Budget";
				 // 
				 // nud_Budget
				 // 
				 this->nud_Budget->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->nud_Budget->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->nud_Budget->Location = System::Drawing::Point(137, 4);
				 this->nud_Budget->Margin = System::Windows::Forms::Padding(4);
				 this->nud_Budget->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, 0 });
				 this->nud_Budget->Name = L"nud_Budget";
				 this->nud_Budget->Size = System::Drawing::Size(349, 29);
				 this->nud_Budget->TabIndex = 3;
				 // 
				 // cb_Places
				 // 
				 this->cb_Places->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->cb_Places->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->cb_Places->FormattingEnabled = true;
				 this->cb_Places->Location = System::Drawing::Point(627, 4);
				 this->cb_Places->Margin = System::Windows::Forms::Padding(4);
				 this->cb_Places->Name = L"cb_Places";
				 this->cb_Places->Size = System::Drawing::Size(350, 32);
				 this->cb_Places->TabIndex = 4;
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label2->Location = System::Drawing::Point(494, 0);
				 this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(57, 24);
				 this->label2->TabIndex = 1;
				 this->label2->Text = L"Place";
				 // 
				 // label3
				 // 
				 this->label3->AutoSize = true;
				 this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label3->Location = System::Drawing::Point(4, 40);
				 this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(98, 24);
				 this->label3->TabIndex = 1;
				 this->label3->Text = L"From Date";
				 // 
				 // dt_From
				 // 
				 this->dt_From->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->dt_From->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->dt_From->Format = System::Windows::Forms::DateTimePickerFormat::Short;
				 this->dt_From->Location = System::Drawing::Point(137, 44);
				 this->dt_From->Margin = System::Windows::Forms::Padding(4);
				 this->dt_From->Name = L"dt_From";
				 this->dt_From->Size = System::Drawing::Size(349, 29);
				 this->dt_From->TabIndex = 5;
				 // 
				 // dt_To
				 // 
				 this->dt_To->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->dt_To->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->dt_To->Format = System::Windows::Forms::DateTimePickerFormat::Short;
				 this->dt_To->Location = System::Drawing::Point(627, 44);
				 this->dt_To->Margin = System::Windows::Forms::Padding(4);
				 this->dt_To->Name = L"dt_To";
				 this->dt_To->Size = System::Drawing::Size(350, 29);
				 this->dt_To->TabIndex = 5;
				 // 
				 // label4
				 // 
				 this->label4->AutoSize = true;
				 this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label4->Location = System::Drawing::Point(27, 238);
				 this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				 this->label4->Name = L"label4";
				 this->label4->Size = System::Drawing::Size(150, 24);
				 this->label4->TabIndex = 1;
				 this->label4->Text = L"Search Results";
				 // 
				 // cb_Priority
				 // 
				 this->cb_Priority->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->cb_Priority->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->cb_Priority->FormattingEnabled = true;
				 this->cb_Priority->Location = System::Drawing::Point(137, 81);
				 this->cb_Priority->Margin = System::Windows::Forms::Padding(4);
				 this->cb_Priority->Name = L"cb_Priority";
				 this->cb_Priority->Size = System::Drawing::Size(349, 32);
				 this->cb_Priority->TabIndex = 4;
				 // 
				 // label5
				 // 
				 this->label5->AutoSize = true;
				 this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label5->Location = System::Drawing::Point(494, 77);
				 this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				 this->label5->Name = L"label5";
				 this->label5->Size = System::Drawing::Size(78, 24);
				 this->label5->TabIndex = 1;
				 this->label5->Text = L"View By";
				 // 
				 // cb_ViewBy
				 // 
				 this->cb_ViewBy->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->cb_ViewBy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->cb_ViewBy->FormattingEnabled = true;
				 this->cb_ViewBy->Location = System::Drawing::Point(627, 81);
				 this->cb_ViewBy->Margin = System::Windows::Forms::Padding(4);
				 this->cb_ViewBy->Name = L"cb_ViewBy";
				 this->cb_ViewBy->Size = System::Drawing::Size(350, 32);
				 this->cb_ViewBy->TabIndex = 4;
				 // 
				 // tableLayoutPanel1
				 // 
				 this->tableLayoutPanel1->ColumnCount = 4;
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
					 133)));
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 50)));
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
					 133)));
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
					 50)));
				 this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
					 27)));
				 this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
				 this->tableLayoutPanel1->Controls->Add(this->nud_Budget, 1, 0);
				 this->tableLayoutPanel1->Controls->Add(this->label2, 2, 0);
				 this->tableLayoutPanel1->Controls->Add(this->label7, 0, 2);
				 this->tableLayoutPanel1->Controls->Add(this->dt_To, 3, 1);
				 this->tableLayoutPanel1->Controls->Add(this->cb_Places, 3, 0);
				 this->tableLayoutPanel1->Controls->Add(this->label3, 0, 1);
				 this->tableLayoutPanel1->Controls->Add(this->label6, 2, 1);
				 this->tableLayoutPanel1->Controls->Add(this->cb_ViewBy, 3, 2);
				 this->tableLayoutPanel1->Controls->Add(this->label5, 2, 2);
				 this->tableLayoutPanel1->Controls->Add(this->dt_From, 1, 1);
				 this->tableLayoutPanel1->Controls->Add(this->cb_Priority, 1, 2);
				 this->tableLayoutPanel1->Controls->Add(this->btn_Find, 1, 3);
				 this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->tableLayoutPanel1->Location = System::Drawing::Point(7, 25);
				 this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
				 this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
				 this->tableLayoutPanel1->RowCount = 4;
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
				 this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
				 this->tableLayoutPanel1->Size = System::Drawing::Size(981, 170);
				 this->tableLayoutPanel1->TabIndex = 6;
				 // 
				 // label7
				 // 
				 this->label7->AutoSize = true;
				 this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label7->Location = System::Drawing::Point(4, 77);
				 this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				 this->label7->Name = L"label7";
				 this->label7->Size = System::Drawing::Size(66, 24);
				 this->label7->TabIndex = 1;
				 this->label7->Text = L"Priority";
				 // 
				 // label6
				 // 
				 this->label6->AutoSize = true;
				 this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label6->Location = System::Drawing::Point(494, 40);
				 this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				 this->label6->Name = L"label6";
				 this->label6->Size = System::Drawing::Size(76, 24);
				 this->label6->TabIndex = 1;
				 this->label6->Text = L"To Date";
				 // 
				 // Grid
				 // 
				 this->Grid->AllowUserToAddRows = false;
				 this->Grid->AllowUserToDeleteRows = false;
				 this->Grid->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					 | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->Grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
				 this->Grid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
					 this->Column1, this->Column2,
						 this->Column7, this->Column3, this->Column8, this->Column4, this->Column5
				 });
				 this->Grid->Location = System::Drawing::Point(24, 263);
				 this->Grid->Margin = System::Windows::Forms::Padding(4);
				 this->Grid->Name = L"Grid";
				 this->Grid->ReadOnly = true;
				 this->Grid->Size = System::Drawing::Size(992, 311);
				 this->Grid->TabIndex = 7;
				 // 
				 // Column1
				 // 
				 this->Column1->HeaderText = L"ID";
				 this->Column1->Name = L"Column1";
				 this->Column1->ReadOnly = true;
				 // 
				 // Column2
				 // 
				 this->Column2->HeaderText = L"Flight";
				 this->Column2->Name = L"Column2";
				 this->Column2->ReadOnly = true;
				 // 
				 // Column7
				 // 
				 this->Column7->HeaderText = L"Flight Priority";
				 this->Column7->Name = L"Column7";
				 this->Column7->ReadOnly = true;
				 // 
				 // Column3
				 // 
				 this->Column3->HeaderText = L"Hotel";
				 this->Column3->Name = L"Column3";
				 this->Column3->ReadOnly = true;
				 // 
				 // Column8
				 // 
				 this->Column8->HeaderText = L"Hotel Priority";
				 this->Column8->Name = L"Column8";
				 this->Column8->ReadOnly = true;
				 // 
				 // Column4
				 // 
				 this->Column4->HeaderText = L"Place";
				 this->Column4->Name = L"Column4";
				 this->Column4->ReadOnly = true;
				 // 
				 // Column5
				 // 
				 this->Column5->HeaderText = L"Price";
				 this->Column5->Name = L"Column5";
				 this->Column5->ReadOnly = true;
				 // 
				 // groupBox1
				 // 
				 this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->groupBox1->Controls->Add(this->tableLayoutPanel1);
				 this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->groupBox1->Location = System::Drawing::Point(24, 15);
				 this->groupBox1->Margin = System::Windows::Forms::Padding(4);
				 this->groupBox1->Name = L"groupBox1";
				 this->groupBox1->Padding = System::Windows::Forms::Padding(7, 6, 7, 6);
				 this->groupBox1->Size = System::Drawing::Size(995, 201);
				 this->groupBox1->TabIndex = 8;
				 this->groupBox1->TabStop = false;
				 this->groupBox1->Text = L"Search Details";
				 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(1032, 590);
				 this->Controls->Add(this->groupBox1);
				 this->Controls->Add(this->Grid);
				 this->Controls->Add(this->label4);
				 this->Margin = System::Windows::Forms::Padding(4);
				 this->Name = L"MyForm";
				 this->Text = L"My Application";
				 this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nud_Budget))->EndInit();
				 this->tableLayoutPanel1->ResumeLayout(false);
				 this->tableLayoutPanel1->PerformLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid))->EndInit();
				 this->groupBox1->ResumeLayout(false);
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion

	private:
		String^ FILE_PLACES = "Places.txt";
		String^ FILE_HOTELS = "Hotels.txt";
		String^ FILE_FLIGHTS = "Flights.txt";
		String^ FILE_PACKAGES = "Packages.txt";

		int FLIGHT_PRIORITY_MIN = 5;
		int HOTEL_PRIORITY_MIN = 5;

		ArrayList^ PlacesList = gcnew ArrayList();
		ArrayList^ FlightList = gcnew ArrayList();
		ArrayList^ HotelList = gcnew ArrayList();
		ArrayList^ PackageList = gcnew ArrayList();

		array<String^>^ tempPlaces;
		array<String^>^ tempFlights;
		array<String^>^ tempHotels;
		array<String^>^ tempPackages;
		array<String^>^ arr_f;
		array<String^>^ arr_h;
		array<String^>^ arr_p;

		Flight^ GetFlightByID(String^ ID)
		{
			Flight^ returnValue;

			for each (Flight^ item in FlightList)
			{
				if (item->ID->Equals(ID))
				{
					returnValue = item;
					break;
				}
			}

			return returnValue;
		}

		Hotel^ GetHotelByID(String^ ID)
		{
			Hotel^ returnValue;

			for each (Hotel^ item in HotelList)
			{
				if (item->ID->Equals(ID))
				{
					returnValue = item;
					break;
				}
			}

			return returnValue;
		}

		System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
		{
			//	Places
			tempPlaces = File::ReadAllLines(FILE_PLACES);
			PlacesList->AddRange(tempPlaces);

			//	Flights
			tempFlights = File::ReadAllLines(FILE_FLIGHTS);
			for each (String^ item in tempFlights)
			{
				arr_f = item->Split(';');
				Flight^ f = gcnew Flight();
				f->ID = arr_f[0]->Trim();
				f->Name = arr_f[1]->Trim();
				f->Rating = Convert::ToInt32(arr_f[2]->Trim());

				FlightList->Add(f);
			}

			//	Hotels
			tempHotels = File::ReadAllLines(FILE_HOTELS);
			for each (String^ item in tempHotels)
			{
				array<String^>^ arr_h = item->Split(';');
				Hotel^ h = gcnew Hotel();
				h->ID = arr_h[0]->Trim();
				h->Name = arr_h[1]->Trim();
				h->Rating = Convert::ToInt32(arr_h[2]->Trim());

				HotelList->Add(h);
			}

			//	Packages
			tempPackages = File::ReadAllLines(FILE_PACKAGES);
			for each (String^ item in tempPackages)
			{
				arr_p = item->Split(';');

				Package^ p = gcnew Package();
				p->ID = arr_p[0]->Trim();
				p->Flight = GetFlightByID(arr_p[1]->Trim());
				p->Hotel = GetHotelByID(arr_p[2]->Trim());
				p->Place = arr_p[3]->Trim();
				p->Price = Convert::ToInt32(arr_p[4]->Trim());

				PackageList->Add(p);
			}

			//	Loading Combobox
			cb_Places->Items->Clear();
			cb_Places->Items->AddRange(tempPlaces);

			cb_Priority->Items->Clear();
			cb_Priority->Items->Add("Flight");
			cb_Priority->Items->Add("Hotel");

			cb_ViewBy->Items->Clear();
			cb_ViewBy->Items->Add("Low to High");
			cb_ViewBy->Items->Add("High to Low");

			dt_From->Value = DateTime::Today;
			dt_To->Value = DateTime::Today;
		}

		System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
		{
			//	Validation
			if (nud_Budget->Value == 0)
			{
				MessageBox::Show("Please enter the budget value");
				return;
			}

			if (cb_Places->Text == "")
			{
				MessageBox::Show("Please select a place");
				return;
			}

			if (dt_From->Value >= dt_To->Value)
			{
				MessageBox::Show("To date must be greater then from date");
				return;
			}

			if (cb_Priority->Text == "")
			{
				MessageBox::Show("Please select a priority");
				return;
			}

			if (cb_ViewBy->Text == "")
			{
				MessageBox::Show("Please select view by");
				return;
			}

			//	Packages by Places
			ArrayList^ temp1 = gcnew ArrayList();
			String^ SelectedPlace = cb_Places->Text;

			for each (Package^ item in PackageList)
			{
				String^ PackagePlace = item->Place;

				if (PackagePlace->Equals(SelectedPlace))
				{
					temp1->Add(item);
				}
			}

			//	Packages by Priority
			ArrayList^ temp2 = gcnew ArrayList();
			String^ SelectedPriority = cb_Priority->Text;

			for each (Package^ item in temp1)
			{
				if (SelectedPriority->Equals("Flight"))
				{
					int FlightRating = (int)item->Flight->Rating;

					if (FlightRating > FLIGHT_PRIORITY_MIN)
					{
						temp2->Add(item);
					}
				}
				else
				{
					int HotelRating = (int)item->Hotel->Rating;

					if (HotelRating > HOTEL_PRIORITY_MIN)
					{
						temp2->Add(item);
					}
				}
			}

			//	Packages by Budget
			ArrayList^ temp3 = gcnew ArrayList();
			int SelectedBudget = (int)nud_Budget->Value;

			for each (Package^ item in temp2)
			{
				int PackagePrice = (int)item->Price;

				if (PackagePrice <= SelectedBudget)
				{
					temp3->Add(item);
				}
			}

			//	Sorting
			ArrayList^ temp4 = gcnew ArrayList();
			bool SelectedSortAssending = cb_ViewBy->Text->Equals("Low to High");

			for each (Package^ item in temp3)
			{
				temp4->Add(item);
			}

			//	Populate Grid View
			Grid->Rows->Clear();
			for each (Package^ item in temp4)
			{
				array<String^>^ row = gcnew array<String^>
				{
					item->ID,
					item->Flight->Name,
					item->Flight->Rating->ToString(),
					item->Hotel->Name,
					item->Hotel->Rating->ToString(),
					item->Place,
					item->Price->ToString(),
				};

				Grid->Rows->Add(row);
			}

			Grid->Columns[6]->SortMode = DataGridViewColumnSortMode::Programmatic;
		}
	};
}


/*


// stores adjacency list items

struct Node {

	string cityCode;
	string cityName;
	Node * next;

};

// structure to store edges

struct Edge {

	string start_node, end_node;
	float distance;

};

class Graph {

	// insert new nodes into adjacency list from given graph

	Node * createNode(string cName, string cCode, Node * nextPtr) {

		Node * newNode = new Node;

		newNode->cityCode = cCode;
		newNode->cityName = cName;
		newNode->next = nextPtr;   // point new node to current adjList

		return newNode;

	}

	int N;  // number of nodes in the graph
	int n;  // number of edges in the graph
public:

	Node **adjList;           //adjacency list as array of pointers

							  // Constructor

	Graph(Edge edges[], int n, int N) {

		// allocate new node

		adjList = new Node *[N];

		this->N = N;

		// initialize adjList pointer for all vertices

		for (int i = 0; i < N; i++)

			adjList[i] = nullptr;

		// construct directed graph by adding edges to it

		for (int i = 0; i < n; i++) {

			string start_node = edges[i].start_node;

			string end_node = edges[i].end_node;

			float distance = edges[i].distance;

			// insert in the beginning

			Node * newNode = createNode(end_node, "", adjList[i]);



			// point adjList pointer to new node

			adjList[i] = newNode;

		}

	}

	// Destructor

	~Graph() {

		for (int i = 0; i < N; i++)

			delete[] adjList[i];

		delete[] adjList;

	}

};

// print all adjacent vertices of given vertex

void display_AdjList(Node* ptr, int i)
{

	while (ptr != nullptr) {

		cout << "(" << i << ", " << ptr->cityName

			<< ", " << ptr->cityCode << ") ";

		ptr = ptr->next;

	}

	cout << endl;

}

// graph implementation

int main()

{

	// graph edges array.

	Edge edges[] = {

		// (x, y, w) -> edge from x to y with distance w

		{ "KHI","ISB",2000 },{ "QTA","KHI",2500 },{ "asd","asf",45 },{ "abc","def",454 },{ "abc","def",6767 },{ "abc","def",65 }

	};

	int N = 6;      // Number of vertices in the graph

					// calculate number of edges

	int n = sizeof(edges) / sizeof(edges[0]);

	// construct graph

	Graph Graph(edges, n, N);

	// print adjacency list representation of graph

	cout << "Graph adjacency list " << endl << "(start_nodetex, end_nodetex, distance):" << endl;

	for (int i = 0; i < N; i++)

	{

		// display adjacent vertices of vertex i

		display_AdjList(Graph.adjList[i], i);

	}

	return 0;

}*/
