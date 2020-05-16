//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "_theory_form.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Ttheory_form *theory_form;
//---------------------------------------------------------------------------
__fastcall Ttheory_form::Ttheory_form(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall Ttheory_form::FormClose(TObject *Sender, TCloseAction &Action)
{
act_comp();
Action=caFree;
}
//---------------------------------------------------------------------------
void __fastcall Ttheory_form::BitBtn1Click(TObject *Sender)
{

/*Variant vMSWord;
vMSWord = Variant::CreateObject("Word.Application");
vMSWord.OlePropertySet("Visible", true);

Variant vFileName, vWDocuments, vWDocument; */
AnsiString file;

file=PathToFile(Application->ExeName);
file+="\\theory\\";
file+=IntToStr(cb->ItemIndex+1);
file+=".doc";
/*ShowMessage(file);
vFileName=file.c_str();
vWDocuments = vMSWord.OlePropertyGet("Documents");
vWDocument = vWDocuments.OleFunction("Open", vFileName); */
OleContainer2->CreateObjectFromFile(file,false);
OleContainer2->SetFocus();
}


