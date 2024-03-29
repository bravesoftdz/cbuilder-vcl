//---------------------------------------------------------------------------
// Borland C++Builder
// Copyright (c) 1987, 1997-2002 Borland International Inc.  All Rights Reserved.
//---------------------------------------------------------------------------
#ifndef IbevntsH
#define IbevntsH
//---------------------------------------------------------------------------
#include <Grids.hpp>
#include <StdCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Dialogs.hpp>
#include <Forms.hpp>
#include <Controls.hpp>
#include <Graphics.hpp>
#include <Classes.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysUtils.hpp>
#include <System.hpp>

namespace Ibevnts
{
//-- type declarations -------------------------------------------------------
class PACKAGE TIBEAEventsEditor : public Forms::TForm
{
__published:
        TPanel *Panel1;
        TPanel *Panel2;
        TStringGrid *cEvents;
        TLabel *RequestedEvents;
        TButton *bOK;
        TButton *bCancel;
	void __fastcall FormCreate(System::TObject *Sender);
public:
	__fastcall virtual TIBEAEventsEditor(Classes::TComponent *AOwner) : Forms::TForm(
		AOwner) { }
	__fastcall TIBEAEventsEditor(Classes::TComponent *AOwner, int
		Dummy) : Forms::TForm(AOwner, Dummy) { }
	__fastcall virtual ~TIBEAEventsEditor(void) { }

};

//-- var, const, procedure ---------------------------------------------------
extern TIBEAEventsEditor *IBEAEventsEditor;
bool __fastcall EditAlerterEvents(Classes::TStrings *Events);
}       /* namespace Ibevnts */

#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Ibevnts;
#endif
//-- end unit ----------------------------------------------------------------
#endif  // Ibevnts
