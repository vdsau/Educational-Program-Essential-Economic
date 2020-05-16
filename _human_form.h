//---------------------------------------------------------------------------

#ifndef _human_formH
#define _human_formH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>

#include"_performance_form.h"
#include"_salary_form.h"
#include"cls.h"
#include"_working_form.h"
//---------------------------------------------------------------------------
class Thuman_form : public TForm
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
        __fastcall Thuman_form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Thuman_form *human_form;
//---------------------------------------------------------------------------
#endif
