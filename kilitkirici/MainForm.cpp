//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainForm.h"
#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
void __fastcall TForm1::FormShow(TObject *Sender)
{
	_CCharBase = *(DWORD*)(KO_CHAR);
	_CRecvFunction.StartFunction();

}


void __fastcall TForm1::CheckBox1Click(TObject *Sender)
{
	if (CheckBox1->Checked) {
		hThread = CreateThread(NULL,0,(LPTHREAD_START_ROUTINE)ItemKirici,NULL,0,&dwThread);
	}else{
		TerminateThread(hThread,0);
		CloseHandle(hThread);
    }
}
//---------------------------------------------------------------------------

void ItemKirici(){
	BYTE pBuf[]={0x5B,0x08,0x02,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};
	char ctmp[16];
	memset(ctmp,0x00,16);
	long ltmp;
	int iDelay = atoi(Form1->Edit4->Text.c_str());
	CInvSlot pItem;	pItem = 0;
	while(pItem.IsFree())
		pItem = 0;
	*(DWORD*)(pBuf+5) = pItem.dwItemNum();
	int tmplen;

	while(1){
		_CPacket.PutSTR(pBuf+12,Form1->Edit1->Text.c_str(),8);
		_CPacket.PSend(pBuf,20);
		ltmp = atol(Form1->Edit1->Text.c_str());
		ltmp++;

		memset(ctmp,0x30,8);
		if(ltmp < 10){
			ltoa(ltmp,ctmp+7,10);
		}
		else if(ltmp < 100){
			ltoa(ltmp,ctmp+6,10);
		}
		else if(ltmp < 1000){
			ltoa(ltmp,ctmp+5,10);
		}
		else if(ltmp < 10000){
			ltoa(ltmp,ctmp+4,10);
		}
		else if(ltmp < 100000){
			ltoa(ltmp,ctmp+3,10);
		}
		else if(ltmp < 1000000){
			ltoa(ltmp,ctmp+2,10);
		}
		else if(ltmp < 10000000){
			ltoa(ltmp,ctmp+1,10);
		}
		else if(ltmp < 100000000){
			ltoa(ltmp,ctmp,10);
		}
		else{
			continue;
        }

		Form1->Edit1->Text = ctmp;
		Sleep(iDelay);
	}
}

