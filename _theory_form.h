//---------------------------------------------------------------------------

#ifndef _theory_formH
#define _theory_formH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <OleCtnrs.hpp>
#include <ComCtrls.hpp>

#include"cls.h"
//---------------------------------------------------------------------------
class Ttheory_form : public TForm
{
__published:	// IDE-managed Components
        TComboBox *cb;
        TPanel *Panel1;
        TBitBtn *BitBtn1;
        TPanel *Panel2;
        TOleContainer *OleContainer1;
        TRichEdit *RichEdit1;
        TOleContainer *OleContainer2;
        TLabel *Label1;
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall BitBtn1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Ttheory_form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Ttheory_form *theory_form;
//---------------------------------------------------------------------------
#endif
