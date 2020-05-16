//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "_formule_form.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tformule_form *formule_form;
//---------------------------------------------------------------------------
__fastcall Tformule_form::Tformule_form(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall Tformule_form::FormClose(TObject *Sender, TCloseAction &Action)
{
Action=caFree;
}
//---------------------------------------------------------------------------
