#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#define IDI_ICON1            1
#define IDI_ICON2            2

namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	/// 
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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fontToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::ComponentModel::IContainer^ components;


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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(950, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->newToolStripMenuItem,
					this->openToolStripMenuItem, this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->newToolStripMenuItem->Size = System::Drawing::Size(233, 26);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->openToolStripMenuItem->Size = System::Drawing::Size(233, 26);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->saveToolStripMenuItem->Size = System::Drawing::Size(233, 26);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift)
				| System::Windows::Forms::Keys::S));
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(233, 26);
			this->saveAsToolStripMenuItem->Text = L"Save As";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveAsToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(233, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fontToolStripMenuItem });
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(55, 24);
			this->editToolStripMenuItem->Text = L"View";
			// 
			// fontToolStripMenuItem
			// 
			this->fontToolStripMenuItem->Name = L"fontToolStripMenuItem";
			this->fontToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift)
				| System::Windows::Forms::Keys::F));
			this->fontToolStripMenuItem->Size = System::Drawing::Size(210, 26);
			this->fontToolStripMenuItem->Text = L"Font";
			this->fontToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fontToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(0, 28);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(950, 639);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(950, 667);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = gcnew System::Drawing::Icon("C:\\Users\\aling\\source\\repos\\SimpleNotepad\\SimpleNotepad\\MAINICON.ico");
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(968, 714);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PenQuill";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion

	String^ filename = String::Empty;
	String^ noteTitle = String::Empty;
	bool saved = false;
	bool writing = false;
	FontDialog^ fontDialog = gcnew FontDialog;


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

		//Dialogs
		OpenFileDialog^ openFileDialog;
		SaveFileDialog^ saveFileDialog;
		SaveFileDialog^ saveFileAsDialog;
		FontDialog^ fontDialog;

	}

	//TODO: IMPROVE UI
	void NewFile() {

		try {

			if (String::IsNullOrEmpty(this->richTextBox1->Text)) {

				this->richTextBox1->Text = String::Empty;
				this->filename = String::Empty;
				noteTitle = "Untitled";
				this->Text = noteTitle;

			} 
			else {
				
				if (MessageBox::Show("You have unsaved text. Save?", "Save File", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
					
					SaveAsFile();


				} else  {

					this->richTextBox1->Text = String::Empty;
					this->filename = String::Empty;
					noteTitle = "Untitled";
					this->Text = noteTitle;

				}

			}

		}
		catch(Exception^ e){

		}

	}

	void OpenFile() {
		
		try {

			if(String::IsNullOrEmpty(this->richTextBox1->Text)){
			
				OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();

				openFileDialog->ShowDialog();

				openFileDialog->Filter = "Text file(*.txt) | *.txt | All Files(*.*) | *.* ";
				openFileDialog->Title = "Open File";
				this->richTextBox1->Text = File::ReadAllText(openFileDialog->FileName);
				this->noteTitle = openFileDialog->FileName;
				this->Text = this->noteTitle;
				writing = false;
	

			}
			else {

				if (MessageBox::Show("You have unsaved text. Save?", "Save File?", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {

					SaveFile();

				}
				else {

					saved = false;
					this->richTextBox1->Text = String::Empty;
					OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();

					openFileDialog->ShowDialog();

					openFileDialog->Filter = "Text file(*.txt) | *.txt | All Files(*.*) | *.* ";
					openFileDialog->Title = "Open File";
					this->richTextBox1->Text = File::ReadAllText(openFileDialog->FileName);
					this->filename = openFileDialog->FileName;
					noteTitle = filename;
					this->Text = this->noteTitle;
					writing = false;


				}
			}

		}
		catch (Exception^ e) {

		}

	}


	void SaveAsFile() {

		try {


			if (!String::IsNullOrEmpty(this->richTextBox1->Text)) {

				writing = false;

				SaveFileDialog^ saveFileAsDialog = gcnew SaveFileDialog();

				saveFileAsDialog->InitialDirectory = Environment::GetFolderPath(Environment::SpecialFolder::MyDocuments);

				saveFileAsDialog->Filter = "Text Files (.txt)|*.txt|All Files (*.*)|*.*";
				saveFileAsDialog->Title = "Save As";
				saveFileAsDialog->FileName = "Untitled";

				if (saveFileAsDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					// save the new FileName in our variable
					this->noteTitle = saveFileAsDialog->FileName;
					StreamWriter^ writing = gcnew StreamWriter(saveFileAsDialog->FileName);
					writing->Write(richTextBox1->Text);
					writing->Close();

					saved = true;
					this->filename = saveFileAsDialog->FileName;
					noteTitle = filename;
					this->Text = noteTitle + " - Saved";
				}

			}
			else {

				MessageBox::Show("There is no text!");
			}

		}
		catch (Exception^ e) {

		}

	}


	void SaveFile() {

		try {

			if (String::IsNullOrEmpty(this->filename)) {

				// call SaveAs 
				SaveAsFile();

				
			}
			else {

				// we already have the filename. we overwrite that file.
				saved = true;
				writing = false;
				this->Text = noteTitle + " - Saved";
				StreamWriter^ writer = gcnew StreamWriter(this->noteTitle);
				writer->Write(richTextBox1->Text);
				writer->Close();
				
			}


		}
		catch (Exception^ e) {

		}

	}


	void ExitFile() {

		try {

			if (!saved) {

				if (MessageBox::Show("You have unsaved text. Save?", "Save File", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {

					saved = true;
					SaveFile();

				}
				else {

					Application::Exit();

				}

			}
		}
		catch (Exception^ e) {

		}

	}


private: System::Void newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	NewFile();

}
private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	SaveFile();

}
private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	OpenFile();
}
private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {


	SaveAsFile();

}

private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	ExitFile();

}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	writing = true;
	this->Text = noteTitle + " *";

	if (filename == String::Empty) {

		noteTitle = "Untitled";
		this->Text = noteTitle + " *";

	}

}
private: System::Void fontToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	try {

		if (fontDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			this->richTextBox1->Font = fontDialog->Font;

		}

	}
	catch (Exception^ e) {

	}
}
};
}

