//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "_human_form.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Thuman_form *human_form;
//---------------------------------------------------------------------------
__fastcall Thuman_form::Thuman_form(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Thuman_form::BitBtn2Click(TObject *Sender)
{
human_form->Close();
}
//---------------------------------------------------------------------------
void __fastcall Thuman_form::BitBtn1Click(TObject *Sender)
{
switch(lb->ItemIndex)
{
        case 0:
                hide_comp();
                Tperformance_work(this);
                break;
        case 1:
                hide_comp();
                Tworking_form(this);
                break;
        case 2:
                hide_comp();
                Tsalary_form(this);
                break;
}
}
//---------------------------------------------------------------------------
void __fastcall Thuman_form::FormClose(TObject *Sender,
      TCloseAction &Action)
{
 act_comp();        
}
//---------------------------------------------------------------------------

