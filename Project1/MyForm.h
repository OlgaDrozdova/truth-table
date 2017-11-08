#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button43;

	protected:


















































	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(67, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(554, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(31, 122);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(47, 35);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(84, 122);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(47, 35);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(137, 122);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(47, 35);
			this->button3->TabIndex = 3;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(296, 122);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(47, 35);
			this->button6->TabIndex = 4;
			this->button6->Text = L"”даление";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(243, 122);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(47, 35);
			this->button5->TabIndex = 5;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(190, 122);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(47, 35);
			this->button4->TabIndex = 6;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(349, 122);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(47, 35);
			this->button7->TabIndex = 7;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(349, 163);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(47, 35);
			this->button14->TabIndex = 8;
			this->button14->Text = L"button14";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(296, 163);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(47, 35);
			this->button13->TabIndex = 9;
			this->button13->Text = L"button13";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(243, 163);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(47, 35);
			this->button12->TabIndex = 10;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(190, 163);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(47, 35);
			this->button11->TabIndex = 11;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(137, 163);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(47, 35);
			this->button10->TabIndex = 12;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(84, 163);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(47, 35);
			this->button9->TabIndex = 13;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(31, 163);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(47, 35);
			this->button8->TabIndex = 14;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(349, 204);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(47, 35);
			this->button21->TabIndex = 22;
			this->button21->Text = L"button21";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(296, 204);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(47, 35);
			this->button20->TabIndex = 23;
			this->button20->Text = L"button20";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(243, 204);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(47, 35);
			this->button19->TabIndex = 24;
			this->button19->Text = L"button19";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(190, 204);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(47, 35);
			this->button18->TabIndex = 25;
			this->button18->Text = L"button18";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(137, 204);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(47, 35);
			this->button17->TabIndex = 26;
			this->button17->Text = L"button17";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(84, 204);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(47, 35);
			this->button16->TabIndex = 27;
			this->button16->Text = L"button16";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(31, 204);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(47, 35);
			this->button15->TabIndex = 28;
			this->button15->Text = L"button15";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(349, 245);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(47, 35);
			this->button28->TabIndex = 36;
			this->button28->Text = L"button28";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(296, 245);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(47, 35);
			this->button27->TabIndex = 37;
			this->button27->Text = L"button27";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(243, 245);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(47, 35);
			this->button26->TabIndex = 38;
			this->button26->Text = L"button26";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(190, 245);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(47, 35);
			this->button25->TabIndex = 39;
			this->button25->Text = L"button25";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(137, 245);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(47, 35);
			this->button24->TabIndex = 40;
			this->button24->Text = L"button24";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(84, 245);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(47, 35);
			this->button23->TabIndex = 41;
			this->button23->Text = L"button23";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(31, 245);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(47, 35);
			this->button22->TabIndex = 42;
			this->button22->Text = L"button22";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(349, 286);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(47, 35);
			this->button35->TabIndex = 50;
			this->button35->Text = L"button35";
			this->button35->UseVisualStyleBackColor = true;
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(296, 286);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(47, 35);
			this->button34->TabIndex = 51;
			this->button34->Text = L"button34";
			this->button34->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(243, 286);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(47, 35);
			this->button33->TabIndex = 52;
			this->button33->Text = L"button33";
			this->button33->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(190, 286);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(47, 35);
			this->button32->TabIndex = 53;
			this->button32->Text = L"button32";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(137, 286);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(47, 35);
			this->button31->TabIndex = 54;
			this->button31->Text = L"button31";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(84, 286);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(47, 35);
			this->button30->TabIndex = 55;
			this->button30->Text = L"button30";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(31, 286);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(47, 35);
			this->button29->TabIndex = 56;
			this->button29->Text = L"button29";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(349, 327);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(47, 35);
			this->button42->TabIndex = 64;
			this->button42->Text = L"button42";
			this->button42->UseVisualStyleBackColor = true;
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(296, 327);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(47, 35);
			this->button41->TabIndex = 65;
			this->button41->Text = L"button41";
			this->button41->UseVisualStyleBackColor = true;
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(243, 327);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(47, 35);
			this->button40->TabIndex = 66;
			this->button40->Text = L"button40";
			this->button40->UseVisualStyleBackColor = true;
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(190, 327);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(47, 35);
			this->button39->TabIndex = 67;
			this->button39->Text = L"button39";
			this->button39->UseVisualStyleBackColor = true;
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(137, 327);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(47, 35);
			this->button38->TabIndex = 68;
			this->button38->Text = L"button38";
			this->button38->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(84, 327);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(47, 35);
			this->button37->TabIndex = 69;
			this->button37->Text = L"button37";
			this->button37->UseVisualStyleBackColor = true;
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(31, 327);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(47, 35);
			this->button36->TabIndex = 70;
			this->button36->Text = L"button36";
			this->button36->UseVisualStyleBackColor = true;
			// 
			// button43
			// 
			this->button43->Location = System::Drawing::Point(31, 443);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(365, 23);
			this->button43->TabIndex = 71;
			this->button43->Text = L"button43";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::button43_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1179, 543);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

/*char * and_SysStringToChar(System::String^ string) //System::String^ to char*
{
	return (char*)(void*)Marshal::StringToHGlobalAnsi(string);
}
System::String^ and_CharToSysString(char* ch) // char* to System::String^
{
	char * chr = ch;
	System::String^ str;
	for (int i = 0; chr[i] != '\0'; i++)
	{
		str += wchar_t(ch[i]);
	}
	return str;
}*/

int a = 0;

void rec(array<Char>^ array1)
{

}

private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) 
{
	label1->Text = label1->Text + button15->Text;
	a = 1;
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (a == 1)
	{
		label1->Text = label1->Text + button8->Text;
	}
	a = 0;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
{
	label1->Text = label1->Text->Remove(label1->Text->Length - 1);
}
private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) 
{
	char s = ' ';
	array<Char>^ array1 = label1->Text->ToCharArray();
	for (int i = 0; i < array1->Length; i++)
	{
		if (array1[i] == '^');
	}
}
};
}
