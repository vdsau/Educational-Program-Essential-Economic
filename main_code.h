//---------------------------------------------------------------------------

#ifndef main_codeH
#define main_codeH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>

#include"_exit_form.h"
#include"_help_form.h"
#include"_settings_form.h"
#include"_fixed_assets.h"
#include"_theory_form.h"
#include"_human_form.h"
#include"_firm_form.h"
#include"_user_guide_form.h"

//---------------------------------------------------------------------------
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <ComCtrls.hpp>
#include <ImgList.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class Tmain_form : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *exit;
        TMenuItem *_settings;
        TMenuItem *_help;
        TPanel *Panel1;
        TLabel *Label1;
        TPanel *Panel2;
        TLabel *welcome;
        TTabControl *tb;
        TImage *Image1;
        TImageList *ImageList1;
        TTimer *tmr;
        TLabel *Label2;
        TMenuItem *N1;
        TMenuItem *N2;
        TMenuItem *N3;
        TMenuItem *N4;
        TMenuItem *N5;
        TMenuItem *N6;
        TMenuItem *N7;
        TLabel *Label4;
        TTimer *tmr1;
        TMenuItem *N9;
        TLabel *Label5;
        TMenuItem *c1;
        TMenuItem *N8;
        TMenuItem *N10;
        void __fastcall exitClick(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall Label1MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall Label1MouseLeave(TObject *Sender);
        void __fastcall _settingsClick(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall tbChange(TObject *Sender);
        void __fastcall tmrTimer(TObject *Sender);
        void __fastcall N2Click(TObject *Sender);
        void __fastcall N3Click(TObject *Sender);
        void __fastcall N4Click(TObject *Sender);
        void __fastcall Label2Click(TObject *Sender);
        void __fastcall Label4Click(TObject *Sender);
        void __fastcall tmr1Timer(TObject *Sender);
        void __fastcall Label1Click(TObject *Sender);
        void __fastcall c1Click(TObject *Sender);
        void __fastcall N8Click(TObject *Sender);
        void __fastcall N10Click(TObject *Sender); //таймер для провепки наличия открытых форм
private:	// User declarations
public:		// User declarations
        __fastcall Tmain_form(TComponent* Owner);
        void _Exit();//выход из программы
        int _FontSize;//начальный размер текста
        void start_screen(int num);//изменение картинок при запуске программы
        struct start_screen_set
        {
                AnsiString PathToFile,//путь к файлу
                                ImageText;//Текст к картинке
        }*screen_array;
        int i;
        void close_all_forms();//закрыить все активные формы
        void hide_panels();//спрятать панели начального экрана
        void check_opened_form();//проеерка на открытые формы
};
//---------------------------------------------------------------------------
extern PACKAGE Tmain_form *main_form;
//---------------------------------------------------------------------------
#endif
