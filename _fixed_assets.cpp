//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "_fixed_assets.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tfixed_assets *fixed_assets;
//---------------------------------------------------------------------------
__fastcall Tfixed_assets::Tfixed_assets(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall Tfixed_assets::BitBtn2Click(TObject *Sender)
{
fixed_assets->Close();
}
//---------------------------------------------------------------------------


void __fastcall Tfixed_assets::BitBtn1Click(TObject *Sender)
{
switch(lb->ItemIndex)
{
        case 0:
                hide_comp();
                Tfixed_assets_form(this);
                break;
        case 1:
                hide_comp();
                Tecon4_form(this);
                break;
        case 2:
                hide_comp();
                Tnew_tech(this);
                break;
        case 3:
                hide_comp();
                Tproduct_quality(this);
                break;
}
}
//---------------------------------------------------------------------------

void __fastcall Tfixed_assets::FormClose(TObject *Sender,
      TCloseAction &Action)
{
        act_comp();
}
//---------------------------------------------------------------------------

