//---------------------------------------------------------------------------

#ifndef _user_guide_formH
#define _user_guide_formH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>

#include"cls.h"
#include <OleCtnrs.hpp>
//---------------------------------------------------------------------------
class Tuser_guide_form : public TForm
{
__published:	// IDE-managed Components
        TOleContainer *oc;
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tuser_guide_form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tuser_guide_form *user_guide_form;
//---------------------------------------------------------------------------
#endif
