//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "_firm_form.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tfirm_form *firm_form;
//---------------------------------------------------------------------------
__fastcall Tfirm_form::Tfirm_form(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall Tfirm_form::BitBtn1Click(TObject *Sender)
{
switch(lb->ItemIndex)
{
        case 0:
                hide_comp();
                Tact(this);
                break;
        case 1:
                hide_comp();
                Trotating_form(this);
                break;
        case 2:
                hide_comp();
                Tmanufactoring_form (this);
                break;
        case 3:
                hide_comp();
                Tmiddle_performance(this);
                break;
}
}
//---------------------------------------------------------------------------

void __fastcall Tfirm_form::FormClose(TObject *Sender,
      TCloseAction &Action)
{
        act_comp();
}
//---------------------------------------------------------------------------
