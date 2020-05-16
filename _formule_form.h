//---------------------------------------------------------------------------

#ifndef _formule_formH
#define _formule_formH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class Tformule_form : public TForm
{
__published:	// IDE-managed Components
        TListBox *ListBox1;
        TBitBtn *BitBtn1;
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
        __fastcall Tformule_form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tformule_form *formule_form;
//---------------------------------------------------------------------------
#endif
