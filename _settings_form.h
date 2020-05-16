//---------------------------------------------------------------------------

#ifndef _settings_formH
#define _settings_formH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>

#include"cls.h"
//---------------------------------------------------------------------------
class Tsettings : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *GroupBox1;
        TScrollBar *ScrollBar1;
        TLabel *Label1;
        TLabel *test_text;
        TBitBtn *accept;
        TBitBtn *cancel;
        TBevel *Bevel1;
        TBevel *Bevel2;
        TLabel *Label2;
        TComboBox *ComboBox1;
        TShape *Shape1;
        TGroupBox *GroupBox2;
        TLabel *Label3;
        TComboBox *ComboBox2;
        TShape *Shape2;
        void __fastcall ScrollBar1Change(TObject *Sender);
        void __fastcall ComboBox1Change(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall ComboBox2Change(TObject *Sender);
        void __fastcall cancelClick(TObject *Sender);
        void __fastcall acceptClick(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
        __fastcall Tsettings(TComponent* Owner);
        struct set
        {
                int font_size;//размер текста
                TColor font_color, //цвет текста
                        bkground_color;//цвет фона формы
        }set_settings;//структура с настройками
        struct default_set
        {
                int font_size;//стандартный рамзер текста
                TColor font_color,//стандартный цвет текста
                        bkground_color;//цвет фона формы
        }def_settings;//стандартные настройки
        void color(TComboBox * cb,TShape *sh);
};
//---------------------------------------------------------------------------
extern PACKAGE Tsettings *settings;
//---------------------------------------------------------------------------
#endif
