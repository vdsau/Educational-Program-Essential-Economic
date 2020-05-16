//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "_settings_form.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tsettings *settings;
//---------------------------------------------------------------------------
__fastcall Tsettings::Tsettings(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tsettings::ScrollBar1Change(TObject *Sender)
{
        Label1->Caption="Размер текста: "+IntToStr(ScrollBar1->Position);
        test_text->Font->Size=ScrollBar1->Position;
        set_settings.font_size=test_text->Font->Size;
}
//---------------------------------------------------------------------------
void __fastcall Tsettings::ComboBox1Change(TObject *Sender)
{
       color(ComboBox1,Shape1);
       set_settings.font_color=Shape1->Brush->Color;
}
//---------------------------------------------------------------------------
void __fastcall Tsettings::FormActivate(TObject *Sender)
{
//значения по умолчанию
        def_settings.font_size=test_text->Font->Size;
        def_settings.font_color=Shape1->Brush->Color;
        def_settings.bkground_color=Shape2->Brush->Color;
}
//---------------------------------------------------------------------------
void __fastcall Tsettings::ComboBox2Change(TObject *Sender)
{
        color(ComboBox2,Shape2);
        set_settings.bkground_color=Shape2->Brush->Color;
}
//---------------------------------------------------------------------------
void Tsettings::color(TComboBox * cb,TShape *sh)
{
        switch(cb->ItemIndex)
{
        case 0: //красный
                sh->Brush->Color=clRed;
        break;
        case 1: //синий
                sh->Brush->Color=clBlue;
        break;
        case 2://зелёный
                sh->Brush->Color=clGreen;
        break;
        case 3://жёлтый
                sh->Brush->Color=clYellow;
        break;
        case 4://чёрный
                sh->Brush->Color=clBlack;
        break;
        case 5://белый
                sh->Brush->Color=clWhite;
        break;
}
}
//---------------------------------------------------------------------------
void __fastcall Tsettings::cancelClick(TObject *Sender)
{
        Shape1->Brush->Color=def_settings.font_color;
        Shape2->Brush->Color=def_settings.bkground_color;
        ScrollBar1->Position=def_settings.font_size;
}
//---------------------------------------------------------------------------
void __fastcall Tsettings::acceptClick(TObject *Sender)
{
        Application->MainForm->Font->Color=set_settings.font_color;
        Application->MainForm->Font->Size=set_settings.font_size;
        Application->MainForm->Brush->Color=set_settings.bkground_color;
}
//---------------------------------------------------------------------------

void __fastcall Tsettings::FormClose(TObject *Sender, TCloseAction &Action)
{
 act_comp();        
}
//---------------------------------------------------------------------------

