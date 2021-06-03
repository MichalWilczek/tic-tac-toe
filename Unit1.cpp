//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

// Points a correspond to the state of each image.
// a1 = 'n' (nothing)
// a1 = 'o' (circle)
// a1 = 'x' (cross)
char a1, a2, a3, a4, a5, a6, a7, a8, a9;
char who;

void checkIfGameIsFinished(){
    bool horizontal1 = (a1==a2 && a2==a3 && a1!='n');
    bool horizontal2 = (a4==a5 && a5==a6 && a4!='n');
    bool horizontal3 = (a7==a8 && a8==a9 && a7!='n');

    bool vertical1 = (a1==a4 && a4==a7 && a1!='n');
    bool vertical2 = (a2==a5 && a5==a8 && a2!='n');
    bool vertical3 = (a3==a6 && a6==a9 && a3!='n');

    bool diagonal1 = (a1==a5 && a5==a9 && a1!='n');
    bool diagonal2 = (a3==a5 && a5==a7 && a3!='n');

    if (horizontal1 || horizontal2 || horizontal3 ||
        vertical1   || vertical2   || vertical3   ||
        diagonal1   || diagonal2) {
        char *win;

        if (who=='x')
            win = "Circle wins!";
        else
            win = "Cross wins!";

        Application->MessageBox(win, "Game over", MB_OK);
    }
}


//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormCreate(TObject *Sender)
{
    ImageArea1->Picture->LoadFromFile("images/nothing.bmp");
    ImageArea2->Picture->LoadFromFile("images/nothing.bmp");
    ImageArea3->Picture->LoadFromFile("images/nothing.bmp");
    ImageArea4->Picture->LoadFromFile("images/nothing.bmp");
    ImageArea5->Picture->LoadFromFile("images/nothing.bmp");
    ImageArea6->Picture->LoadFromFile("images/nothing.bmp");
    ImageArea7->Picture->LoadFromFile("images/nothing.bmp");
    ImageArea8->Picture->LoadFromFile("images/nothing.bmp");
    ImageArea9->Picture->LoadFromFile("images/nothing.bmp");
    ImageTurn->Picture->LoadFromFile("images/osmall.bmp");

    a1='n'; a2='n'; a3='n';
    a4='n'; a5='n'; a6='n';
    a7='n'; a8='n'; a9='n';

    who='o';
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ImageArea1Click(TObject *Sender)
{
    if (a1 == 'n') {
        if (who == 'o') {
            ImageArea1->Picture->LoadFromFile("images/o.bmp");
            ImageTurn->Picture->LoadFromFile("images/xsmall.bmp");
            a1 = 'o';
            who = 'x';
        } else {
            ImageArea1->Picture->LoadFromFile("images/x.bmp");
            ImageTurn->Picture->LoadFromFile("images/osmall.bmp");
            a1 = 'x';
            who = 'o';
        }
        ImageArea1->Enabled=false;
        checkIfGameIsFinished();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ImageArea2Click(TObject *Sender)
{
    if (a2 == 'n') {
        if (who == 'o') {
            ImageArea2->Picture->LoadFromFile("images/o.bmp");
            ImageTurn->Picture->LoadFromFile("images/xsmall.bmp");
            a2 = 'o';
            who = 'x';
        } else {
            ImageArea2->Picture->LoadFromFile("images/x.bmp");
            ImageTurn->Picture->LoadFromFile("images/osmall.bmp");
            a2 = 'x';
            who = 'o';
        }
        ImageArea2->Enabled=false;
        checkIfGameIsFinished();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ImageArea3Click(TObject *Sender)
{
    if (a3 == 'n') {
        if (who == 'o') {
            ImageArea3->Picture->LoadFromFile("images/o.bmp");
            ImageTurn->Picture->LoadFromFile("images/xsmall.bmp");
            a3 = 'o';
            who = 'x';
        } else {
            ImageArea3->Picture->LoadFromFile("images/x.bmp");
            ImageTurn->Picture->LoadFromFile("images/osmall.bmp");
            a3 = 'x';
            who = 'o';
        }
        ImageArea3->Enabled=false;
        checkIfGameIsFinished();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ImageArea4Click(TObject *Sender)
{
    if (a4 == 'n') {
        if (who == 'o') {
            ImageArea4->Picture->LoadFromFile("images/o.bmp");
            ImageTurn->Picture->LoadFromFile("images/xsmall.bmp");
            a4 = 'o';
            who = 'x';
        } else {
            ImageArea4->Picture->LoadFromFile("images/x.bmp");
            ImageTurn->Picture->LoadFromFile("images/osmall.bmp");
            a4 = 'x';
            who = 'o';
        }
        ImageArea4->Enabled=false;
        checkIfGameIsFinished();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ImageArea5Click(TObject *Sender)
{
    if (a5 == 'n') {
        if (who == 'o') {
            ImageArea5->Picture->LoadFromFile("images/o.bmp");
            ImageTurn->Picture->LoadFromFile("images/xsmall.bmp");
            a5 = 'o';
            who = 'x';
        } else {
            ImageArea5->Picture->LoadFromFile("images/x.bmp");
            ImageTurn->Picture->LoadFromFile("images/osmall.bmp");
            a5 = 'x';
            who = 'o';
        }
        ImageArea5->Enabled=false;
        checkIfGameIsFinished();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ImageArea6Click(TObject *Sender)
{
    if (a6 == 'n') {
        if (who == 'o') {
            ImageArea6->Picture->LoadFromFile("images/o.bmp");
            ImageTurn->Picture->LoadFromFile("images/xsmall.bmp");
            a6 = 'o';
            who = 'x';
        } else {
            ImageArea6->Picture->LoadFromFile("images/x.bmp");
            ImageTurn->Picture->LoadFromFile("images/osmall.bmp");
            a6 = 'x';
            who = 'o';
        }
        ImageArea6->Enabled=false;
        checkIfGameIsFinished();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ImageArea7Click(TObject *Sender)
{
    if (a7 == 'n') {
        if (who == 'o') {
            ImageArea7->Picture->LoadFromFile("images/o.bmp");
            ImageTurn->Picture->LoadFromFile("images/xsmall.bmp");
            a7 = 'o';
            who = 'x';
        } else {
            ImageArea7->Picture->LoadFromFile("images/x.bmp");
            ImageTurn->Picture->LoadFromFile("images/osmall.bmp");
            a7 = 'x';
            who = 'o';
        }
        ImageArea7->Enabled=false;
        checkIfGameIsFinished();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ImageArea8Click(TObject *Sender)
{
    if (a8 == 'n') {
        if (who == 'o') {
            ImageArea8->Picture->LoadFromFile("images/o.bmp");
            ImageTurn->Picture->LoadFromFile("images/xsmall.bmp");
            a8 = 'o';
            who = 'x';
        } else {
            ImageArea8->Picture->LoadFromFile("images/x.bmp");
            ImageTurn->Picture->LoadFromFile("images/osmall.bmp");
            a8 = 'x';
            who = 'o';
        }
        ImageArea8->Enabled=false;
        checkIfGameIsFinished();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ImageArea9Click(TObject *Sender)
{
    if (a9 == 'n') {
        if (who == 'o') {
            ImageArea9->Picture->LoadFromFile("images/o.bmp");
            ImageTurn->Picture->LoadFromFile("images/xsmall.bmp");
            a9 = 'o';
            who = 'x';
        } else {
            ImageArea9->Picture->LoadFromFile("images/x.bmp");
            ImageTurn->Picture->LoadFromFile("images/osmall.bmp");
            a9 = 'x';
            who = 'o';
        }
        ImageArea9->Enabled=false;
        checkIfGameIsFinished();
    }
}
//---------------------------------------------------------------------------
