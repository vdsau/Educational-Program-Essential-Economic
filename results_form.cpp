//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "results_form.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

Tresult_form *result_form;
//---------------------------------------------------------------------------
__fastcall Tresult_form::Tresult_form(TComponent* Owner)
        : TForm(Owner)
{
        redraw();
}
//---------------------------------------------------------------------------
void __fastcall Tresult_form::FormResize(TObject *Sender)
{
        redraw();
}
//---------------------------------------------------------------------------

