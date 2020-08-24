#pragma once
#include<opencv2/opencv.hpp>
#include<opencv2/core.hpp>
#include<opencv2/features2d.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgcodecs.hpp>
#include<opencv2/imgproc.hpp>
#include "imge.h"
#include <Windows.h>
#include <atlstr.h>
#include<math.h>
#include<float.h>
#include<winnt.h>
#include<string.h>
namespace imageOpenCV {

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
	private: System::Windows::Forms::ToolStripMenuItem^ rEADIMAGEToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fROMFÝLEToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ oPENCAMERAToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pROCESSÝNGToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cANNYEDGEToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dÝLATÝONToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eROSÝONToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ oPENÝNGToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cLOSÝNGToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ lABELÝNGToolStripMenuItem;











	private: System::Windows::Forms::ToolStripMenuItem^ gRAYSCALEToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ bINARYIMAGEToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ bOUNDARYToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rGBSEGMENTATIONToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ToolStripMenuItem^ pROCESSÝNG2ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ gAUSSÝANBLURToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mEANFILTERToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ hIGHPASSFILTERToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ lOWPASSFILTERToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ lAPLACEFILTERToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ kÝRCHOFFFILTERToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dÝGÝTALZOOMToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dÝGÝTALZOOM2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ digitalZoom2xXkDenemeToolStripMenuItem;
	protected:

	private:
		/// <summary>
		///Gerekli tasarýmcý deðiþkeni.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasarýmcý desteði için gerekli metot - bu metodun 
		///içeriðini kod düzenleyici ile deðiþtirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->rEADIMAGEToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fROMFÝLEToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oPENCAMERAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pROCESSÝNGToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cANNYEDGEToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dÝLATÝONToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eROSÝONToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oPENÝNGToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cLOSÝNGToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lABELÝNGToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gRAYSCALEToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bINARYIMAGEToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bOUNDARYToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rGBSEGMENTATIONToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pROCESSÝNG2ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gAUSSÝANBLURToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mEANFILTERToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hIGHPASSFILTERToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lOWPASSFILTERToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lAPLACEFILTERToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kÝRCHOFFFILTERToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dÝGÝTALZOOMToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dÝGÝTALZOOM2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->digitalZoom2xXkDenemeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->rEADIMAGEToolStripMenuItem,
					this->pROCESSÝNGToolStripMenuItem, this->pROCESSÝNG2ToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(500, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// rEADIMAGEToolStripMenuItem
			// 
			this->rEADIMAGEToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fROMFÝLEToolStripMenuItem,
					this->oPENCAMERAToolStripMenuItem
			});
			this->rEADIMAGEToolStripMenuItem->Name = L"rEADIMAGEToolStripMenuItem";
			this->rEADIMAGEToolStripMenuItem->Size = System::Drawing::Size(110, 24);
			this->rEADIMAGEToolStripMenuItem->Text = L"READ IMAGE";
			// 
			// fROMFÝLEToolStripMenuItem
			// 
			this->fROMFÝLEToolStripMenuItem->Name = L"fROMFÝLEToolStripMenuItem";
			this->fROMFÝLEToolStripMenuItem->Size = System::Drawing::Size(193, 26);
			this->fROMFÝLEToolStripMenuItem->Text = L"FROM FÝLE";
			// 
			// oPENCAMERAToolStripMenuItem
			// 
			this->oPENCAMERAToolStripMenuItem->Name = L"oPENCAMERAToolStripMenuItem";
			this->oPENCAMERAToolStripMenuItem->Size = System::Drawing::Size(193, 26);
			this->oPENCAMERAToolStripMenuItem->Text = L"OPEN CAMERA";
			this->oPENCAMERAToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::oPENCAMERAToolStripMenuItem_Click);
			// 
			// pROCESSÝNGToolStripMenuItem
			// 
			this->pROCESSÝNGToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->cANNYEDGEToolStripMenuItem,
					this->dÝLATÝONToolStripMenuItem, this->eROSÝONToolStripMenuItem, this->oPENÝNGToolStripMenuItem, this->cLOSÝNGToolStripMenuItem,
					this->lABELÝNGToolStripMenuItem, this->gRAYSCALEToolStripMenuItem, this->bINARYIMAGEToolStripMenuItem, this->bOUNDARYToolStripMenuItem,
					this->rGBSEGMENTATIONToolStripMenuItem
			});
			this->pROCESSÝNGToolStripMenuItem->Name = L"pROCESSÝNGToolStripMenuItem";
			this->pROCESSÝNGToolStripMenuItem->Size = System::Drawing::Size(109, 24);
			this->pROCESSÝNGToolStripMenuItem->Text = L"PROCESSÝNG";
			// 
			// cANNYEDGEToolStripMenuItem
			// 
			this->cANNYEDGEToolStripMenuItem->Name = L"cANNYEDGEToolStripMenuItem";
			this->cANNYEDGEToolStripMenuItem->Size = System::Drawing::Size(232, 26);
			this->cANNYEDGEToolStripMenuItem->Text = L"CANNY EDGE";
			this->cANNYEDGEToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cANNYEDGEToolStripMenuItem_Click);
			// 
			// dÝLATÝONToolStripMenuItem
			// 
			this->dÝLATÝONToolStripMenuItem->Name = L"dÝLATÝONToolStripMenuItem";
			this->dÝLATÝONToolStripMenuItem->Size = System::Drawing::Size(232, 26);
			this->dÝLATÝONToolStripMenuItem->Text = L"DÝLATÝON";
			this->dÝLATÝONToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::dÝLATÝONToolStripMenuItem_Click);
			// 
			// eROSÝONToolStripMenuItem
			// 
			this->eROSÝONToolStripMenuItem->Name = L"eROSÝONToolStripMenuItem";
			this->eROSÝONToolStripMenuItem->Size = System::Drawing::Size(232, 26);
			this->eROSÝONToolStripMenuItem->Text = L"EROSÝON";
			this->eROSÝONToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::eROSÝONToolStripMenuItem_Click);
			// 
			// oPENÝNGToolStripMenuItem
			// 
			this->oPENÝNGToolStripMenuItem->Name = L"oPENÝNGToolStripMenuItem";
			this->oPENÝNGToolStripMenuItem->Size = System::Drawing::Size(232, 26);
			this->oPENÝNGToolStripMenuItem->Text = L"OPENÝNG";
			this->oPENÝNGToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::oPENÝNGToolStripMenuItem_Click);
			// 
			// cLOSÝNGToolStripMenuItem
			// 
			this->cLOSÝNGToolStripMenuItem->Name = L"cLOSÝNGToolStripMenuItem";
			this->cLOSÝNGToolStripMenuItem->Size = System::Drawing::Size(232, 26);
			this->cLOSÝNGToolStripMenuItem->Text = L"CLOSÝNG";
			this->cLOSÝNGToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cLOSÝNGToolStripMenuItem_Click);
			// 
			// lABELÝNGToolStripMenuItem
			// 
			this->lABELÝNGToolStripMenuItem->Name = L"lABELÝNGToolStripMenuItem";
			this->lABELÝNGToolStripMenuItem->Size = System::Drawing::Size(232, 26);
			this->lABELÝNGToolStripMenuItem->Text = L"LABELÝNG";
			this->lABELÝNGToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::lABELÝNGToolStripMenuItem_Click);
			// 
			// gRAYSCALEToolStripMenuItem
			// 
			this->gRAYSCALEToolStripMenuItem->Name = L"gRAYSCALEToolStripMenuItem";
			this->gRAYSCALEToolStripMenuItem->Size = System::Drawing::Size(232, 26);
			this->gRAYSCALEToolStripMenuItem->Text = L"GRAY SCALE";
			this->gRAYSCALEToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::gRAYSCALEToolStripMenuItem_Click);
			// 
			// bINARYIMAGEToolStripMenuItem
			// 
			this->bINARYIMAGEToolStripMenuItem->Name = L"bINARYIMAGEToolStripMenuItem";
			this->bINARYIMAGEToolStripMenuItem->Size = System::Drawing::Size(232, 26);
			this->bINARYIMAGEToolStripMenuItem->Text = L"BINARY IMAGE";
			this->bINARYIMAGEToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::bINARYIMAGEToolStripMenuItem_Click);
			// 
			// bOUNDARYToolStripMenuItem
			// 
			this->bOUNDARYToolStripMenuItem->Name = L"bOUNDARYToolStripMenuItem";
			this->bOUNDARYToolStripMenuItem->Size = System::Drawing::Size(232, 26);
			this->bOUNDARYToolStripMenuItem->Text = L"BOUNDARY";
			this->bOUNDARYToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::bOUNDARYToolStripMenuItem_Click);
			// 
			// rGBSEGMENTATIONToolStripMenuItem
			// 
			this->rGBSEGMENTATIONToolStripMenuItem->Name = L"rGBSEGMENTATIONToolStripMenuItem";
			this->rGBSEGMENTATIONToolStripMenuItem->Size = System::Drawing::Size(232, 26);
			this->rGBSEGMENTATIONToolStripMenuItem->Text = L"RGB SEGMENTATION";
			this->rGBSEGMENTATIONToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rGBSEGMENTATIONToolStripMenuItem_Click);
			// 
			// pROCESSÝNG2ToolStripMenuItem1
			// 
			this->pROCESSÝNG2ToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->gAUSSÝANBLURToolStripMenuItem,
					this->mEANFILTERToolStripMenuItem, this->hIGHPASSFILTERToolStripMenuItem, this->lOWPASSFILTERToolStripMenuItem, this->lAPLACEFILTERToolStripMenuItem,
					this->kÝRCHOFFFILTERToolStripMenuItem, this->dÝGÝTALZOOMToolStripMenuItem, this->dÝGÝTALZOOM2ToolStripMenuItem, this->digitalZoom2xXkDenemeToolStripMenuItem
			});
			this->pROCESSÝNG2ToolStripMenuItem1->Name = L"pROCESSÝNG2ToolStripMenuItem1";
			this->pROCESSÝNG2ToolStripMenuItem1->Size = System::Drawing::Size(123, 24);
			this->pROCESSÝNG2ToolStripMenuItem1->Text = L"PROCESSÝNG_2";
			// 
			// gAUSSÝANBLURToolStripMenuItem
			// 
			this->gAUSSÝANBLURToolStripMenuItem->Name = L"gAUSSÝANBLURToolStripMenuItem";
			this->gAUSSÝANBLURToolStripMenuItem->Size = System::Drawing::Size(270, 26);
			this->gAUSSÝANBLURToolStripMenuItem->Text = L"GAUSSÝAN BLUR";
			this->gAUSSÝANBLURToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::gAUSSÝANBLURToolStripMenuItem_Click);
			// 
			// mEANFILTERToolStripMenuItem
			// 
			this->mEANFILTERToolStripMenuItem->Name = L"mEANFILTERToolStripMenuItem";
			this->mEANFILTERToolStripMenuItem->Size = System::Drawing::Size(270, 26);
			this->mEANFILTERToolStripMenuItem->Text = L"MEAN FILTER";
			this->mEANFILTERToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::mEANFILTERToolStripMenuItem_Click);
			// 
			// hIGHPASSFILTERToolStripMenuItem
			// 
			this->hIGHPASSFILTERToolStripMenuItem->Name = L"hIGHPASSFILTERToolStripMenuItem";
			this->hIGHPASSFILTERToolStripMenuItem->Size = System::Drawing::Size(270, 26);
			this->hIGHPASSFILTERToolStripMenuItem->Text = L"HIGH PASS FILTER";
			this->hIGHPASSFILTERToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::hIGHPASSFILTERToolStripMenuItem_Click);
			// 
			// lOWPASSFILTERToolStripMenuItem
			// 
			this->lOWPASSFILTERToolStripMenuItem->Name = L"lOWPASSFILTERToolStripMenuItem";
			this->lOWPASSFILTERToolStripMenuItem->Size = System::Drawing::Size(270, 26);
			this->lOWPASSFILTERToolStripMenuItem->Text = L"LOW PASS FILTER";
			this->lOWPASSFILTERToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::lOWPASSFILTERToolStripMenuItem_Click);
			// 
			// lAPLACEFILTERToolStripMenuItem
			// 
			this->lAPLACEFILTERToolStripMenuItem->Name = L"lAPLACEFILTERToolStripMenuItem";
			this->lAPLACEFILTERToolStripMenuItem->Size = System::Drawing::Size(270, 26);
			this->lAPLACEFILTERToolStripMenuItem->Text = L"LAPLACE FILTER";
			this->lAPLACEFILTERToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::lAPLACEFILTERToolStripMenuItem_Click);
			// 
			// kÝRCHOFFFILTERToolStripMenuItem
			// 
			this->kÝRCHOFFFILTERToolStripMenuItem->Name = L"kÝRCHOFFFILTERToolStripMenuItem";
			this->kÝRCHOFFFILTERToolStripMenuItem->Size = System::Drawing::Size(270, 26);
			this->kÝRCHOFFFILTERToolStripMenuItem->Text = L"KÝRCHOFF FILTER";
			this->kÝRCHOFFFILTERToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::kÝRCHOFFFILTERToolStripMenuItem_Click);
			// 
			// dÝGÝTALZOOMToolStripMenuItem
			// 
			this->dÝGÝTALZOOMToolStripMenuItem->Name = L"dÝGÝTALZOOMToolStripMenuItem";
			this->dÝGÝTALZOOMToolStripMenuItem->Size = System::Drawing::Size(270, 26);
			this->dÝGÝTALZOOMToolStripMenuItem->Text = L"DÝGÝTAL ZOOM";
			this->dÝGÝTALZOOMToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::dÝGÝTALZOOMToolStripMenuItem_Click);
			// 
			// dÝGÝTALZOOM2ToolStripMenuItem
			// 
			this->dÝGÝTALZOOM2ToolStripMenuItem->Name = L"dÝGÝTALZOOM2ToolStripMenuItem";
			this->dÝGÝTALZOOM2ToolStripMenuItem->Size = System::Drawing::Size(270, 26);
			this->dÝGÝTALZOOM2ToolStripMenuItem->Text = L"DÝGÝTAL ZOOM_2";
			this->dÝGÝTALZOOM2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::dÝGÝTALZOOM2ToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(214, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Labeling Ýslemindeki Obje Sayýsý:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(273, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"label2";
			// 
			// digitalZoom2xXkDenemeToolStripMenuItem
			// 
			this->digitalZoom2xXkDenemeToolStripMenuItem->Name = L"digitalZoom2xXkDenemeToolStripMenuItem";
			this->digitalZoom2xXkDenemeToolStripMenuItem->Size = System::Drawing::Size(270, 26);
			this->digitalZoom2xXkDenemeToolStripMenuItem->Text = L"Digital zoom2x xk deneme";
			this->digitalZoom2xXkDenemeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::digitalZoom2xXkDenemeToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(500, 259);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void oPENCAMERAToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		int deviceID = 0, channels, cur;
		cv::VideoCapture cap(deviceID);
		Color c;
		cv::Mat frame;
		Bitmap^ surface;
		BYTE* img;
		
			while(cap.isOpened())
			{
				// wait for a new frame from camera and store it into 'frame'
				cap.read(frame);
				// check if we succeeded
				if (frame.empty()) {
					std::cerr << "ERROR! blank frame grabbed\n";
					break;
				}
				/*img = new BYTE[frame.total()*frame.channels()];//picturebox üzerine çizme
				surface = gcnew Bitmap(frame.cols, frame.rows);
				Graphics^ g = pictureBox1->CreateGraphics();
				pictureBox1->Width = frame.cols;
				pictureBox1->Height = frame.rows;
				pictureBox1->AutoSize;
				channels = frame.channels();
				for (int row = 0; row < frame.rows; row++)
				{
					for (int col = 0; col < frame.cols; col++)
					{
						cur = row * frame.cols + col;
						cv::Vec3b vec = frame.at<cv::Vec3b>(row, col);
						img[cur * channels] = vec[2];//R
						img[cur * channels + 1] = vec[1];//G
						img[cur * channels + 2] = vec[0];//B
						//System::Diagnostics::Debug::Write(img[cur * channels].ToString() + " " + img[cur * channels + 1].ToString() + " " + img[cur * channels + 2].ToString());
						c = Color::FromArgb(vec[2],vec[1],vec[0]);
						surface->SetPixel(col, row, c);
					}
				}
				g->DrawImage(surface, 0, 0, frame.cols, frame.rows);
				//pictureBox1->Refresh();// 3 saatimi yedin seni asla unutmayacaðým ý dont forget you because you eat my three hours
				delete[] img;
				delete surface;*/
				cv::imshow("gray", frame);
				//islemleri biz yapýp imshow üzerindede sonucu görebiliriz
				// show live and wait for a key with timeout long enough to show images
				if(cv::waitKey(10) == 27);
					break;//bu olmadan imshow calýsmaz
				//üstteki gibi picturebox a yazabiliriz
			}
			cv::destroyAllWindows();
			// wait for a new frame from camera and store it into 'frame'
			
		
	}
private: System::Void gRAYSCALEToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
		int deviceID = 0,sum = 0;
		cv::VideoCapture cap(deviceID);
		cv::Mat frame;

		while (cap.isOpened())
		{
			// wait for a new frame from camera and store it into 'frame'
			cap.read(frame);
			// check if we succeeded
			if (frame.empty()) {
				std::cerr << "ERROR! blank frame grabbed\n";
				break;
			}
			for (int row = 0; row < frame.rows; row++)
			{
				for (int col = 0; col < frame.cols; col++)
				{
					cv::Vec3b vec = frame.at<cv::Vec3b>(row, col);
					vec[2] *= 0.29;
					vec[1] *= 0.58;
					vec[0] *= 0.11;
					sum = vec[0] + vec[1] + vec[2];
					for (int i = 0; i < frame.channels(); i++)
					{
						vec[i] = sum;
					}
					frame.at<cv::Vec3b>(row, col) = vec;
					sum = 0;
				}
			}
			cv::imshow("Gray Scale Image", frame);
			if (cv::waitKey(1) == 27)
				break;
		}
		cv::destroyWindow("Gray Scale Image");
		// wait for a new frame from camera and store it into 'frame'
	
}
private: System::Void bINARYIMAGEToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
		int deviceID = 0, sum = 0,cur,thres;
		cv::VideoCapture cap(deviceID);
		cv::Mat frame;
		BYTE* buffer;
		BYTE* newbuf;

		while (cap.isOpened())
		{
			// wait for a new frame from camera and store it into 'frame'
			cap.read(frame);
			buffer = new BYTE[frame.total()];//one channel
			// check if we succeeded
			if (frame.empty()) {
				std::cerr << "ERROR! blank frame grabbed\n";
				break;
			}
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
			}
			thres = D2_K_Mean_Clustering(buffer, frame.cols, frame.rows);
			newbuf = BinaryImage(buffer, frame.cols, frame.rows,thres);
			for (int row = 0; row < frame.rows; row++)
			{
				for (int col = 0; col < frame.cols; col++)
				{
					cv::Vec3b vec_two;
					vec_two[2] = newbuf[row * frame.cols + col];
					vec_two[1] = newbuf[row * frame.cols + col];
					vec_two[0] = newbuf[row * frame.cols + col];
					frame.at<cv::Vec3b>(row, col) = vec_two;
				}
			}
			cv::imshow("Binary Image", frame);
			if (cv::waitKey(1) == 27)
				break;
		}
		cv::destroyWindow("Binary Image");

		// wait for a new frame from camera and store it into 'frame'
	
}
private: System::Void dÝLATÝONToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
		int deviceID = 0, sum = 0, cur, thres;
		cv::VideoCapture cap(deviceID);
		cv::Mat frame;
		BYTE* buffer;
		BYTE* newbuf;
		BYTE* dilation;
		BYTE Mask[9] = { 1,1,1,1,1,1,1,1,1 };
		while (cap.isOpened())
		{
			// wait for a new frame from camera and store it into 'frame'
			cap.read(frame);
			buffer = new BYTE[frame.total()];//one channel
			// check if we succeeded
			if (frame.empty()) {
				std::cerr << "ERROR! blank frame grabbed\n";
				break;
			}
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
			}
			thres = D2_K_Mean_Clustering(buffer, frame.cols, frame.rows);
			newbuf = BinaryImage(buffer, frame.cols, frame.rows, thres);
			dilation = Dilation(newbuf, frame.cols, frame.rows, Mask, 3, 3);
			for (int row = 0; row < frame.rows; row++)
			{
				for (int col = 0; col < frame.cols; col++)//-(masksize -1)
				{
					cv::Vec3b vec_two;
					vec_two[2] = dilation[(row * frame.cols) + col];
					vec_two[1] = dilation[(row * frame.cols) + col];
					vec_two[0] = dilation[(row * frame.cols) + col];
					frame.at<cv::Vec3b>(row, col) = vec_two;
				}
			}
			cv::imshow("Dilation Image", frame);
			if (cv::waitKey(1) == 27)
				break;
		}
		cv::destroyWindow("Dilation Image");
		// wait for a new frame from camera and store it into 'frame'
	
}
private: System::Void eROSÝONToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
		int deviceID = 0, sum = 0, cur, thres;
		cv::VideoCapture cap(deviceID);
		cv::Mat frame;
		BYTE* buffer;
		BYTE* newbuf;
		BYTE* erosion;
		BYTE Mask[9] = { 0,1,0,1,1,1,0,1,0 };
		while (cap.isOpened())
		{
			// wait for a new frame from camera and store it into 'frame'
			cap.read(frame);
			buffer = new BYTE[frame.total()];//one channel
			// check if we succeeded
			if (frame.empty()) {
				std::cerr << "ERROR! blank frame grabbed\n";
				break;
			}
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
			}
			thres = D2_K_Mean_Clustering(buffer, frame.cols, frame.rows);
			newbuf = BinaryImage(buffer, frame.cols, frame.rows, thres);
			erosion = Erosion(newbuf, frame.cols, frame.rows, Mask, 3, 3);
			for (int row = 0; row < frame.rows; row++)
			{
				for (int col = 0; col < frame.cols; col++)//-(masksize -1)
				{
					cv::Vec3b vec_two;
					vec_two[2] = erosion[(row * frame.cols) + col];
					vec_two[1] = erosion[(row * frame.cols) + col];
					vec_two[0] = erosion[(row * frame.cols) + col];
					frame.at<cv::Vec3b>(row, col) = vec_two;
				}
			}
			cv::imshow("Erosion Image", frame);
			//cv::waitKey(10);//burasý lazým
			if (cv::waitKey(1) == 27)
				break;
			
		}
		cv::destroyWindow("Erosion Image");
		// wait for a new frame from camera and store it into 'frame'
	
}
private: System::Void oPENÝNGToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
		int deviceID = 0, sum = 0, cur, thres;
		cv::VideoCapture cap(deviceID);
		cv::Mat frame;
		BYTE* buffer;
		BYTE* newbuf;
		BYTE* erosion;
		BYTE* opening;
		BYTE Mask[9] = { 0,1,0,1,1,1,0,1,0 };
		BYTE Mask_1[9] = { 1,1,1,1,1,1,1,1,1 };
		while (cap.isOpened())
		{
			// wait for a new frame from camera and store it into 'frame'
			cap.read(frame);
			buffer = new BYTE[frame.total()];//one channel
			// check if we succeeded
			if (frame.empty()) {
				std::cerr << "ERROR! blank frame grabbed\n";
				break;
			}
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
			}
			thres = D2_K_Mean_Clustering(buffer, frame.cols, frame.rows);
			newbuf = BinaryImage(buffer, frame.cols, frame.rows, thres);
			erosion = Erosion(newbuf, frame.cols, frame.rows, Mask, 3, 3);
			opening = Dilation(erosion, frame.cols, frame.rows, Mask_1, 3, 3);
			for (int row = 0; row < frame.rows; row++)
			{
				for (int col = 0; col < frame.cols; col++)//-(masksize -1)
				{
					cv::Vec3b vec_two;
					vec_two[2] = opening[(row * frame.cols) + col];
					vec_two[1] = opening[(row * frame.cols) + col];
					vec_two[0] = opening[(row * frame.cols) + col];
					frame.at<cv::Vec3b>(row, col) = vec_two;
				}
			}
			cv::imshow("Opening Image", frame);
			//cv::waitKey(10);//burasý lazým
			if (cv::waitKey(1) == 27)
				break;

		}
		cv::destroyWindow("Opening Image");
		delete[] opening;
		delete[] erosion;
		// wait for a new frame from camera and store it into 'frame'
	
}
private: System::Void cLOSÝNGToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
		int deviceID = 0, sum = 0, cur, thres;
		cv::VideoCapture cap(deviceID);
		cv::Mat frame;
		BYTE* buffer;
		BYTE* newbuf;
		BYTE* dilation;
		BYTE* closing;
		BYTE Mask[9] = { 0,1,0,1,1,1,0,1,0 };
		BYTE Mask_1[9] = { 1,1,1,1,1,1,1,1,1 };
		while (cap.isOpened())
		{
			// wait for a new frame from camera and store it into 'frame'
			cap.read(frame);
			buffer = new BYTE[frame.total()];//one channel
			// check if we succeeded
			if (frame.empty()) {
				std::cerr << "ERROR! blank frame grabbed\n";
				break;
			}
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
			}
			thres = D2_K_Mean_Clustering(buffer, frame.cols, frame.rows);
			newbuf = BinaryImage(buffer, frame.cols, frame.rows, thres);
			dilation = Dilation(newbuf, frame.cols, frame.rows, Mask_1, 3, 3);
			closing = Erosion(dilation, frame.cols, frame.rows, Mask, 3, 3);
			for (int row = 0; row < frame.rows; row++)
			{
				for (int col = 0; col < frame.cols; col++)//-(masksize -1)
				{
					cv::Vec3b vec_two;
					vec_two[2] = closing[(row * frame.cols) + col];
					vec_two[1] = closing[(row * frame.cols) + col];
					vec_two[0] = closing[(row * frame.cols) + col];
					frame.at<cv::Vec3b>(row, col) = vec_two;
				}
			}
			cv::imshow("Closing Image", frame);
			//cv::waitKey(10);//burasý lazým
			if (cv::waitKey(1) == 27)
				break;

		}
		cv::destroyWindow("Closing Image");
		delete[] closing;
		delete[] dilation;
		// wait for a new frame from camera and store it into 'frame'
	
}
private: System::Void bOUNDARYToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
		int deviceID = 0, sum = 0, cur, thres;
		cv::VideoCapture cap(deviceID);
		cv::Mat frame;
		BYTE* buffer;
		BYTE* newbuf;
		BYTE* erosion;
		BYTE* boundary;
		BYTE Mask[9] = { 0,1,0,1,1,1,0,1,0 };
		while (cap.isOpened())
		{
			// wait for a new frame from camera and store it into 'frame'
			cap.read(frame);
			buffer = new BYTE[frame.total()];//one channel
			// check if we succeeded
			if (frame.empty()) {
				std::cerr << "ERROR! blank frame grabbed\n";
				break;
			}
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
			}
			thres = D2_K_Mean_Clustering(buffer, frame.cols, frame.rows);
			newbuf = BinaryImage(buffer, frame.cols, frame.rows, thres);
			erosion = Erosion(newbuf, frame.cols, frame.rows, Mask, 3, 3);
			boundary = Boundary(erosion,newbuf, frame.cols, frame.rows);
			for (int row = 0; row < frame.rows; row++)
			{
				for (int col = 0; col < frame.cols; col++)//-(masksize -1)
				{
					cv::Vec3b vec_two;
					vec_two[2] = boundary[(row * frame.cols) + col];
					vec_two[1] = boundary[(row * frame.cols) + col];
					vec_two[0] = boundary[(row * frame.cols) + col];
					frame.at<cv::Vec3b>(row, col) = vec_two;
				}
			}
			cv::imshow("Boundary Image", frame);
			if (cv::waitKey(1) == 27)
				break;

		}
		cv::destroyWindow("Boundary Image");
		delete[] boundary;
		delete[] erosion;
		// wait for a new frame from camera and store it into 'frame'
	
}
private: System::Void cANNYEDGEToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
		int deviceID = 0, sum = 0, cur, thres,sobel = 1020,prewitt = 765;
		cv::VideoCapture cap(deviceID);
		cv::Mat frame;
		BYTE* buffer;
		BYTE* newbuf;
		while (cap.isOpened())
		{
			// wait for a new frame from camera and store it into 'frame'
			cap.read(frame);
			buffer = new BYTE[frame.total()];//one channel
			// check if we succeeded
			if (frame.empty()) {
				std::cerr << "ERROR! blank frame grabbed\n";
				break;
			}
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
			}
			int m_w = 3;
			int m_h = 3;
			int w_new = frame.cols - m_w + 1;
			int h_new = frame.rows - m_h + 1;
			BYTE* display = new BYTE[w_new * h_new];
			double dikeyturev[9] = { 1,2,1,0,0,0,-1,-2,-1 };//mask
			double yatayturev[9] = { 1,0,-1,2,0,-2,1,0,-1 };
			double* deriveV = Convolution(buffer, frame.cols, frame.rows, dikeyturev, m_w, m_h);
			double* deriveH = Convolution(buffer, frame.cols, frame.rows, yatayturev, m_w, m_h);
			double* edgeimge = edgeimage(deriveH, deriveV, sobel, w_new, h_new);//edgeimge yaparsan sonuc verirde bedge daha keskin 1px sonuc verir
			double* angle = gradient(deriveH, deriveV, w_new, h_new);
			double* nonmax = nms(edgeimge, angle, w_new, h_new);
			double* histt = histerize_threshold(nonmax, w_new, h_new);
			double* bedge = binaryedge(histt, angle, w_new, h_new);
			for (int row = 0; row < h_new; row++)
			{
				for (int col = 0; col < w_new; col++)
				{
					cur = row * w_new + col;
					display[cur] = edgeimge[cur];//edgeimge ve bedge alýr edgeimge türevlerden sonra direk cýkar diðeri nms den sonra
				}
			}
			//edgeimage daha büyük bedge ise pixel pixel keskin turev
			thres = D2_K_Mean_Clustering(display, w_new, h_new);
			newbuf = BinaryImage(display, w_new, h_new, thres);
			cv::Mat new_frame(frame.rows - m_h + 1, frame.cols - m_w + 1, CV_8UC3);
			for (int row = 0; row < new_frame.rows; row++)
			{
				for (int col = 0; col < new_frame.cols; col++)//-(masksize -1)
				{
					cv::Vec3b vec_two;
					vec_two[2] = newbuf[(row * new_frame.cols) + col];
					vec_two[1] = newbuf[(row * new_frame.cols) + col];
					vec_two[0] = newbuf[(row * new_frame.cols) + col];
					new_frame.at<cv::Vec3b>(row, col) = vec_two;
				}
			}
			//bedge
			/*
			for (int row = 0; row < h_new; row++)
			{
				for (int col = 0; col < w_new; col++)
				{
					cur = row * w_new + col;
					display[cur] = bedge[cur];//edgeimge ve bedge alýr edgeimge türevlerden sonra direk cýkar diðeri nms den sonra
				}
			}
			for (int row = 0; row < h_new; row++)
			{
				for (int col = 0; col < w_new; col++)
				{
					cur = row * w_new + col;
					if (display[cur] == 1)
					{
						display[cur] = 255;
					}
				}
			}
			cv::Mat new_frame(frame.rows - m_h + 1, frame.cols - m_w + 1, CV_8UC3);
			for (int row = 0; row < new_frame.rows; row++)
			{
				for (int col = 0; col < new_frame.cols; col++)//-(masksize -1)
				{
					cv::Vec3b vec_two;
					vec_two[2] = display[(row * new_frame.cols) + col];
					vec_two[1] = display[(row * new_frame.cols) + col];
					vec_two[0] = display[(row * new_frame.cols) + col];
					new_frame.at<cv::Vec3b>(row, col) = vec_two;
				}
			}*/

			cv::imshow("Canny", new_frame);
			if (cv::waitKey(1) == 27)
				break;

		}
		cv::destroyWindow("Canny");
		// wait for a new frame from camera and store it into 'frame'
	
}
private: System::Void rGBSEGMENTATIONToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
		int deviceID = 0, sum = 0,cur;
		cv::VideoCapture cap(deviceID);
		cv::Mat frame;
		BYTE* buffer;
		BYTE* rgb;
		while (cap.isOpened())
		{
			// wait for a new frame from camera and store it into 'frame'
			cap.read(frame);
			// check if we succeeded
			if (frame.empty()) {
				std::cerr << "ERROR! blank frame grabbed\n";
				break;
			}
			buffer = new BYTE[frame.total() * frame.channels()];
			for (int row = 0; row < frame.rows; row++)
			{
				for (int col = 0; col < frame.cols; col++)
				{
					cv::Vec3b vec = frame.at<cv::Vec3b>(row, col);
					cur = row * frame.cols + col;
					buffer[frame.channels() * cur] = vec[2];//R
					buffer[frame.channels() * cur + 1] = vec[1];//G
					buffer[frame.channels() * cur + 2] = vec[0];//B
				}
			}
			rgb = MultD_K_Means_Clustering(buffer, frame.cols, frame.rows, 3);//3 renge 3 bölgeye ayýrýr 4-5-... olabilir
			for (int row = 0; row < frame.rows; row++)
			{
				for (int col = 0; col < frame.cols; col++)
				{
					cur = row * frame.cols + col;
					cv::Vec3b vec;
					vec[2] = rgb[frame.channels() * cur];//R
					vec[1] = rgb[frame.channels() * cur + 1];//G
					vec[0] = rgb[frame.channels() * cur + 2];//B
					frame.at<cv::Vec3b>(row, col) = vec;
				}
			}
			cv::imshow("RGB Segment", frame);
			if (cv::waitKey(1) == 27)
				break;
		}
		cv::destroyWindow("RGB Segment");
		// wait for a new frame from camera and store it into 'frame'
	
}
private: System::Void lABELÝNGToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		int deviceID = 0, sum = 0, cur,thres,objcount;
		cv::VideoCapture cap(deviceID);
		cv::Mat frame;
		BYTE* buffer;
		BYTE* gray_buffer;
		BYTE* rgb;
		BYTE* binary;
		BYTE* labeling;
		BYTE* coloring;
		while (cap.isOpened())
		{
			// wait for a new frame from camera and store it into 'frame'
			cap.read(frame);
			// check if we succeeded
			if (frame.empty()) {
				std::cerr << "ERROR! blank frame grabbed\n";
				break;
			}
			buffer = new BYTE[frame.total() * frame.channels()];
			gray_buffer = new BYTE[frame.total()];
			for (int row = 0; row < frame.rows; row++)
			{
				for (int col = 0; col < frame.cols; col++)
				{
					cv::Vec3b vec = frame.at<cv::Vec3b>(row, col);
					cur = row * frame.cols + col;
					buffer[frame.channels() * cur] = vec[2];//R
					buffer[frame.channels() * cur + 1] = vec[1];//G
					buffer[frame.channels() * cur + 2] = vec[0];//B
				}
			}
			//gray scale
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
					gray_buffer[cur] = sum;
					sum = 0;
				}
			}
			thres = D2_K_Mean_Clustering(gray_buffer, frame.cols, frame.rows);
			binary = BinaryImage(gray_buffer, frame.cols, frame.rows, thres);
			labeling = CCL(binary, frame.cols, frame.rows);
			objcount = CounterObject(labeling, frame.cols, frame.rows);
			rgb = CCLColoring(labeling, buffer, frame.cols, frame.rows);
			for (int row = 0; row < frame.rows; row++)
			{
				for (int col = 0; col < frame.cols; col++)
				{
					cur = row * frame.cols + col;
					cv::Vec3b vec;
					vec[2] = rgb[frame.channels() * cur];//R
					vec[1] = rgb[frame.channels() * cur + 1];//G
					vec[0] = rgb[frame.channels() * cur + 2];//B
					frame.at<cv::Vec3b>(row, col) = vec;
				}
			}
			label2->Text = objcount.ToString();
			label2->Refresh();
			cv::imshow("Labeling", frame);
			if (cv::waitKey(1) == 27)
				break;
		}
		cv::destroyWindow("Labeling");
		// wait for a new frame from camera and store it into 'frame'
	
}
private: System::Void mEANFILTERToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int deviceID = 0, sum = 0, cur, thres, sobel = 1020, prewitt = 765;
	cv::VideoCapture cap(deviceID);
	cv::Mat frame;
	BYTE* buffer;
	BYTE* newbuf;
	while (cap.isOpened())
	{
		// wait for a new frame from camera and store it into 'frame'
		cap.read(frame);
		buffer = new BYTE[frame.total()];//one channel
		// check if we succeeded
		if (frame.empty()) {
			std::cerr << "ERROR! blank frame grabbed\n";
			break;
		}
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
		int m_w = 3;
		int m_h = 3;
		int w_new = frame.cols - m_w + 1;
		int h_new = frame.rows - m_h + 1;
		newbuf = new BYTE[w_new * h_new];
		double* newbuf_d = new double[w_new * h_new];
		double* Mask1 = new double[9];
		BYTE* binary;
		for (int i = 0; i < 9; i++)
		{
			Mask1[i] = 0.11;
		}
		newbuf_d = Convolution(buffer, frame.cols, frame.rows, Mask1, m_w, m_h);
		for (int i = 0; i < w_new * h_new; i++)
		{
			newbuf[i] = newbuf_d[i];
		}
		cv::Mat new_frame(frame.rows - m_h + 1, frame.cols - m_w + 1, CV_8UC3);
		for (int row = 0; row < new_frame.rows; row++)
		{
			for (int col = 0; col < new_frame.cols; col++)
			{
				cv::Vec3b vec_two;
				vec_two[2] = newbuf[(row * new_frame.cols) + col];
				vec_two[1] = newbuf[(row * new_frame.cols) + col];
				vec_two[0] = newbuf[(row * new_frame.cols) + col];
				new_frame.at<cv::Vec3b>(row, col) = vec_two;
			}
		}
		cv::imshow("Mean Filter", new_frame);
		if (cv::waitKey(1) == 27)
			break;

	}
	cv::destroyWindow("Mean Filter");
	// wait for a new frame from camera and store it into 'frame'

}
private: System::Void hIGHPASSFILTERToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int deviceID = 0, sum = 0, cur, thres, sobel = 1020, prewitt = 765;
	cv::VideoCapture cap(deviceID);
	cv::Mat frame;
	BYTE* buffer;
	BYTE* newbuf;
	while (cap.isOpened())
	{
		// wait for a new frame from camera and store it into 'frame'
		cap.read(frame);
		buffer = new BYTE[frame.total()];//one channel
		// check if we succeeded
		if (frame.empty()) {
			std::cerr << "ERROR! blank frame grabbed\n";
			break;
		}
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
		int m_w = 5;
		int m_h = 5;
		int w_new = frame.cols - m_w + 1;
		int h_new = frame.rows - m_h + 1;
		newbuf = new BYTE[w_new * h_new];
		BYTE* Mask1 = new BYTE[m_w*m_h];
		for (int i = 0; i < m_w*m_h; i++)
		{
			Mask1[i] = 1;
		}
		Mask1[12] = 0;
		newbuf = Convolution(buffer, frame.cols, frame.rows, Mask1, m_w, m_h);
		cv::Mat new_frame(frame.rows - m_h + 1, frame.cols - m_w + 1, CV_8UC3);
		for (int row = 0; row < new_frame.rows; row++)
		{
			for (int col = 0; col < new_frame.cols; col++)
			{
				cv::Vec3b vec_two;
				vec_two[2] = newbuf[(row * new_frame.cols) + col];
				vec_two[1] = newbuf[(row * new_frame.cols) + col];
				vec_two[0] = newbuf[(row * new_frame.cols) + col];
				new_frame.at<cv::Vec3b>(row, col) = vec_two;
			}
		}
		cv::imshow("Hýgh Pass Filter", new_frame);
		if (cv::waitKey(1) == 27)
			break;

	}
	cv::destroyWindow("Hýgh Pass Filter");
	// wait for a new frame from camera and store it into 'frame'

}
private: System::Void lOWPASSFILTERToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int deviceID = 0, sum = 0, cur, thres, sobel = 1020, prewitt = 765;
	cv::VideoCapture cap(deviceID);
	cv::Mat frame;
	BYTE* buffer;
	BYTE* newbuf;
	while (cap.isOpened())
	{
		// wait for a new frame from camera and store it into 'frame'
		cap.read(frame);
		buffer = new BYTE[frame.total()];//one channel
		// check if we succeeded
		if (frame.empty()) {
			std::cerr << "ERROR! blank frame grabbed\n";
			break;
		}
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
		int m_w = 5;
		int m_h = 5;
		int w_new = frame.cols - m_w + 1;
		int h_new = frame.rows - m_h + 1;
		newbuf = new BYTE[w_new * h_new];
		BYTE* Mask1 = new BYTE[m_w * m_h];
		for (int i = 0; i < m_w * m_h; i++)
		{
			Mask1[i] = 0;
		}
		Mask1[12] = 1;
		newbuf = Convolution(buffer, frame.cols, frame.rows, Mask1, m_w, m_h);
		cv::Mat new_frame(frame.rows - m_h + 1, frame.cols - m_w + 1, CV_8UC3);
		for (int row = 0; row < new_frame.rows; row++)
		{
			for (int col = 0; col < new_frame.cols; col++)
			{
				cv::Vec3b vec_two;
				vec_two[2] = newbuf[(row * new_frame.cols) + col];
				vec_two[1] = newbuf[(row * new_frame.cols) + col];
				vec_two[0] = newbuf[(row * new_frame.cols) + col];
				new_frame.at<cv::Vec3b>(row, col) = vec_two;
			}
		}
		cv::imshow("Low Pass Filter", new_frame);
		if (cv::waitKey(1) == 27)
			break;

	}
	cv::destroyWindow("Low Pass Filter");
	// wait for a new frame from camera and store it into 'frame'

}
private: System::Void lAPLACEFILTERToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int deviceID = 0, sum = 0, cur, thres, sobel = 1020, prewitt = 765;
	cv::VideoCapture cap(deviceID);
	cv::Mat frame;
	BYTE* buffer;
	BYTE* newbuf;
	while (cap.isOpened())
	{
		// wait for a new frame from camera and store it into 'frame'
		cap.read(frame);
		buffer = new BYTE[frame.total()];//one channel
		// check if we succeeded
		if (frame.empty()) {
			std::cerr << "ERROR! blank frame grabbed\n";
			break;
		}
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
		int m_w = 3;
		int m_h = 3;
		int w_new = frame.cols - m_w + 1;
		int h_new = frame.rows - m_h + 1;
		newbuf = new BYTE[w_new * h_new];
		BYTE* Mask1 = new BYTE[m_w * m_h];
		for (int i = 0; i < m_w * m_h; i++)
		{
			Mask1[i] = 0;
		}
		Mask1[1] = 1; Mask1[3] = 1; Mask1[4] = -4; Mask1[5] = 1; Mask1[7] = 1;
		newbuf = Convolution(buffer, frame.cols, frame.rows, Mask1, m_w, m_h);
		cv::Mat new_frame(frame.rows - m_h + 1, frame.cols - m_w + 1, CV_8UC3);
		for (int row = 0; row < new_frame.rows; row++)
		{
			for (int col = 0; col < new_frame.cols; col++)
			{
				cv::Vec3b vec_two;
				vec_two[2] = newbuf[(row * new_frame.cols) + col];
				vec_two[1] = newbuf[(row * new_frame.cols) + col];
				vec_two[0] = newbuf[(row * new_frame.cols) + col];
				new_frame.at<cv::Vec3b>(row, col) = vec_two;
			}
		}
		cv::imshow("Laplace Filter", new_frame);
		if (cv::waitKey(1) == 27)
			break;

	}
	cv::destroyWindow("Laplace Filter");
	// wait for a new frame from camera and store it into 'frame'

}
private: System::Void kÝRCHOFFFILTERToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int deviceID = 0, sum = 0, cur, thres, sobel = 1020, prewitt = 765;
	cv::VideoCapture cap(deviceID);
	cv::Mat frame;
	BYTE* buffer;
	BYTE* newbuf;
	while (cap.isOpened())
	{
		// wait for a new frame from camera and store it into 'frame'
		cap.read(frame);
		buffer = new BYTE[frame.total()];//one channel
		// check if we succeeded
		if (frame.empty()) {
			std::cerr << "ERROR! blank frame grabbed\n";
			break;
		}
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
		int m_w = 3;
		int m_h = 3;
		int w_new = frame.cols - m_w + 1;
		int h_new = frame.rows - m_h + 1;
		newbuf = new BYTE[w_new * h_new];
		BYTE* Mask1 = new BYTE[m_w * m_h];
		for (int i = 0; i < m_w; i++)
		{
			Mask1[i] = -3;
		}
		Mask1[3] = -3; Mask1[4] = 0; Mask1[5] = -3;
		for (int i = 6; i < m_w*m_h; i++)
		{
			Mask1[i] = 5;
		}
		newbuf = Convolution(buffer, frame.cols, frame.rows, Mask1, m_w, m_h);
		cv::Mat new_frame(frame.rows - m_h + 1, frame.cols - m_w + 1, CV_8UC3);
		for (int row = 0; row < new_frame.rows; row++)
		{
			for (int col = 0; col < new_frame.cols; col++)
			{
				cv::Vec3b vec_two;
				vec_two[2] = newbuf[(row * new_frame.cols) + col];
				vec_two[1] = newbuf[(row * new_frame.cols) + col];
				vec_two[0] = newbuf[(row * new_frame.cols) + col];
				new_frame.at<cv::Vec3b>(row, col) = vec_two;
			}
		}
		cv::imshow("Laplace Filter", new_frame);
		if (cv::waitKey(1) == 27)
			break;

	}
	cv::destroyWindow("Laplace Filter");
	// wait for a new frame from camera and store it into 'frame'

}
private: System::Void dÝGÝTALZOOMToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int deviceID = 0, sum = 0, cur, thres,newN,newM,zoom_param = 5;
	//cv::VideoCapture cap(deviceID);
	//ip yerine telefonda cýkan ip olacak?640x480
	cv::VideoCapture cap;
	/*if (!cap.open("http://192.168.1.22:4747/mjpegfeed?640x480"));
	{
		MessageBox::Show("bir seyler ters gitti");//okumuyor
	}*/
	cap.open(0);
	cv::Mat frame;
	BYTE* buffer;
	BYTE** double_buffer;
	BYTE* newbuf;
	BYTE** resbuf;
	BYTE** padzeros;
	while (cap.isOpened())
	{
		// wait for a new frame from camera and store it into 'frame'
		cap.read(frame);
		buffer = new BYTE[frame.total()];//one channel
		// check if we succeeded
		if (frame.empty()) {
			std::cerr << "ERROR! blank frame grabbed\n";
			break;
		}
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
		}//GRAYs
		double_buffer = new BYTE * [frame.rows];
		for (int i = 0; i < frame.rows; i++)
		{
			double_buffer[i] = new BYTE[frame.cols];
		}
		for (int i = 0; i < frame.rows; i++)
		{
			for (int j = 0; j < frame.cols; j++)
			{
				cur = i * frame.cols + j;
				double_buffer[(cur - j) / frame.cols][j] = buffer[cur];
			}
		}
		
		resbuf = Digital_ZOOM(double_buffer, frame.cols, frame.rows,zoom_param);
		//masksýz göstermek için
		newN = frame.cols + (frame.cols - 1) * (zoom_param - 1);
		newM = frame.rows + (frame.rows - 1) * (zoom_param - 1);
		cv::Mat new_frame(newM,newN, CV_8UC3);
		newbuf = new BYTE[newM * newN];
		for (int i = 0; i < newM; i++)
		{
			for (int j = 0; j < newN; j++)
			{
				cur = i * newN + j;
				newbuf[cur] = resbuf[(cur - j) / newN][j];
			}
		}

		for (int row = 0; row < new_frame.rows; row++)
		{
			for (int col = 0; col < new_frame.cols; col++)
			{
				cv::Vec3b vec_two;
				vec_two[2] = newbuf[(row * new_frame.cols) + col];
				vec_two[1] = newbuf[(row * new_frame.cols) + col];
				vec_two[0] = newbuf[(row * new_frame.cols) + col];
				new_frame.at<cv::Vec3b>(row, col) = vec_two;
			}
		}
		//buraya kadar digital zoom geçiþler sert filtre atmamýz lazým
		cv::imshow("Digital Zoom", new_frame);
		if (cv::waitKey(1) == 27)
			break;

	}
	cv::destroyWindow("Digital Zoom");
	// wait for a new frame from camera and store it into 'frame'
}
private: System::Void dÝGÝTALZOOM2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int deviceID = 0, sum = 0, cur, thres, newN, newM, zoom_param = 2;
	cv::VideoCapture cap(deviceID);
	cv::Mat frame;
	BYTE* buffer;
	BYTE** double_buffer;
	BYTE* newbuf;
	BYTE** resbuf;
	while (cap.isOpened())
	{
		// wait for a new frame from camera and store it into 'frame'
		cap.read(frame);
		buffer = new BYTE[frame.total()];//one channel
		// check if we succeeded
		if (frame.empty()) {
			std::cerr << "ERROR! blank frame grabbed\n";
			break;
		}
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
		double_buffer = new BYTE * [frame.rows];
		for (int i = 0; i < frame.rows; i++)
		{
			double_buffer[i] = new BYTE[frame.cols];
		}
		for (int i = 0; i < frame.rows; i++)
		{
			for (int j = 0; j < frame.cols; j++)
			{
				cur = i * frame.cols + j;
				double_buffer[(cur - j) / frame.cols][j] = buffer[cur];
			}
		}
		resbuf = Digital_ZOOM_2(double_buffer, frame.cols, frame.rows);
		newN = frame.cols + (frame.cols - 1) * (zoom_param - 1);
		newM = frame.rows + (frame.rows - 1) * (zoom_param - 1);
		cv::Mat new_frame(newM, newN, CV_8UC3);
		newbuf = new BYTE[newM * newN];
		for (int i = 0; i < newM; i++)
		{
			for (int j = 0; j < newN; j++)
			{
				cur = i * newN + j;
				newbuf[cur] = resbuf[(cur - j) / newN][j];
			}
		}

		for (int row = 0; row < new_frame.rows; row++)
		{
			for (int col = 0; col < new_frame.cols; col++)
			{
				cv::Vec3b vec_two;
				vec_two[2] = newbuf[(row * new_frame.cols) + col];
				vec_two[1] = newbuf[(row * new_frame.cols) + col];
				vec_two[0] = newbuf[(row * new_frame.cols) + col];
				new_frame.at<cv::Vec3b>(row, col) = vec_two;
			}
		}
		//buraya kadar digital zoom geçiþler sert filtre atmamýz lazým
		//zoom mask
		int m_w = 3;
		int m_h = 3;
		int w_new = new_frame.cols - m_w + 1;
		int h_new = new_frame.rows - m_h + 1;
		BYTE* newbuf_2 = new BYTE[w_new * h_new];
		double* newbuf_2d = new double[w_new * h_new];
		double* Mask1 = new double[m_w * m_h];
		Mask1[0] = 0.25; Mask1[2] = 0.25; Mask1[6] = 0.25; Mask1[8] = 0.25;
		Mask1[1] = 0.5; Mask1[3] = 0.5; Mask1[5] = 0.5; Mask1[7] = 0.5; Mask1[4] = 1;
		newbuf_2d = Convolution(newbuf, new_frame.cols, new_frame.rows, Mask1, m_w, m_h);
		for (int i = 0; i < w_new * h_new; i++)
		{
			newbuf_2[i] = newbuf_2d[i];
		}
		cv::Mat new_frame_2(new_frame.rows - m_h + 1, new_frame.cols - m_w + 1, CV_8UC3);
		for (int row = 0; row < new_frame_2.rows; row++)
		{
			for (int col = 0; col < new_frame_2.cols; col++)
			{
				cv::Vec3b vec_two;
				vec_two[2] = newbuf_2[(row * new_frame_2.cols) + col];
				vec_two[1] = newbuf_2[(row * new_frame_2.cols) + col];
				vec_two[0] = newbuf_2[(row * new_frame_2.cols) + col];
				new_frame_2.at<cv::Vec3b>(row, col) = vec_two;
			}
		}
		cv::imshow("Digital Zoom2", new_frame_2);
		if (cv::waitKey(1) == 27)
			break;

	}
	cv::destroyWindow("Digital Zoom2");
}
private: System::Void gAUSSÝANBLURToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int deviceID = 0, sum = 0, cur, thres, sobel = 1020, prewitt = 765;
	cv::VideoCapture cap(deviceID);
	cv::Mat frame;
	BYTE* buffer;
	BYTE* newbuf;
	
	while (cap.isOpened())
	{
		// wait for a new frame from camera and store it into 'frame'
		cap.read(frame);
		buffer = new BYTE[frame.total()];//one channel
		// check if we succeeded
		if (frame.empty()) {
			std::cerr << "ERROR! blank frame grabbed\n";
			break;
		}
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
		int m_w = 3;
		int m_h = 3;
		int w_new = frame.cols - m_w + 1;
		int h_new = frame.rows - m_h + 1;
		newbuf = new BYTE[w_new * h_new];
		double* Mask1 = new double[m_w * m_h];
		double* newbuf_d = new double[w_new * h_new];
		for (int i = 0; i < m_w * m_h; i++)
		{
			if (i % 2 == 1)
				Mask1[i] = 0.125;
			else if (i % 2 == 0)
				Mask1[i] = 0.0625;
		}
		Mask1[4] = 0.25;
		newbuf_d = Convolution(buffer, frame.cols, frame.rows, Mask1, m_w, m_h);
		for (int i = 0; i < w_new * h_new; i++)
		{
			newbuf[i] = newbuf_d[i];
		}
		cv::Mat new_frame(frame.rows - m_h + 1, frame.cols - m_w + 1, CV_8UC3);
		for (int row = 0; row < new_frame.rows; row++)
		{
			for (int col = 0; col < new_frame.cols; col++)
			{
				cv::Vec3b vec_two;
				vec_two[2] = newbuf[(row * new_frame.cols) + col];
				vec_two[1] = newbuf[(row * new_frame.cols) + col];
				vec_two[0] = newbuf[(row * new_frame.cols) + col];
				new_frame.at<cv::Vec3b>(row, col) = vec_two;
			}
		}
		cv::imshow("Gauss Filter", new_frame);
		if (cv::waitKey(1) == 27)
			break;

	}
	cv::destroyWindow("Gauss Filter");
	// wait for a new frame from camera and store it into 'frame'
}
private: System::Void digitalZoom2xXkDenemeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	int deviceID = 0, sum = 0, cur, thres, newN, newM, zoom_param = 3;
	cv::VideoCapture cap(deviceID);
	cv::Mat frame;
	BYTE* buffer;
	BYTE** double_buffer;
	BYTE* newbuf;
	BYTE** resbuf;
	while (cap.isOpened())
	{
		// wait for a new frame from camera and store it into 'frame'
		cap.read(frame);
		buffer = new BYTE[frame.total()];//one channel
		// check if we succeeded
		if (frame.empty()) {
			std::cerr << "ERROR! blank frame grabbed\n";
			break;
		}
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
		double_buffer = new BYTE * [frame.rows];
		for (int i = 0; i < frame.rows; i++)
		{
			double_buffer[i] = new BYTE[frame.cols];
		}
		for (int i = 0; i < frame.rows; i++)
		{
			for (int j = 0; j < frame.cols; j++)
			{
				cur = i * frame.cols + j;
				double_buffer[(cur - j) / frame.cols][j] = buffer[cur];
			}
		}
		resbuf = Digital_ZOOM_2(double_buffer, frame.cols, frame.rows);
		newN = frame.cols + (frame.cols - 1) * (zoom_param - 1);
		newM = frame.rows + (frame.rows - 1) * (zoom_param - 1);
		cv::Mat new_frame(newM, newN, CV_8UC3);
		newbuf = new BYTE[newM * newN];
		for (int i = 0; i < newM; i++)
		{
			for (int j = 0; j < newN; j++)
			{
				cur = i * newN + j;
				newbuf[cur] = resbuf[(cur - j) / newN][j];
			}
		}

		for (int row = 0; row < new_frame.rows; row++)
		{
			for (int col = 0; col < new_frame.cols; col++)
			{
				cv::Vec3b vec_two;
				vec_two[2] = newbuf[(row * new_frame.cols) + col];
				vec_two[1] = newbuf[(row * new_frame.cols) + col];
				vec_two[0] = newbuf[(row * new_frame.cols) + col];
				new_frame.at<cv::Vec3b>(row, col) = vec_two;
			}
		}
		//buraya kadar digital zoom geçiþler sert filtre atmamýz lazým
		//zoom mask
		int m_w = 3;
		int m_h = 3;
		int w_new = new_frame.cols - m_w + 1;
		int h_new = new_frame.rows - m_h + 1;
		BYTE* newbuf_2 = new BYTE[w_new * h_new];
		double* newbuf_2d = new double[w_new * h_new];
		double* Mask1 = new double[m_w * m_h];
		Mask1[0] = 0.25; Mask1[2] = 0.25; Mask1[6] = 0.25; Mask1[8] = 0.25;
		Mask1[1] = 0.5; Mask1[3] = 0.5; Mask1[5] = 0.5; Mask1[7] = 0.5; Mask1[4] = 1;
		newbuf_2d = Convolution(newbuf, new_frame.cols, new_frame.rows, Mask1, m_w, m_h);
		for (int i = 0; i < w_new * h_new; i++)
		{
			newbuf_2[i] = newbuf_2d[i];
		}
		cv::Mat new_frame_2(new_frame.rows - m_h + 1, new_frame.cols - m_w + 1, CV_8UC3);
		for (int row = 0; row < new_frame_2.rows; row++)
		{
			for (int col = 0; col < new_frame_2.cols; col++)
			{
				cv::Vec3b vec_two;
				vec_two[2] = newbuf_2[(row * new_frame_2.cols) + col];
				vec_two[1] = newbuf_2[(row * new_frame_2.cols) + col];
				vec_two[0] = newbuf_2[(row * new_frame_2.cols) + col];
				new_frame_2.at<cv::Vec3b>(row, col) = vec_two;
			}
		}
		cv::imshow("Digital Zoom2", new_frame_2);
		if (cv::waitKey(1) == 27)
			break;

	}
	cv::destroyWindow("Digital Zoom2");
}
};
}
