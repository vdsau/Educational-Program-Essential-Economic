//---------------------------------------------------------------------------


#pragma hdrstop

#include "cls.h"

//---------------------------------------------------------------------------
void hide_comp()
{
        for(int i=0;i<Application->MainForm->ComponentCount;i++)
        {
                if(Application->MainForm->Components[i]->Tag==1) //������  ������
                {
                        ((TPanel*)Application->MainForm->Components[i])->Visible=false;
                }
                if(Application->MainForm->Components[i]->Tag==4)//��������� �������
                {
                        ((TTimer*)Application->MainForm->Components[i])->Enabled=false;
                }
        }
}
//---------------------------------------------------------------------------
AnsiString FindSym(const char lol,AnsiString l)
{
       AnsiString type="",temp="";
       int pos=0;
       for(pos=l.Length();pos!=0;pos--)
                {
                        if(l[pos]!=lol)
                        {
                                temp+=l[pos];
                        }
                        else
                        {
                                break;
                        }
                }
                for(pos=temp.Length();pos!=0;pos--)  //����������� ����� � �������� �������
                {
                        type+=temp[pos];
                }
       return type;
}
//---------------------------------------------------------------------------
AnsiString PathToFile(AnsiString ExePath)   //�������� ������ ���� � ����� � ������
{
        ExePath.Delete(ExePath.Length()-FindSym('\\',ExePath).Length(),ExePath.Length()); //������� �������� ������� �� ����
        return ExePath;
}
//---------------------------------------------------------------------------
void act_comp()
{
      for(int i=0;i<Application->MainForm->ComponentCount;i++)
        {
                if(Application->MainForm->Components[i]->Tag==4)//������ �������
                {
                        ((TTimer*)Application->MainForm->Components[i])->Enabled=true;
                }
        }
}
//---------------------------------------------------------------------------
#pragma package(smart_init)
 