//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int x=-4,y=-5;
int p=5;
int d,
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::timerTimer(TObject *Sender)
{
ball->Left+=x;
ball->Top+=y;

//zderzenie z lew� scian�
if(ball->Left<= backround->Left)  {x=-x;}
//zderzenie z g�r�
if(ball->Top<= backround->Top)    {y=-y;}
// zderzenie z praw� stron�
if(ball->Left+ball->Width>= backround->Left+backround->Width) {x=-x;}
// zderznie z kostk�, ko�ko ma 32x32px czyli promie� to 16px
// srodek pi�ki to:
// ball->Left+ball->Width/2 && ball->Top+ball->Width/2;

d=



















// odbicie z paletk�
if(ball->Left+ball->Width/2>=paddle->Left    &&
   ball->Left+ball->Width/2<=paddle->Left+5  &&
   ball->Top+ball->Height >= paddle->Top     &&
   ball->Top+ball->Height <= paddle->Top+4)
   { y=-y;
   if(x>-8&&x<=8)
   {x=x-5;}
   }

if(ball->Left+ball->Width/2>=paddle->Left+5  &&
   ball->Left+ball->Width/2<=paddle->Left+10 &&
   ball->Top+ball->Height >= paddle->Top     &&
   ball->Top+ball->Height <= paddle->Top+4)
   { y=-y;
   if(x>-8&&x<=8)
   {x=x-5;}
   }

if(ball->Left+ball->Width/2>paddle->Left+10 &&
   ball->Left+ball->Width/2<=paddle->Left+15 &&
   ball->Top+ball->Height >= paddle->Top     &&
   ball->Top+ball->Height <= paddle->Top+4)
   { y=-y;
   if(x>-8&&x<=8)
   {x=x-4;}
   }

if(ball->Left+ball->Width/2>paddle->Left+15 &&
   ball->Left+ball->Width/2<=paddle->Left+20 &&
   ball->Top+ball->Height >= paddle->Top     &&
   ball->Top+ball->Height <= paddle->Top+4)
   { y=-y;
    if(x>-8&&x<=8)
   {x=x-4;}
   }

if(ball->Left+ball->Width/2>paddle->Left+20 &&
   ball->Left+ball->Width/2<=paddle->Left+25 &&
   ball->Top+ball->Height >= paddle->Top     &&
   ball->Top+ball->Height <= paddle->Top+4)
   { y=-y;
    if(x>-8&&x<=8)
   {x=x-3;}
   }

if(ball->Left+ball->Width/2>paddle->Left+25 &&
   ball->Left+ball->Width/2<=paddle->Left+35 &&
   ball->Top+ball->Height >= paddle->Top     &&
   ball->Top+ball->Height <= paddle->Top+4)
   { y=-y;
    if(x>-8&&x<=8)
   {x=x-2;}
   }

if(ball->Left+ball->Width/2>paddle->Left+35 &&
   ball->Left+ball->Width/2<=paddle->Left+45 &&
   ball->Top+ball->Height >= paddle->Top     &&
   ball->Top+ball->Height <= paddle->Top+4)
   { y=-y;
   if(x>-8&&x<=8)
   {x=x-1;}
   }






if(ball->Left+ball->Width/2>paddle->Left+45 &&
   ball->Left+ball->Width/2<=paddle->Left+55 &&
   ball->Top+ball->Height >= paddle->Top     &&
   ball->Top+ball->Height <= paddle->Top+4)
   { y=-y;}







if(ball->Left+ball->Width/2>paddle->Left+55 &&
   ball->Left+ball->Width/2<=paddle->Left+65 &&
   ball->Top+ball->Height >= paddle->Top     &&
   ball->Top+ball->Height <= paddle->Top+4)
   { y=-y;
   if(x>-8&&x<=8)
   {x=x+1;}
   }

if(ball->Left+ball->Width/2>paddle->Left+65 &&
   ball->Left+ball->Width/2<=paddle->Left+75 &&
   ball->Top+ball->Height >= paddle->Top     &&
   ball->Top+ball->Height <= paddle->Top+4)
   { y=-y;
    if(x>-8&&x<=8)
   {x=x+2;}
   }

if(ball->Left+ball->Width/2>paddle->Left+75 &&
   ball->Left+ball->Width/2<=paddle->Left+80 &&
   ball->Top+ball->Height >= paddle->Top     &&
   ball->Top+ball->Height <= paddle->Top+4)
   { y=-y;
   if(x>-8&&x<=8)
   {x=x+3;}
    }
if(ball->Left+ball->Width/2>paddle->Left+80 &&
   ball->Left+ball->Width/2<=paddle->Left+85 &&
   ball->Top+ball->Height >= paddle->Top     &&
   ball->Top+ball->Height <= paddle->Top+4)
   { y=-y;
     if(x>-8&&x<=8)
   {x=x+4;}
    }
if(ball->Left+ball->Width/2>paddle->Left+85  &&
   ball->Left+ball->Width/2<=paddle->Left+90 &&
   ball->Top+ball->Height >= paddle->Top      &&
   ball->Top+ball->Height <= paddle->Top+4)
   { y=-y;
     if(x>-8&&x<=8)
   {x=x+4;}
    }

if(ball->Left+ball->Width/2>paddle->Left+90  &&
   ball->Left+ball->Width/2<=paddle->Left+95&&
   ball->Top+ball->Height >= paddle->Top      &&
   ball->Top+ball->Height <= paddle->Top+4)
   { y=-y;
    if(x>-8&&x<=8)
   {x=x+5;}
    }

if(ball->Left+ball->Width/2>paddle->Left+95  &&
   ball->Left+ball->Width/2<=paddle->Left+100 &&
   ball->Top+ball->Height >= paddle->Top      &&
   ball->Top+ball->Height <= paddle->Top+4)
   { y=-y;
    if(x>-8&&x<=8)
   {x=x+5;}
    }











// zderzenie z do�em
if(ball->Top+ball->Height >= backround->Top+backround->Height+30)
 {
 timer->Enabled=false;
 if(Application->MessageBox("YOU LOSSER!   XD","Przegrana",MB_OK | MB_ICONWARNING)==IDOK)
 {Application->Terminate();}

 }


}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
 if(Key==VK_LEFT)  lewo->Enabled=true;
 if(Key==VK_RIGHT) prawo->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
 if(Key==VK_LEFT)  lewo->Enabled=false;
 if(Key==VK_RIGHT) prawo->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::lewoTimer(TObject *Sender)
{
paddle->Left-=p;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::prawoTimer(TObject *Sender)
{
paddle->Left+=p;
}
//---------------------------------------------------------------------------

