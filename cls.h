//---------------------------------------------------------------------------

#ifndef clsH
#define clsH
#include<vcl.h>
//---------------------------------------------------------------------------
AnsiString FindSym(const char lol,AnsiString l);
AnsiString PathToFile(AnsiString ExePath);   //�������� ������ ���� � ����� � ������
void hide_comp();
void act_comp();//��������� ������
inline double percent(double full_num,double prcnt)
{
        return (full_num/100)*prcnt;
}
inline int round(double num)
{
        return (int)((num*100 + 0.5)/100.0);
}
#endif
 