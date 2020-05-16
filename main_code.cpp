//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main_code.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tmain_form *main_form;
//---------------------------------------------------------------------------
__fastcall Tmain_form::Tmain_form(TComponent* Owner)
        : TForm(Owner)
{
        _FontSize=Label1->Font->Size;
        Label1->Caption="Раcчёт\nтехнико-экономических\nпоказателей\nпроизводства";
        Label5->Caption="Раcчёт\nтехнико-экономических\nпоказателей\nпредприятия";
        Label2->Caption="Раcчёт\nтехнико-экономических\nпоказателей\nтруда и оплаты";
        screen_array=new start_screen_set[4];
        screen_array[0].PathToFile="images\\start_screen\\entry_image.jpg";
        screen_array[0].ImageText="Добро пожаловать в EconProg!";
        screen_array[1].PathToFile="images\\start_screen\\factory_image.jpg";
        screen_array[1].ImageText="Проведение расчётов свзаных с основыми средствами!";
        screen_array[2].PathToFile="images\\start_screen\\performance_work.jpg";
        screen_array[2].ImageText="Проведение расчётов связаных с рабочим персоналом!";
        screen_array[3].PathToFile="images\\start_screen\\result_image.jpg";
        screen_array[3].ImageText="Результаты по каждому расчёту!";
        Image1->Picture->LoadFromFile(screen_array[0].PathToFile);//загрузить первую картнику
        i=0;
}
//---------------------------------------------------------------------------
void __fastcall Tmain_form::exitClick(TObject *Sender)
{
        _Exit();
}
//---------------------------------------------------------------------------
void Tmain_form::_Exit()
{
     if(exit_form->ShowModal()==mrOk)
        {
                Application->Terminate();
        }
        else
        {
                Application->Run();
        }
}
//---------------------------------------------------------------------------
void __fastcall Tmain_form::FormClose(TObject *Sender, TCloseAction &Action)
{
        _Exit();
}
//---------------------------------------------------------------------------
void __fastcall Tmain_form::Label1MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
        ((TLabel*)Sender)->Cursor=crHandPoint;
        ((TLabel*)Sender)->Font->Color=clBlue;
        ((TLabel*)Sender)->Font->Style=Label1->Font->Style<<fsUnderline;
}
//---------------------------------------------------------------------------
void __fastcall Tmain_form::Label1MouseLeave(TObject *Sender)
{
        ((TLabel*)Sender)->Font->Color=clBlack;
        ((TLabel*)Sender)->Font->Style=Label1->Font->Style>>fsUnderline;
}
//---------------------------------------------------------------------------
void __fastcall Tmain_form::_settingsClick(TObject *Sender)
{
        hide_panels();
        settings->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall Tmain_form::FormActivate(TObject *Sender)
{
        tb->TabIndex=0;
        start_screen(tb->TabIndex);
}
//---------------------------------------------------------------------------
void Tmain_form::start_screen(int num)
{
        Image1->Picture->LoadFromFile(screen_array[num].PathToFile);
        welcome->Caption=screen_array[num].ImageText;
        if(Panel1->Visible==false || Panel2->Visible==false)
        {
                Panel1->Visible=true;
                Panel2->Visible=true;
        }
        tmr->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall Tmain_form::tbChange(TObject *Sender)
{
        tmr->Enabled=false;
        start_screen(tb->TabIndex);
        tmr->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall Tmain_form::tmrTimer(TObject *Sender)
{
       if(i==4)
       {
                i=0;
       }
       else
       {
                tb->TabIndex=i;
                start_screen(tb->TabIndex);
                i++;
       }
}
//---------------------------------------------------------------------------
void __fastcall Tmain_form::N2Click(TObject *Sender)
{
        Cascade();
}
//---------------------------------------------------------------------------
void __fastcall Tmain_form::N3Click(TObject *Sender)
{
        Tile();
}
//---------------------------------------------------------------------------
void __fastcall Tmain_form::N4Click(TObject *Sender)
{
      close_all_forms();
}
//---------------------------------------------------------------------------
void __fastcall Tmain_form::Label2Click(TObject *Sender)
{
        hide_panels();
        human_form->ShowModal();
}
//---------------------------------------------------------------------------
void Tmain_form::close_all_forms()
{
for(int ix=0;ix<MDIChildCount;ix++)
{
        MDIChildren[ix]->Close();
}
}
//---------------------------------------------------------------------------
void Tmain_form::hide_panels()
{
        tmr->Enabled=false;
        hide_comp();
}
//---------------------------------------------------------------------------
void __fastcall Tmain_form::Label4Click(TObject *Sender)
{
        hide_panels();
        Ttheory_form(this);
}
//---------------------------------------------------------------------------
void __fastcall Tmain_form::tmr1Timer(TObject *Sender)
{
        check_opened_form();
}
//---------------------------------------------------------------------------
void Tmain_form::check_opened_form()
{
        if(main_form->MDIChildCount==0 && tmr->Enabled==false)
        {
                start_screen(0);
        }
}
//---------------------------------------------------------------------------
void __fastcall Tmain_form::Label1Click(TObject *Sender)
{
        hide_panels();
       fixed_assets->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tmain_form::c1Click(TObject *Sender)
{
        hide_panels();
        firm_form->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tmain_form::N8Click(TObject *Sender)
{
        hide_panels();
        help_form->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall Tmain_form::N10Click(TObject *Sender)
{
        hide_panels();
        user_guide_form->ShowModal();
}
//---------------------------------------------------------------------------

