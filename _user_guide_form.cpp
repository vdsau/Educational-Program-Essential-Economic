//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "_user_guide_form.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tuser_guide_form *user_guide_form;
//---------------------------------------------------------------------------
__fastcall Tuser_guide_form::Tuser_guide_form(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tuser_guide_form::FormClose(TObject *Sender,
      TCloseAction &Action)
{
        act_comp();
}
//---------------------------------------------------------------------------
void __fastcall Tuser_guide_form::FormShow(TObject *Sender)
{
AnsiString file=PathToFile(Application->ExeName);
file+="\\res\\user_guide.doc";
oc->CreateObjectFromFile(file,false);
oc->SetFocus();
}
//---------------------------------------------------------------------------
