//---------------------------------------------------------------------------

#ifndef _fixed_assetsH
#define _fixed_assetsH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>

#include"main_code4.h"
#include"main.h"
#include"cls.h"
#include"new_tech_form.h"
#include"_product_quality_form.h"
#include"_fixed_assets_form.h"
//---------------------------------------------------------------------------
class Tfixed_assets : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TBitBtn *BitBtn1;
        TBitBtn *BitBtn2;
        TListBox *lb;
        void __fastcall BitBtn2Click(TObject *Sender);
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
        __fastcall Tfixed_assets(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfixed_assets *fixed_assets;
//---------------------------------------------------------------------------
#endif
