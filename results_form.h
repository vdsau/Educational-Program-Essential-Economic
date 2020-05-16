//---------------------------------------------------------------------------

#ifndef results_formH
#define results_formH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
#include <ValEdit.hpp>

#include<vector.h>

#define lc(x,y) result_form->List->Cells[x][y]
#define fix_col(num1,num2) result_form->_fix_col(num1,num2)
#define fix_row(num1,num2) result_form->_fix_row(num1,num2)
#define _VAL result_form->val()
//---------------------------------------------------------------------------
class Tresult_form : public TForm
{
__published:	// IDE-managed Components
        TStringGrid *List;
        void __fastcall FormResize(TObject *Sender);
private:	// User declarations
inline void redraw()
        {
                List->DefaultColWidth=List->Width/List->ColCount;
                List->DefaultRowHeight=List->Height/List->RowCount;
        }
public:		// User declarations
        __fastcall Tresult_form(TComponent* Owner);
        inline void _fix_col(int ColCount,int FixColCount)
        {
                List->ColCount=ColCount;
                List->FixedCols=FixColCount;
        }
        inline void _fix_row(int RowCount,int FixColCount)
        {
                List->RowCount=RowCount;
                List->FixedRows=FixColCount;
        }
        inline void val()
        {
                for(int x=0;x<List->RowCount;x++)
                        for(int y=0;y<List->ColCount;y++)
                        {
                               List->Cells[x][y]=" ";
                        }
                List->Cells[0][0]="Название";
                List->Cells[1][0]="Значение";
        }
};

//---------------------------------------------------------------------------
extern PACKAGE Tresult_form *result_form;
//---------------------------------------------------------------------------
#endif
