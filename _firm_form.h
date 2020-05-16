//---------------------------------------------------------------------------

#ifndef _firm_formH
#define _firm_formH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>

#include"cls.h"
#include"main.h"
#include"middle_performance_form.h"
#include"_manufactoring_form.h"
#include"_rotating_form.h"

//---------------------------------------------------------------------------
class Tfirm_form : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TBitBtn *BitBtn1;
        TBitBtn *BitBtn2;
        TListBox *lb;
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
        __fastcall Tfirm_form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfirm_form *firm_form;
//---------------------------------------------------------------------------
#endif
