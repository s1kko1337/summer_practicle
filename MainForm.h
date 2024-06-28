#pragma once
#include "Motorcycle.h"
#include "Car.h"

namespace SummerPracticle {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MainForm : public System::Windows::Forms::Form
    {
    public:
        MainForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MainForm()
        {

        }

    private:
        System::Windows::Forms::TextBox^ txtOutput;
        System::Windows::Forms::Button^ btnShowMotorcycle;
        System::Windows::Forms::Button^ btnShowCar;
        System::Windows::Forms::PictureBox^ pictureBox;
        System::ComponentModel::Container^ components;

        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
            this->txtOutput = (gcnew System::Windows::Forms::TextBox());
            this->btnShowMotorcycle = (gcnew System::Windows::Forms::Button());
            this->btnShowCar = (gcnew System::Windows::Forms::Button());
            this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
            this->SuspendLayout();
            // 
            // txtOutput
            // 
            this->txtOutput->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->txtOutput->Enabled = false;
            this->txtOutput->Location = System::Drawing::Point(6, 12);
            this->txtOutput->Multiline = true;
            this->txtOutput->Name = L"txtOutput";
            this->txtOutput->Size = System::Drawing::Size(200, 200);
            this->txtOutput->TabIndex = 2;
            this->txtOutput->Text = L"Данные о транспортном средстве\r\n";
            this->txtOutput->TextChanged += gcnew System::EventHandler(this, &MainForm::txtOutput_TextChanged);
            // 
            // btnShowMotorcycle
            // 
            this->btnShowMotorcycle->BackColor = System::Drawing::SystemColors::ButtonFace;
            this->btnShowMotorcycle->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnShowMotorcycle->Location = System::Drawing::Point(357, 218);
            this->btnShowMotorcycle->Margin = System::Windows::Forms::Padding(0);
            this->btnShowMotorcycle->Name = L"btnShowMotorcycle";
            this->btnShowMotorcycle->Size = System::Drawing::Size(75, 23);
            this->btnShowMotorcycle->TabIndex = 1;
            this->btnShowMotorcycle->Text = L"Мотоцикл";
            this->btnShowMotorcycle->UseVisualStyleBackColor = false;
            this->btnShowMotorcycle->Click += gcnew System::EventHandler(this, &MainForm::btnShowMotorcycle_Click);
            // 
            // btnShowCar
            // 
            this->btnShowCar->BackColor = System::Drawing::SystemColors::ButtonFace;
            this->btnShowCar->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnShowCar->Location = System::Drawing::Point(6, 218);
            this->btnShowCar->Margin = System::Windows::Forms::Padding(0);
            this->btnShowCar->Name = L"btnShowCar";
            this->btnShowCar->Size = System::Drawing::Size(75, 23);
            this->btnShowCar->TabIndex = 0;
            this->btnShowCar->Text = L"Авто";
            this->btnShowCar->UseVisualStyleBackColor = false;
            this->btnShowCar->Click += gcnew System::EventHandler(this, &MainForm::btnShowCar_Click);
            // 
            // pictureBox
            // 
            this->pictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox.Image")));
            this->pictureBox->Location = System::Drawing::Point(212, 12);
            this->pictureBox->Name = L"pictureBox";
            this->pictureBox->Size = System::Drawing::Size(220, 200);
            this->pictureBox->TabIndex = 3;
            this->pictureBox->TabStop = false;
            // 
            // MainForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->ClientSize = System::Drawing::Size(444, 251);
            this->Controls->Add(this->pictureBox);
            this->Controls->Add(this->btnShowCar);
            this->Controls->Add(this->btnShowMotorcycle);
            this->Controls->Add(this->txtOutput);
            this->Margin = System::Windows::Forms::Padding(2);
            this->Name = L"MainForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }

    private: System::Void btnShowMotorcycle_Click(System::Object^ sender, System::EventArgs^ e) {
        this->txtOutput->Clear();
        Motorcycle moto("Yamaha", "MT-09", 2022, 117, 1149, "img/moto.bmp");
        this->txtOutput->AppendText(gcnew String(moto.getInfo().c_str()));
        Bitmap^ bmp = gcnew Bitmap(220, 200);
        Graphics^ g = Graphics::FromImage(bmp);
        pictureBox->Image = bmp;
        Bitmap^ image;
        System::String^ imageFile = gcnew System::String(moto.getImage().c_str());
        image = gcnew Bitmap(imageFile);
        pictureBox->Image = image;
    }
    private: System::Void btnShowCar_Click(System::Object^ sender, System::EventArgs^ e) {
        this->txtOutput->Clear();
        Car car("Toyota", "Camry", 2021, 203, 2378, "img/car.bmp");
        this->txtOutput->AppendText(gcnew String(car.getInfo().c_str()));
        Bitmap^ bmp = gcnew Bitmap(220, 200);
        Graphics^ g = Graphics::FromImage(bmp);
        pictureBox->Image = bmp;
        Bitmap^ image;
        System::String^ imageFile = gcnew System::String(car.getImage().c_str());
        image = gcnew Bitmap(imageFile);
        pictureBox->Image = image;
    }
    private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void txtOutput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}
