#pragma once
#include "imge.h"
#include <Windows.h>
#include <atlstr.h>
#include<math.h>
#include<float.h>
#include<winnt.h>
#include <msclr/marshal_cppstd.h>
#include<opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgcodecs.hpp>
#include<opencv2/imgproc.hpp>
namespace image {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// MyForm için özet
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Oluþturucu kodunu buraya ekle


			//
		}

	protected:
		/// <summary>
		///Kullanýlan tüm kaynaklarý temizleyin.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;



	private: System::Windows::Forms::ToolStripMenuItem^ histogramToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ drawNormalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ equalToolStripMenuItem;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::ToolStripMenuItem^ binaryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clearToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rGBScaleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ morpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dilationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ erosionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mirrorImageToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rGBSegmentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rGBSegmentToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ boundaryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cCLToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cannyEdgeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ digitalZoomToolStripMenuItem;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ digitalZoom2ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ rgbDigitalZoomToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rgbDigitalZoomToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ saltPepperNoiseElmToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ToolStripMenuItem^ grayScaleToolStripMenuItem;


	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		///Gerekli tasarýmcý deðiþkeni.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasarýmcý desteði için gerekli metot - bu metodun 
		///içeriðini kod düzenleyici ile deðiþtirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->binaryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rGBScaleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mirrorImageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->histogramToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->drawNormalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->equalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cannyEdgeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->digitalZoomToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->digitalZoom2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rgbDigitalZoomToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rgbDigitalZoomToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->morpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dilationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->erosionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rGBSegmentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rGBSegmentToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->boundaryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cCLToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saltPepperNoiseElmToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->grayScaleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->histogramToolStripMenuItem1, this->morpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1488, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->openToolStripMenuItem,
					this->grayScaleToolStripMenuItem, this->binaryToolStripMenuItem, this->rGBScaleToolStripMenuItem, this->mirrorImageToolStripMenuItem,
					this->clearToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// binaryToolStripMenuItem
			// 
			this->binaryToolStripMenuItem->Name = L"binaryToolStripMenuItem";
			this->binaryToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->binaryToolStripMenuItem->Text = L"Binary";
			this->binaryToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::binaryToolStripMenuItem_Click);
			// 
			// rGBScaleToolStripMenuItem
			// 
			this->rGBScaleToolStripMenuItem->Name = L"rGBScaleToolStripMenuItem";
			this->rGBScaleToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->rGBScaleToolStripMenuItem->Text = L"RGBScale";
			this->rGBScaleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rGBScaleToolStripMenuItem_Click);
			// 
			// mirrorImageToolStripMenuItem
			// 
			this->mirrorImageToolStripMenuItem->Name = L"mirrorImageToolStripMenuItem";
			this->mirrorImageToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->mirrorImageToolStripMenuItem->Text = L"MirrorImage";
			this->mirrorImageToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::mirrorImageToolStripMenuItem_Click);
			// 
			// clearToolStripMenuItem
			// 
			this->clearToolStripMenuItem->Name = L"clearToolStripMenuItem";
			this->clearToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->clearToolStripMenuItem->Text = L"Clear";
			this->clearToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::clearToolStripMenuItem_Click);
			// 
			// histogramToolStripMenuItem1
			// 
			this->histogramToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->drawNormalToolStripMenuItem,
					this->equalToolStripMenuItem, this->cannyEdgeToolStripMenuItem, this->digitalZoomToolStripMenuItem, this->digitalZoom2ToolStripMenuItem,
					this->rgbDigitalZoomToolStripMenuItem1, this->rgbDigitalZoomToolStripMenuItem
			});
			this->histogramToolStripMenuItem1->Name = L"histogramToolStripMenuItem1";
			this->histogramToolStripMenuItem1->Size = System::Drawing::Size(93, 24);
			this->histogramToolStripMenuItem1->Text = L"Histogram";
			// 
			// drawNormalToolStripMenuItem
			// 
			this->drawNormalToolStripMenuItem->Name = L"drawNormalToolStripMenuItem";
			this->drawNormalToolStripMenuItem->Size = System::Drawing::Size(234, 26);
			this->drawNormalToolStripMenuItem->Text = L"Draw Normal";
			// 
			// equalToolStripMenuItem
			// 
			this->equalToolStripMenuItem->Name = L"equalToolStripMenuItem";
			this->equalToolStripMenuItem->Size = System::Drawing::Size(234, 26);
			this->equalToolStripMenuItem->Text = L"Equal";
			// 
			// cannyEdgeToolStripMenuItem
			// 
			this->cannyEdgeToolStripMenuItem->Name = L"cannyEdgeToolStripMenuItem";
			this->cannyEdgeToolStripMenuItem->Size = System::Drawing::Size(234, 26);
			this->cannyEdgeToolStripMenuItem->Text = L"Canny Edge";
			this->cannyEdgeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cannyEdgeToolStripMenuItem_Click);
			// 
			// digitalZoomToolStripMenuItem
			// 
			this->digitalZoomToolStripMenuItem->Name = L"digitalZoomToolStripMenuItem";
			this->digitalZoomToolStripMenuItem->Size = System::Drawing::Size(234, 26);
			this->digitalZoomToolStripMenuItem->Text = L"Digital Zoom";
			this->digitalZoomToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::digitalZoomToolStripMenuItem_Click);
			// 
			// digitalZoom2ToolStripMenuItem
			// 
			this->digitalZoom2ToolStripMenuItem->Name = L"digitalZoom2ToolStripMenuItem";
			this->digitalZoom2ToolStripMenuItem->Size = System::Drawing::Size(234, 26);
			this->digitalZoom2ToolStripMenuItem->Text = L"Digital Zoom 2";
			this->digitalZoom2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::digitalZoom2ToolStripMenuItem_Click);
			// 
			// rgbDigitalZoomToolStripMenuItem1
			// 
			this->rgbDigitalZoomToolStripMenuItem1->Name = L"rgbDigitalZoomToolStripMenuItem1";
			this->rgbDigitalZoomToolStripMenuItem1->Size = System::Drawing::Size(234, 26);
			this->rgbDigitalZoomToolStripMenuItem1->Text = L"Rgb Digital Zoom";
			this->rgbDigitalZoomToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::rgbDigitalZoomToolStripMenuItem1_Click);
			// 
			// rgbDigitalZoomToolStripMenuItem
			// 
			this->rgbDigitalZoomToolStripMenuItem->Name = L"rgbDigitalZoomToolStripMenuItem";
			this->rgbDigitalZoomToolStripMenuItem->Size = System::Drawing::Size(234, 26);
			this->rgbDigitalZoomToolStripMenuItem->Text = L"RGB Maske Gezdirme";
			this->rgbDigitalZoomToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rgbDigitalZoomToolStripMenuItem_Click);
			// 
			// morpToolStripMenuItem
			// 
			this->morpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->dilationToolStripMenuItem,
					this->erosionToolStripMenuItem, this->rGBSegmentToolStripMenuItem, this->rGBSegmentToolStripMenuItem1, this->boundaryToolStripMenuItem,
					this->cCLToolStripMenuItem, this->saltPepperNoiseElmToolStripMenuItem
			});
			this->morpToolStripMenuItem->Name = L"morpToolStripMenuItem";
			this->morpToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->morpToolStripMenuItem->Text = L"Morp";
			// 
			// dilationToolStripMenuItem
			// 
			this->dilationToolStripMenuItem->Name = L"dilationToolStripMenuItem";
			this->dilationToolStripMenuItem->Size = System::Drawing::Size(240, 26);
			this->dilationToolStripMenuItem->Text = L"Dilation";
			this->dilationToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::dilationToolStripMenuItem_Click);
			// 
			// erosionToolStripMenuItem
			// 
			this->erosionToolStripMenuItem->Name = L"erosionToolStripMenuItem";
			this->erosionToolStripMenuItem->Size = System::Drawing::Size(240, 26);
			this->erosionToolStripMenuItem->Text = L"Erosion";
			this->erosionToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::erosionToolStripMenuItem_Click);
			// 
			// rGBSegmentToolStripMenuItem
			// 
			this->rGBSegmentToolStripMenuItem->Name = L"rGBSegmentToolStripMenuItem";
			this->rGBSegmentToolStripMenuItem->Size = System::Drawing::Size(240, 26);
			this->rGBSegmentToolStripMenuItem->Text = L"IntensýtySegment";
			this->rGBSegmentToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rGBSegmentToolStripMenuItem_Click);
			// 
			// rGBSegmentToolStripMenuItem1
			// 
			this->rGBSegmentToolStripMenuItem1->Name = L"rGBSegmentToolStripMenuItem1";
			this->rGBSegmentToolStripMenuItem1->Size = System::Drawing::Size(240, 26);
			this->rGBSegmentToolStripMenuItem1->Text = L"RGBSegment";
			this->rGBSegmentToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::rGBSegmentToolStripMenuItem1_Click);
			// 
			// boundaryToolStripMenuItem
			// 
			this->boundaryToolStripMenuItem->Name = L"boundaryToolStripMenuItem";
			this->boundaryToolStripMenuItem->Size = System::Drawing::Size(240, 26);
			this->boundaryToolStripMenuItem->Text = L"Boundary";
			this->boundaryToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::boundaryToolStripMenuItem_Click);
			// 
			// cCLToolStripMenuItem
			// 
			this->cCLToolStripMenuItem->Name = L"cCLToolStripMenuItem";
			this->cCLToolStripMenuItem->Size = System::Drawing::Size(240, 26);
			this->cCLToolStripMenuItem->Text = L"CCL";
			this->cCLToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cCLToolStripMenuItem_Click);
			// 
			// saltPepperNoiseElmToolStripMenuItem
			// 
			this->saltPepperNoiseElmToolStripMenuItem->Name = L"saltPepperNoiseElmToolStripMenuItem";
			this->saltPepperNoiseElmToolStripMenuItem->Size = System::Drawing::Size(240, 26);
			this->saltPepperNoiseElmToolStripMenuItem->Text = L"Salt-Pepper Noise Elm";
			this->saltPepperNoiseElmToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saltPepperNoiseElmToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(22, 51);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(517, 369);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseUp);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(955, 51);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(492, 554);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"X2", L"X4", L"X8", L"X16", L"X32" });
			this->comboBox1->Location = System::Drawing::Point(701, 59);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(701, 98);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 22);
			this->textBox1->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(591, 101);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 17);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Mask Count";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(591, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 17);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Zoom Katsayýsý";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(594, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 17);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Mask";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Mean", L"Laplace", L"Low Pass Filter", L"High Pass Filter",
					L"Sharpen"
			});
			this->comboBox2->Location = System::Drawing::Point(701, 132);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 11;
			// 
			// grayScaleToolStripMenuItem
			// 
			this->grayScaleToolStripMenuItem->Name = L"grayScaleToolStripMenuItem";
			this->grayScaleToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->grayScaleToolStripMenuItem->Text = L"Gray Scale";
			this->grayScaleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::grayScaleToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1488, 597);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Goruntu";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		LPCTSTR input;
		int Width, Height;
		long Size;
		int x_axis, y_axis, w_size, h_size;
		int x2_axis, y2_axis;
		int paramx_axis, param_yaxis;


#pragma endregion
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CString str;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			pictureBox1->ImageLocation = openFileDialog1->FileName;
			pictureBox1->AutoSize;
			pictureBox1->Visible = true;
			pictureBox2->Visible = true;

			str = openFileDialog1->FileName;
			input = (LPCTSTR)str;
			BYTE* buffer = LoadBMP(Width, Height, Size, input);
			BYTE* Raw_Intensity = ConvertBMPToIntensity(buffer, Width, Height);

			pictureBox1->Width = Width;
			pictureBox1->Height = Height;

			/*
			Bitmap^ surface = gcnew Bitmap(Width,Height);
			pictureBox2->Image = surface;
			Color c;
			int temp;
			for (unsigned int row = 0; row < Height; row++) {
				for (unsigned int column = 0; column < Width; column++)
				{
					temp = row * Width + column;
					c = Color::FromArgb(Raw_Intensity[temp], Raw_Intensity[temp], Raw_Intensity[temp]);
					surface->SetPixel(column, row, c);

				}
			}*/
		}

	};
		   /*
	private: System::Void drawNormalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{

		int* Hist = new int[256];
		LPCTSTR input;
		CString str;
		int Width, Height;
		for (int i = 0; i < 256; i++)//salak visual studio direk ++ yapýnca bellekteki konumunu falan yazýyor böyle yapmadan çizmiyor gerizekalý bi dahakine aklýnda bulunsun dizilerde toplama yapacaksan ilk deger ata sabit bir ifade ver 
		{
			Hist[i] = 0;
		}

		str = pictureBox1->ImageLocation;
		input = (LPCTSTR)str;
		BYTE* buffer = LoadBMP(Width, Height, Size, input);
		BYTE* Raw_Intensity = ConvertBMPToIntensity(buffer, Width, Height);

		for (int i = 0; i < Width * Height; i++)
		{

			Hist[(int)Raw_Intensity[i]]++;
		}

		for (int j = 0; j < 256; j++)
		{
			chart1->Series["NOP"]->Points->AddXY(j, Hist[j]);

		}
		chart1->Visible = true;
		chart2->Visible = false;
	}
	*/
		   /*
	private: System::Void equalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{

		int* Equal_Hist = new int[256];
		int* Hist = new int[256];
		int* Kumulative_Hist = new int[256];

		for (int i = 0; i < 256; i++)
		{
			Equal_Hist[i] = 0;
			Hist[i] = 0;
			Kumulative_Hist[i] = 0;
		}

		CString str;
		int Max_Brightness, temp;
		int index;

		str = pictureBox1->ImageLocation;
		input = (LPCTSTR)str;
		BYTE* buffer = LoadBMP(Width, Height, Size, input);
		BYTE* Raw_Intensity = ConvertBMPToIntensity(buffer, Width, Height);
		//BYTE* gray = ConvertIntensityToBMP(raw_intense, Width, Height, Size);
		for (int i = 0; i < Width * Height; i++)
		{
			Hist[(int)Raw_Intensity[i]]++;
		}

		for (int k = 256; k >= 0; k--)
		{
			if (Hist[k] > 0)
			{
				Max_Brightness = k;
				break;
			}
		}

		Kumulative_Hist[0] = Hist[0];
		int one = round(Kumulative_Hist[0] * Max_Brightness / (Width * Height));
		Equal_Hist[one] = Kumulative_Hist[0];

		for (int i = 1; i < 256; i++)
		{
			Kumulative_Hist[i] = Hist[i] + Kumulative_Hist[i - 1];
		}
		for (int j = 1; j < 256; j++)
		{
			temp = round(Kumulative_Hist[j] * Max_Brightness / (Width * Height));
			Equal_Hist[temp] += (Kumulative_Hist[j] - Kumulative_Hist[j - 1]);
		}


		for (int j = 0; j < 256; j++)
		{
			chart2->Series["NOPExtended"]->Points->AddXY(j, Equal_Hist[j]);
		}
		chart2->Visible = true;
		chart1->Visible = false;

	}
	*/
	private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		x_axis = e->X;
		y_axis = e->Y;
		x2_axis = 0;
	}

	private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		LPCTSTR output = L"C:\\Users\\asus\\Desktop\\image\\cropimage.bmp";
		long size;
		CString str;
		str = pictureBox1->ImageLocation;
		input = (LPCTSTR)str;
		x2_axis = e->X;
		y2_axis = e->Y;
		w_size = x2_axis - x_axis;
		h_size = y2_axis - y_axis;
		paramx_axis = x_axis;
		param_yaxis = y_axis;
		if (w_size < 0 && h_size < 0)
		{
			w_size = abs(w_size);
			h_size = abs(h_size);
			paramx_axis = x2_axis;
			param_yaxis = y2_axis;
		}
		if (h_size < 0)
		{
			h_size = abs(h_size);
			param_yaxis = abs(y_axis - h_size);
			paramx_axis = x_axis;
		}
		if (w_size < 0)
		{
			w_size = abs(w_size);
			paramx_axis = x2_axis;
			param_yaxis = abs(y2_axis - h_size);

		}

		BYTE* buffer = LoadBMP(Width, Height, Size, input);
		//BYTE* Raw_Intensity = ConvertBMPToIntensity(buffer, Width, Height);//gri resim kýrpýlmýþ
		BYTE* rgbscale = RGBScale(buffer, Width, Height, Size);//gri raw_intensity
		BYTE* crop = Crop(rgbscale, Width, w_size, h_size, paramx_axis, param_yaxis);
		BYTE* save = RGBScale(crop, w_size, h_size, size);
		SaveBMP(save, w_size, h_size, size, output);

		pictureBox2->Width = w_size;
		pictureBox2->Height = h_size;
		x_axis = 0;//basma tetikleme


		//bi toolun belli bir özelliði(methodu) grafik gibi bi sýnýfýn nesnesine atanabiliyorsa onu git en basýnda tanýmla
		Bitmap^ surface = gcnew Bitmap(w_size, h_size);
		pictureBox2->Image = surface;
		pictureBox2->AutoSize;
		Color c;
		int temp;
		for (unsigned int row = 0; row < h_size; row++) {
			for (unsigned int column = 0; column < w_size; column++)
			{
				temp = row * w_size + column;
				c = Color::FromArgb(crop[3 * temp + 2], crop[3 * temp + 1], crop[3 * temp]);
				surface->SetPixel(column, row, c);

			}
		}

	}


	private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		Graphics^ g = pictureBox1->CreateGraphics();
		Pen^ pen = gcnew Pen(Color::GhostWhite, 5.0F);

		int downtemp = x_axis;
		int uptemp = x2_axis;

		if (downtemp != 0)
		{
			int current_x = e->X;
			int current_y = e->Y;
			int current_paramx = x_axis;
			int curren_paramy = y_axis;
			int current_width = current_x - x_axis;
			int current_height = current_y - y_axis;

			if (current_width < 0 && current_height < 0)
			{
				current_width = abs(current_width);
				current_height = abs(current_height);
				current_paramx = current_x;
				curren_paramy = current_y;
			}
			if (current_height < 0)
			{
				current_height = abs(current_height);
				curren_paramy = abs(y_axis - current_height);
				current_paramx = x_axis;
			}
			if (current_width < 0)
			{
				current_width = abs(current_width);
				current_paramx = current_x;
				curren_paramy = abs(current_y - current_height);

			}
			//pictureBox1->CreateGraphics()->DrawRectangle(pen, current_paramx, curren_paramy, current_width, current_height);
			g->DrawRectangle(pen, current_paramx, curren_paramy, current_width, current_height);//recursive oluyo elimi çektiðimde alt satýra geçiyor
		}
		if (uptemp != 0)
		{
			pictureBox1->Refresh();

		}
	}
	private: System::Void binaryToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		LPCTSTR output = L"C:\\Users\\asus\\Desktop\\image\\binaryimage.bmp";
		int* Hist = new int[256];
		int Threshold, T;
		FLOAT Wb = 0.0F, WbMean = 0.0f, Wf = 0.0f, WfMean = 0.0f, MaxT = 0.0f;
		FLOAT Wbsum = 0.0f;
		FLOAT Meansum = 0.0f;
		FLOAT Wfsum = 0.0f;//float ta int de var toplam deðerlerinide float yaparsak iki sayýnýn float bölümü float cýkar diðer türlü sonuc int çýkabilir
		FLOAT Thresholdarray[256];

		LPCTSTR input;
		CString str;
		int Width, Height;
		for (int i = 0; i < 256; i++)//salak visual studio direk ++ yapýnca bellekteki konumunu falan yazýyor böyle yapmadan çizmiyor gerizekalý bi dahakine aklýnda bulunsun dizilerde toplama yapacaksan ilk deger ata sabit bir ifade ver 
		{
			Hist[i] = 0;
			Thresholdarray[i] = 0.0f;
		}

		str = pictureBox1->ImageLocation;
		input = (LPCTSTR)str;
		BYTE* buffer = LoadBMP(Width, Height, Size, input);
		BYTE* Raw_Intensity = ConvertBMPToIntensity(buffer, Width, Height);
		/*//1.çözüm
		for (int i = 0; i < Width*Height; i++)
		{

			Hist[(int)Raw_Intensity[i]]++;
		}
		//Otsu
		for (T = 0; T < 256; T++)
		{

			for (int j = 0; j < T; j++)
			{
				Wbsum += Hist[j];
				Meansum += (j*Hist[j]);
			}

			Wb = Wbsum/ (Width * Height);
			if (Wbsum == 0)
			{
				Wbsum += 1;
			}
			WbMean = Meansum / Wbsum;
			Meansum = 0.0f;

			for (int i = T; i < 256; i++)
			{
				Wfsum += Hist[i];
				Meansum += (i*Hist[i]);
			}
			Wf = Wfsum/ (Width * Height);
			if (Wfsum == 0)
			{
				Wfsum += 1;
			}
			WfMean = Meansum / Wfsum;

			Thresholdarray[T] = (Wb * Wf)*(WbMean-WfMean)*(WbMean-WfMean);//binary yaparken bunun max degeri alýnýyor
			//sýfýrlama her deger için ayrý ayrý
			Meansum = 0.0f;
			Wf = 0.0f;
			Wfsum = 0.0f;
			WfMean = 0.0f;
			Wbsum = 0.0f;
			Wb = 0.0f;
			WbMean = 0.0f;
		}
		MaxT = Thresholdarray[0];
		for (int i = 1; i < 256; i++)
		{

			if (Thresholdarray[i] > MaxT)
			{
				MaxT = Thresholdarray[i];
			}
		}

		for (int i = 0; i < 256; i++)
		{
			if (Thresholdarray[i] == MaxT)
			{
				Threshold = i;
			}
		}
		*/
		//end Otsu
		int thres = D2_K_Mean_Clustering(Raw_Intensity, Width, Height);//2.method
		BYTE* binary = BinaryImage(Raw_Intensity, Width, Height, thres);
		BYTE* New_Image = ConvertIntensityToBMP(binary, Width, Height, Size);
		SaveBMP(New_Image, Width, Height, Size, output);


		pictureBox2->Width = Width;
		pictureBox2->Height = Height;
		Bitmap^ surface = gcnew Bitmap(Width, Height);
		pictureBox2->Image = surface;
		pictureBox2->AutoSize;
		Color c;
		int temp;
		for (unsigned int row = 0; row < Height; row++) {
			for (unsigned int column = 0; column < Width; column++)
			{
				temp = row * Width + column;
				c = Color::FromArgb(binary[temp], binary[temp], binary[temp]);
				surface->SetPixel(column, row, c);

			}
		}

	}

	private: System::Void clearToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		
		pictureBox1->Visible = false;
		pictureBox2->Visible = false;
		pictureBox2->Image = nullptr;
		
	}

	private: System::Void rGBScaleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CString str;
		str = pictureBox1->ImageLocation;
		input = (LPCTSTR)str;
		BYTE* buffer = LoadBMP(Width, Height, Size, input);
		BYTE* ptr = RGBScale(buffer, Width, Height, Size);

		//picturebox2 ye yeni resmi koymak için
		pictureBox2->Width = Width;
		pictureBox2->Height = Height;
		Bitmap^ surface = gcnew Bitmap(Width, Height);
		pictureBox2->Image = surface;

		Color c;
		int temp;
		for (unsigned int row = 0; row < Height; row++) {
			for (unsigned int column = 0; column < Width; column++)
			{
				temp = row * Width + column;
				c = Color::FromArgb(ptr[(3 * temp + 2)], ptr[(3 * temp) + 1], ptr[(3 * temp)]);
				surface->SetPixel(column, row, c);

			}
		}


	}
	private: System::Void dilationToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int Threshold;
		LPCTSTR input;
		CString str;
		int Width, Height;

		str = pictureBox1->ImageLocation;
		input = (LPCTSTR)str;
		BYTE* buffer = LoadBMP(Width, Height, Size, input);
		BYTE* Raw_Intensity = ConvertBMPToIntensity(buffer, Width, Height);
		Threshold = D2_K_Mean_Clustering(Raw_Intensity, Width, Height);
		BYTE* binary = BinaryImage(Raw_Intensity, Width, Height, Threshold);
		BYTE Mask[9] = { 1,1,1,1,1,1,1,1,1 };
		/*BYTE* Mask = new BYTE[3 * 3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				int tp = i *3 + j;
				Mask[tp] = 1;
			}
		}*/
		LPCTSTR output = L"C:\\Users\\asus\\Desktop\\image\\dilation.bmp";
		BYTE* dila = Dilation(binary, Width, Height, Mask, 3, 3);
		BYTE* New_Image = ConvertIntensityToBMP(dila, Width, Height, Size);
		SaveBMP(New_Image, Width, Height, Size, output);

		pictureBox2->Width = Width;
		pictureBox2->Height = Height;
		Bitmap^ surface = gcnew Bitmap(Width, Height);
		pictureBox2->Image = surface;

		Color c;
		int temp;
		for (unsigned int row = 0; row < Height; row++) {
			for (unsigned int column = 0; column < Width; column++)
			{
				temp = row * Width + column;
				c = Color::FromArgb(dila[temp], dila[temp], dila[temp]);
				surface->SetPixel(column, row, c);
			}
		}
	}
	private: System::Void erosionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int Threshold;
		LPCTSTR input;
		CString str;
		int Width, Height;

		str = pictureBox1->ImageLocation;
		input = (LPCTSTR)str;
		BYTE* buffer = LoadBMP(Width, Height, Size, input);
		BYTE* Raw_Intensity = ConvertBMPToIntensity(buffer, Width, Height);
		Threshold = D2_K_Mean_Clustering(Raw_Intensity, Width, Height);
		BYTE* binary = BinaryImage(Raw_Intensity, Width, Height, Threshold);
		BYTE Mask[9] = { 0,1,0,1,1,1,0,1,0 };

		/*BYTE* Mask = new BYTE[3 * 3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				int tp = i * 3 + j;
				Mask[tp] = 0;

			}
		}*/
		LPCTSTR output = L"C:\\Users\\asus\\Desktop\\image\\erosion.bmp";
		BYTE* erosion = Erosion(binary, Width, Height, Mask, 3, 3);
		BYTE* New_Image = ConvertIntensityToBMP(erosion, Width, Height, Size);
		SaveBMP(New_Image, Width, Height, Size, output);

		pictureBox2->Width = Width;
		pictureBox2->Height = Height;
		Bitmap^ surface = gcnew Bitmap(Width, Height);
		pictureBox2->Image = surface;

		Color c;
		int temp;
		for (unsigned int row = 0; row < Height; row++) {
			for (unsigned int column = 0; column < Width; column++)
			{
				temp = row * Width + column;
				c = Color::FromArgb(erosion[temp], erosion[temp], erosion[temp]);
				surface->SetPixel(column, row, c);
			}
		}
	}

	private: System::Void mirrorImageToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CString str;
		str = pictureBox1->ImageLocation;
		input = (LPCTSTR)str;
		BYTE* buffer = LoadBMP(Width, Height, Size, input);
		BYTE* ptr = MirrorImage(buffer, Size);

		//picturebox2 ye yeni resmi koymak için
		pictureBox2->Width = Width;
		pictureBox2->Height = Height;
		Bitmap^ surface = gcnew Bitmap(Width, Height);
		pictureBox2->Image = surface;

		Color c;
		int temp;
		for (unsigned int row = 0; row < Height; row++) {
			for (unsigned int column = 0; column < Width; column++)
			{
				temp = row * Width + column;
				c = Color::FromArgb(ptr[(3 * temp)], ptr[(3 * temp) + 1], ptr[(3 * temp) + 2]);
				surface->SetPixel(column, row, c);

			}
		}
	}

	private: System::Void rGBSegmentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CString str;
		str = pictureBox1->ImageLocation;
		input = (LPCTSTR)str;
		BYTE* buffer = LoadBMP(Width, Height, Size, input);
		BYTE* Raw_Intensity = ConvertBMPToIntensity(buffer, Width, Height);
		BYTE* intensegment = MULTID_K_Means_Clustering(Raw_Intensity, Width, Height, 5);
		//picturebox2 ye yeni resmi koymak için
		pictureBox2->Width = Width;
		pictureBox2->Height = Height;
		Bitmap^ surface = gcnew Bitmap(Width, Height);
		pictureBox2->Image = surface;

		Color c;
		int temp;
		for (unsigned int row = 0; row < Height; row++) {
			for (unsigned int column = 0; column < Width; column++)
			{
				temp = row * Width + column;
				c = Color::FromArgb(intensegment[temp], intensegment[temp], intensegment[temp]);
				surface->SetPixel(column, row, c);

			}
		}

	}
	private: System::Void rGBSegmentToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		LPCTSTR output = L"C:\\Users\\asus\\Desktop\\image\\rgbsegment.bmp";
		CString str;
		str = pictureBox1->ImageLocation;
		input = (LPCTSTR)str;
		BYTE* buffer = LoadBMP(Width, Height, Size, input);
		//BYTE* Raw_Intensity = ConvertBMPToIntensity(buffer, Width, Height);
		BYTE* rgb = RGBScale(buffer, Width, Height, Size);
		BYTE* rgbsegment = MultD_K_Means_Clustering(rgb, Width, Height, 3);
		SaveBMP(rgbsegment, Width, Height, Size, output);
		//picturebox2 ye yeni resmi koymak için
		pictureBox2->Width = Width;
		pictureBox2->Height = Height;
		Bitmap^ surface = gcnew Bitmap(Width, Height);
		pictureBox2->Image = surface;

		Color c;
		int temp;
		for (unsigned int row = 0; row < Height; row++) {
			for (unsigned int column = 0; column < Width; column++)
			{
				temp = row * Width + column;
				c = Color::FromArgb(rgbsegment[3 * temp + 2], rgbsegment[3 * temp + 1], rgbsegment[3 * temp]);
				surface->SetPixel(column, row, c);

			}
		}
	}


	private: System::Void boundaryToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int Threshold;
		LPCTSTR input;
		CString str;
		int Width, Height;
		LPCTSTR output = L"C:\\Users\\asus\\Desktop\\image\\boundary.bmp";

		str = pictureBox1->ImageLocation;
		input = (LPCTSTR)str;
		BYTE* buffer = LoadBMP(Width, Height, Size, input);
		BYTE* Raw_Intensity = ConvertBMPToIntensity(buffer, Width, Height);
		Threshold = D2_K_Mean_Clustering(Raw_Intensity, Width, Height);
		BYTE* binary = BinaryImage(Raw_Intensity, Width, Height, Threshold);
		BYTE Mask[9] = { 0,1,0,1,1,1,0,1,0 };
		/*BYTE* Mask = new BYTE[3 * 3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				int tp = i * 3 + j;
				Mask[tp] = 0;
			}
		}*/
		BYTE* erosion = Erosion(binary, Width, Height, Mask, 3, 3);
		BYTE* bound = Boundary(erosion, binary, Width, Height);
		BYTE* New_Image = ConvertIntensityToBMP(bound, Width, Height, Size);
		SaveBMP(New_Image, Width, Height, Size, output);


		pictureBox2->Width = Width;
		pictureBox2->Height = Height;
		Bitmap^ surface = gcnew Bitmap(Width, Height);
		pictureBox2->Image = surface;

		Color c;
		int temp;
		for (unsigned int row = 0; row < Height; row++) {
			for (unsigned int column = 0; column < Width; column++)
			{
				temp = row * Width + column;
				c = Color::FromArgb(bound[temp], bound[temp], bound[temp]);
				surface->SetPixel(column, row, c);
			}
		}

	}


	private: System::Void cCLToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CString str;
		str = pictureBox1->ImageLocation;
		input = (LPCTSTR)str;
		BYTE* buffer = LoadBMP(Width, Height, Size, input);
		BYTE* Raw_Intensity = ConvertBMPToIntensity(buffer, Width, Height);
		int Threshold = D2_K_Mean_Clustering(Raw_Intensity, Width, Height);
		BYTE* binary = BinaryImage(Raw_Intensity, Width, Height, Threshold);
		BYTE* rgb = RGBScale(buffer, Width, Height, Size);

		BYTE* label = CCL(binary, Width, Height);
		int sayi = CounterObject(label, Width, Height);
		BYTE* coloring = CCLColoring(label, rgb, Width, Height, Size);
		MessageBox::Show(sayi.ToString());

		pictureBox2->Width = Width;
		pictureBox2->Height = Height;
		Bitmap^ surface = gcnew Bitmap(Width, Height);
		pictureBox2->Image = surface;

		Color c;
		int temp;
		for (unsigned int row = 0; row < Height; row++) {
			for (unsigned int column = 0; column < Width; column++)
			{
				temp = row * Width + column;
				c = Color::FromArgb(coloring[3 * temp + 2], coloring[3 * temp + 1], coloring[3 * temp]);
				surface->SetPixel(column, row, c);
			}
		}


	}


	private: System::Void cannyEdgeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		CString str;
		str = pictureBox1->ImageLocation;
		input = (LPCTSTR)str;
		int Width, Height, tp;
		int m_w = 3;
		int m_h = 3;
		BYTE* buffer = LoadBMP(Width, Height, Size, input);
		BYTE* Raw_Intensity = ConvertBMPToIntensity(buffer, Width, Height);
		int w_new = Width - (m_w - 1);
		int h_new = Height - (m_h - 1);
		BYTE* display = new BYTE[w_new * h_new];
		int dikeytürev[9] = { 1,2,1,0,0,0,-1,-2,-1 };//mask
		int yataytürev[9] = { 1,0,-1,2,0,-2,1,0,-1 };
		int* deriveV = Convolution(Raw_Intensity, Width, Height, dikeytürev, m_w, m_h);
		int* deriveH = Convolution(Raw_Intensity, Width, Height, yataytürev, m_w, m_h);
		double* edgeimge = edgeimage(deriveH, deriveV, 1020, w_new, h_new);
		double* angle = gradient(deriveH, deriveV, w_new, h_new);
		double* nonmax = nms(edgeimge, angle, w_new, h_new);
		double* histt = histerize_threshold(nonmax, w_new, h_new);
		double* bedge = binaryedge(histt, angle, w_new, h_new);
		for (int row = 0; row < h_new; row++)
		{
			for (int col = 0; col < w_new; col++)
			{
				tp = row * w_new + col;
				display[tp] = edgeimge[tp];//edgeimge ve bedge alýr edgeimge türevlerden sonra direk cýkar diðeri nms den sonra
			}
		}
		int Threshold = D2_K_Mean_Clustering(display, Width, Height);
		BYTE* binary = BinaryImage(display, Width, Height, Threshold);//bu kýsým edge den nms siz kenarlarý bulma
		for (int row = 0; row < h_new; row++)
		{
			for (int col = 0; col < w_new; col++)
			{
				tp = row * w_new + col;
				if (display[tp] == 1)
				{
					display[tp] = 255;
				}
			}
		}
		
		pictureBox2->Width = w_new;
		pictureBox2->Height = h_new;
		Bitmap^ surface = gcnew Bitmap(w_new, h_new);
		pictureBox2->Image = surface;

		Color c;
		int temp;
		for (unsigned int row = 0; row < h_new; row++) {
			for (unsigned int column = 0; column < w_new; column++)
			{
				temp = row * w_new + column;
				c = Color::FromArgb(display[temp], display[temp], display[temp]);
				surface->SetPixel(column, row, c);
			}
		}
	}




	private: System::Void digitalZoomToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		CString str;
		int cur,zoom_param = (comboBox1->SelectedIndex+1)*2,newN,newM;
		str = pictureBox1->ImageLocation;
		input = (LPCTSTR)str;
		BYTE* buffer = LoadBMP(Width, Height, Size, input);
		BYTE* Raw_Intensity = ConvertBMPToIntensity(buffer, Width, Height);
		BYTE** resbuf;
		BYTE* newbuf;
		BYTE** inbuf = new BYTE * [Height];
		for (int i = 0; i < Height; i++)
		{
			inbuf[i] = new BYTE[Width];
		}
		for (int i = 0; i < Height; i++)
		{
			for (int j = 0; j < Width; j++)
			{
				cur = i * Width + j;
				inbuf[(cur - j) / Width][j] = Raw_Intensity[cur];
			}
		}
		resbuf = Digital_ZOOM(inbuf, Width, Height, zoom_param);
		//masksýz göstermek için
		newN = Width + (Width - 1) * (zoom_param - 1);
		newM = Height + (Height - 1) * (zoom_param - 1);
		newbuf = new BYTE[newM * newN];
		for (int i = 0; i < newM; i++)
		{
			for (int j = 0; j < newN; j++)
			{
				cur = i * newN + j;
				newbuf[cur] = resbuf[(cur - j) / newN][j];
			}
		}
		pictureBox2->Width = newN;
		pictureBox2->Height = newM;
		Bitmap^ surface = gcnew Bitmap(newN, newM);
		pictureBox2->Image = surface;

		Color c;
		int temp;
		for (unsigned int row = 0; row < newM; row++) {
			for (unsigned int column = 0; column < newN; column++)
			{
				temp = row * newN + column;
				c = Color::FromArgb((BYTE)newbuf[temp], (BYTE)newbuf[temp], (BYTE)newbuf[temp]);
				surface->SetPixel(column, row, c);
			}
		}

	}
	


private: System::Void digitalZoom2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ ss = pictureBox1->ImageLocation;
	int cur, newN, newM, sum = 0;
	std::string converted_xyz = msclr::interop::marshal_as< std::string >(ss);
	cv::Mat frame = cv::imread(converted_xyz, CV_LOAD_IMAGE_COLOR);//okumada sýkýntý var
	BYTE* buffer = new BYTE[frame.rows * frame.cols];
	for (int row = 0; row < frame.rows; row++)
	{
		for (int col = 0; col < frame.cols; col++)
		{
			cur = row * frame.cols + col;
			cv::Vec3b vec = frame.at<cv::Vec3b>(row, col);
			vec[2] *= 0.29;
			vec[1] *= 0.58;
			vec[0] *= 0.11;
			sum = vec[0] + vec[1] + vec[2];
			buffer[cur] = sum;
			sum = 0;
		}
	}//GRAY
	BYTE** resbuf;
	BYTE* newbuf;
		resbuf = Digital_ZOOM_2(buffer, Width, Height);
		newN = Width + (Width + 1);
		newM = Height + (Height + 1);
		
		newbuf = new BYTE[newM * newN];
		for (int i = 0; i < newM; i++)
		{
			for (int j = 0; j < newN; j++)
			{
				cur = i * newN + j;
				newbuf[cur] = resbuf[(cur - j) / newN][j];
			}
		}

		//buraya kadar digital zoom geçiþler sert filtre atmamýz lazým
		//zoom mask
		int m_w = 3;
		int m_h = 3;
		int w_new = newN - m_w + 1;
		int h_new = newM - m_h + 1;
		BYTE* newbuf_2 = new BYTE[w_new * h_new];
		double* newbuf_2d = new double[w_new * h_new];
		double* Mask1 = new double[m_w * m_h];
		Mask1[0] = 0.25; Mask1[2] = 0.25; Mask1[6] = 0.25; Mask1[8] = 0.25;
		Mask1[1] = 0.5; Mask1[3] = 0.5; Mask1[5] = 0.5; Mask1[7] = 0.5; Mask1[4] = 1;
		newbuf_2d = Convolution(newbuf, newN,newM, Mask1, m_w, m_h);
		for (int i = 0; i < w_new * h_new; i++)
		{
			newbuf_2[i] = newbuf_2d[i];
		}
		pictureBox2->Width = w_new;
		pictureBox2->Height = h_new;
		Bitmap^ surface = gcnew Bitmap(w_new, h_new);
		pictureBox2->Image = surface;

		Color c;
		int temp;
		for (unsigned int row = 0; row < h_new; row++) {
			for (unsigned int column = 0; column < w_new; column++)
			{
				temp = row * w_new + column;
				c = Color::FromArgb(newbuf_2[temp], newbuf_2[temp], newbuf_2[temp]);
				surface->SetPixel(column, row, c);
			}
		}
		
}
private: System::Void rgbDigitalZoom2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ ss = pictureBox1->ImageLocation;
	int cur, newN, newM, sum = 0;
	std::string converted_xyz = msclr::interop::marshal_as< std::string >(ss);
	cv::Mat frame = cv::imread(converted_xyz, CV_LOAD_IMAGE_COLOR);//okumada sýkýntý olabilir
	//RGB OKUMA
	BYTE* rgb = new BYTE[frame.total() * frame.channels()];
	for (int row = 0; row < frame.rows; row++)
	{
		for (int col = 0; col < frame.cols; col++)
		{
			cur = row * frame.cols + col;
			cv::Vec3b vec = frame.at<cv::Vec3b>(row,col);
			rgb[frame.channels() * cur] = vec[2];//R
			rgb[frame.channels() * cur + 1] = vec[1];//G
			rgb[frame.channels() * cur + 2] = vec[0];//B
		}
	}
	//RGB 3 boyutlu
	BYTE* resbuf;
	resbuf = Digital_ZOOM_RGB_2(rgb,frame.cols,frame.rows ,frame.channels());
	newN = 2 * frame.cols + 1;
	newM = 2 * frame.rows + 1;
	//buraya kadar digital zoom geçiþler sert filtre atmamýz lazým
	
	//zoom mask

	int m_w = 3;
	int m_h = 3;
	int w_new = newN - m_w + 1;
	int h_new = newM - m_h + 1;
	BYTE* newbuf_2 = new BYTE[w_new * h_new*frame.channels()];//donen resim 3D olacak
	double* newbuf_2d = new double[w_new * h_new*frame.channels()];
	double* Mask1 = new double[m_w * m_h];
	Mask1[0] = 0.25; Mask1[2] = 0.25; Mask1[6] = 0.25; Mask1[8] = 0.25;
	Mask1[1] = 0.5; Mask1[3] = 0.5; Mask1[5] = 0.5; Mask1[7] = 0.5; Mask1[4] = 1;
	newbuf_2d = Convolution3D(resbuf, newN, newM, Mask1, m_w, m_h);
	for (int i = 0; i < w_new * h_new*frame.channels(); i++)
	{
		newbuf_2[i] = newbuf_2d[i];
	}
	
	pictureBox2->Width = w_new;
	pictureBox2->Height = h_new;
	Bitmap^ surface = gcnew Bitmap(w_new, h_new);
	pictureBox2->Image = surface;

	Color c;
	int temp;
	for (unsigned int row = 0; row < h_new; row++) {
		for (unsigned int column = 0; column < w_new; column++)
		{
			temp = row * w_new + column;
			c = Color::FromArgb(newbuf_2[frame.channels()*temp], newbuf_2[frame.channels()*temp+1], newbuf_2[frame.channels()*temp + 2]);
			surface->SetPixel(column, row, c);
		}
	}

}

private: System::Void rgbDigitalZoomToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ss = pictureBox1->ImageLocation;
	int cur, newN, newM, sum = 0;
	int recount = (int)System::Convert::ToInt32(textBox1->Text->ToString());
	int index = comboBox2->SelectedIndex;
	std::string converted_xyz = msclr::interop::marshal_as< std::string >(ss);
	cv::Mat frame = cv::imread(converted_xyz, CV_LOAD_IMAGE_COLOR);//okumada sýkýntý olabilir
	//RGB OKUMA
	BYTE* rgb = new BYTE[frame.total() * frame.channels()];
	for (int row = 0; row < frame.rows; row++)
	{
		for (int col = 0; col < frame.cols; col++)
		{
			cur = row * frame.cols + col;
			cv::Vec3b vec = frame.at<cv::Vec3b>(row, col);
			rgb[frame.channels() * cur] = vec[2];//R
			rgb[frame.channels() * cur + 1] = vec[1];//G
			rgb[frame.channels() * cur + 2] = vec[0];//B
		}
	}
	//RGB 3 boyutlu
	newN = frame.cols;
	newM = frame.rows;
	BYTE* resbuf;
	BYTE* newbuf_2; double* newbuf_2d;
	int m_w = 3;
	int m_h = 3;
	double* Mask1 = new double[m_w * m_h];
	if (index == 0)
	{
		for (int i = 0; i < m_w * m_h; i++)
		{
			Mask1[i] = 0.11;//mean filter hepsi 0.11
		}
	}
	else if (index == 2)
	{
		//lpf
		Mask1[0] = 0; Mask1[2] = 0; Mask1[6] = 0; Mask1[8] = 0;
		Mask1[1] = 0; Mask1[3] = 0; Mask1[5] = 0; Mask1[7] = 0; Mask1[4] = 1;
	}
	else if (index == 1)
	{
		//laplace
		Mask1[0] = 0; Mask1[2] = 0; Mask1[6] = 0; Mask1[8] = 0;
		Mask1[1] = -1; Mask1[3] = -1; Mask1[5] = -1; Mask1[7] = -1; Mask1[4] = 4;
	}
	else if (index == 3)
	{
		Mask1[0] = 1; Mask1[2] = 1; Mask1[6] = 1; Mask1[8] = 1;
		Mask1[1] = 1; Mask1[3] = 1; Mask1[5] = 1; Mask1[7] = 1; Mask1[4] = 0;
	}
	else if (index == 4)
	{
		Mask1[0] = 0; Mask1[2] = 0; Mask1[6] = 0; Mask1[8] = 0;
		Mask1[1] = -0.66; Mask1[3] = -0.66; Mask1[5] = -0.66; Mask1[7] = -0.66; Mask1[4] = 3.66;
	}
	
	for (int i = 0; i < recount; i++)
	{
		newbuf_2 = new BYTE[newN * newM * frame.channels()];//donen resim 3D olacak
		newbuf_2d = new double[newN * newM * frame.channels()];
		newbuf_2d = Convolution3DWithPadding(rgb, newN, newM, Mask1, m_w, m_h);
		for (int i = 0; i < newM * newN * frame.channels(); i++)
		{
			newbuf_2[i] = newbuf_2d[i];
		}
		rgb = newbuf_2;
	}
	
	//zoom mask
	pictureBox2->Width = newN;
	pictureBox2->Height = newM ;
	Bitmap^ surface = gcnew Bitmap(newN, newM);
	pictureBox2->Image = surface;

	Color c;
	int temp;
	for (unsigned int row = 0; row < newM; row++) {
		for (unsigned int column = 0; column < newN; column++)
		{
			temp = row * newN + column;
			c = Color::FromArgb(newbuf_2[frame.channels() * temp], newbuf_2[frame.channels() * temp + 1], newbuf_2[frame.channels() * temp + 2]);
			surface->SetPixel(column, row, c);
		}
	}
}
private: System::Void rgbDigitalZoomToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ss = pictureBox1->ImageLocation;
	int cur, newN, newM, sum = 0;
	std::string converted_xyz = msclr::interop::marshal_as< std::string >(ss);
	cv::Mat frame = cv::imread(converted_xyz, CV_LOAD_IMAGE_COLOR);//okumada sýkýntý olabilir
	//RGB OKUMA
	BYTE* rgb = new BYTE[frame.total() * frame.channels()];
	for (int row = 0; row < frame.rows; row++)
	{
		for (int col = 0; col < frame.cols; col++)
		{
			cur = row * frame.cols + col;
			cv::Vec3b vec = frame.at<cv::Vec3b>(row, col);
			rgb[frame.channels() * cur] = vec[2];//R
			rgb[frame.channels() * cur + 1] = vec[1];//G
			rgb[frame.channels() * cur + 2] = vec[0];//B
		}
	}
	//RGB 3 boyutlu
	newN = frame.cols;
	newM = frame.rows;
	BYTE* resbuf;
	BYTE* newbuf_2; double* newbuf_2d;
	BYTE* cropbuf;
	int m_w = 3;
	int m_h = 3;
	double* Mask1 = new double[m_w * m_h];
	Mask1[0] = 0.25; Mask1[2] = 0.25; Mask1[6] = 0.25; Mask1[8] = 0.25;
	Mask1[1] = 0.5; Mask1[3] = 0.5; Mask1[5] = 0.5; Mask1[7] = 0.5; Mask1[4] = 1;
	for (int i = 0; i < comboBox1->SelectedIndex + 1; i++)
	{
		resbuf = Digital_ZOOM_RGB_2(rgb, newN, newM, frame.channels());
		newN = 2 * newN + 1;
		newM = 2 * newM + 1;
		newbuf_2 = new BYTE[newN * newM * frame.channels()];//donen resim 3D olacak
		newbuf_2d = new double[newN * newM * frame.channels()];
		newbuf_2d = Convolution3DWithPadding(resbuf, newN, newM, Mask1, m_w, m_h);//bunun yerine interpolasyon yap 4*4
		for (int i = 0; i < newM * newN * frame.channels(); i++)
		{
			newbuf_2[i] = newbuf_2d[i];
		}
		rgb = newbuf_2;
	}
	//resmi kaydetme
	cv::Mat frame_save(newM, newN, CV_8UC3);
	for (int row = 0; row < newM; row++)
	{
		for (int col = 0; col < newN; col++)
		{
			cur = row * newN + col;
			cv::Vec3b vec;
			vec[2] = rgb[frame.channels() * cur];//R
			vec[1] = rgb[frame.channels() * cur + 1];//G
			vec[0] = rgb[frame.channels() * cur + 2];//B
			frame_save.at<cv::Vec3b>(row, col) = vec;
		}
	}
	
	std::vector<int> compression_params;
	compression_params.push_back(CV_IMWRITE_JPEG_OPTIMIZE);
	compression_params.push_back(100);
	cv::imwrite("C:\\Users\\asus\\Desktop\\ZoomImage.jpg", frame_save, compression_params);
	cv::imshow("Frame", frame_save);
	
	
	pictureBox2->Width = newN;
	pictureBox2->Height = newM;
	Bitmap^ surface = gcnew Bitmap(newN, newM);
	pictureBox2->Image = surface;

	Color c;
	int temp;
	for (unsigned int row = 0; row < newM; row++) {
		for (unsigned int column = 0; column < newN; column++)
		{
			temp = row * newN + column;
			c = Color::FromArgb(newbuf_2[frame.channels() * temp], newbuf_2[frame.channels() * temp + 1], newbuf_2[frame.channels() * temp + 2]);
			surface->SetPixel(column, row, c);
		}
	}//picturebox a basma
}
private: System::Void saltPepperNoiseElmToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ss = pictureBox1->ImageLocation;
	int cur, newN, newM, sum = 0;
	int recount = (int)System::Convert::ToInt32(textBox1->Text->ToString());
	std::string converted_xyz = msclr::interop::marshal_as< std::string >(ss);
	cv::Mat frame = cv::imread(converted_xyz, CV_LOAD_IMAGE_COLOR);//okumada sýkýntý olabilir
	//RGB OKUMA
	BYTE* rgb = new BYTE[frame.total() * frame.channels()];
	for (int row = 0; row < frame.rows; row++)
	{
		for (int col = 0; col < frame.cols; col++)
		{
			cur = row * frame.cols + col;
			cv::Vec3b vec = frame.at<cv::Vec3b>(row, col);
			rgb[frame.channels() * cur] = vec[2];//R
			rgb[frame.channels() * cur + 1] = vec[1];//G
			rgb[frame.channels() * cur + 2] = vec[0];//B
		}
	}
	//RGB 3 boyutlu
	newN = frame.cols;
	newM = frame.rows;
	BYTE* resbuf;
	BYTE* newbuf_2; double* newbuf_2d;
	int m_w = 3;
	int m_h = 3;
	for (int i = 0; i < recount; i++)
	{
		newbuf_2 = new BYTE[newN * newM * frame.channels()];//donen resim 3D olacak
		newbuf_2d = new double[newN * newM * frame.channels()];
		newbuf_2d = Convolution3DWPSaltPepper(rgb, newN, newM, m_w, m_h);
		for (int i = 0; i < newM * newN * frame.channels(); i++)
		{
			newbuf_2[i] = newbuf_2d[i];
		}
		rgb = newbuf_2;//maske 1 den fazla gezince 
	}
	
	//zoom mask
	pictureBox2->Width = newN;
	pictureBox2->Height = newM;
	Bitmap^ surface = gcnew Bitmap(newN, newM);
	pictureBox2->Image = surface;

	Color c;
	int temp;
	for (unsigned int row = 0; row < newM; row++) {
		for (unsigned int column = 0; column < newN; column++)
		{
			temp = row * newN + column;
			c = Color::FromArgb(newbuf_2[frame.channels() * temp], newbuf_2[frame.channels() * temp + 1], newbuf_2[frame.channels() * temp + 2]);
			surface->SetPixel(column, row, c);
		}
	}
}
private: System::Void grayScaleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ss = pictureBox1->ImageLocation;
	int cur, newN, newM, sum = 0;
	std::string converted_xyz = msclr::interop::marshal_as< std::string >(ss);
	cv::Mat frame = cv::imread(converted_xyz, CV_LOAD_IMAGE_COLOR);//okumada sýkýntý var
	BYTE* buffer = new BYTE[frame.rows * frame.cols];
	for (int row = 0; row < frame.rows; row++)
	{
		for (int col = 0; col < frame.cols; col++)
		{
			cur = row * frame.cols + col;
			cv::Vec3b vec = frame.at<cv::Vec3b>(row, col);
			vec[2] *= 0.29;
			vec[1] *= 0.58;
			vec[0] *= 0.11;
			sum = vec[0] + vec[1] + vec[2];
			buffer[cur] = sum;
			sum = 0;
		}
	}//GRAY
	BYTE* newbuf_2;
	double* newbuf;
	int w_new = frame.cols;
	int h_new = frame.rows;
	newbuf_2 = new BYTE[frame.total()];
	newbuf = RotationImage(buffer, w_new, h_new,-180);
	for (int i = 0; i < w_new * h_new; i++)
	{
		newbuf_2[i] = newbuf[i];
	}
	pictureBox2->Width = w_new;
	pictureBox2->Height = h_new;
	Bitmap^ surface = gcnew Bitmap(w_new, h_new);
	pictureBox2->Image = surface;

	Color c;
	int temp;
	for (unsigned int row = 0; row < h_new; row++) {
		for (unsigned int column = 0; column < w_new; column++)
		{
			temp = row * w_new + column;
			c = Color::FromArgb(newbuf_2[temp], newbuf_2[temp], newbuf_2[temp]);
			surface->SetPixel(column, row, c);
		}
	}
}
};
}
//end point