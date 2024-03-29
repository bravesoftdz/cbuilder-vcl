//---------------------------------------------------------------------------
// Borland C++Builder
// Copyright (c) 1987, 1997-2002 Borland International Inc.  All Rights Reserved.
//---------------------------------------------------------------------------
#ifndef DemoLblHPP
#define DemoLblHPP
//----------------------------------------------------------------------------
#include <Dialogs.hpp>
#include <Forms.hpp>
#include <Controls.hpp>
#include <Graphics.hpp>
#include <Classes.hpp>
#include <SysUtils.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <System.hpp>

namespace Demolbl{
class PACKAGE TDemoLabel : public TGraphicControl
{
private:
	TWinControl* FFocusControl;
	void __fastcall SetFocusControl(TWinControl* Value);
	void __fastcall CMDialogChar(TWMKey& Message);
	void __fastcall CMTextChanged(TMessage& Message);

protected:
	virtual void __fastcall Notification(TComponent* AComponent, TOperation Operation);
	virtual void __fastcall Paint(void);

public:
	__fastcall virtual TDemoLabel(TComponent* AOwner);

__published:
	__property Caption ;
	__property Color ;
	__property TWinControl* FocusControl = {read=FFocusControl, write=SetFocusControl, nodefault};
	__property Font ;
	__property ParentColor ;
	__property ParentFont ;
public:
	__fastcall virtual ~TDemoLabel(void) { }

BEGIN_MESSAGE_MAP
  MESSAGE_HANDLER(CM_DIALOGCHAR, TWMKey, CMDialogChar);
  MESSAGE_HANDLER(CM_TEXTCHANGED, TMessage, CMTextChanged);
END_MESSAGE_MAP(TGraphicControl);
};
} //end namespace DemoLabel

#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Demolbl;
#endif

//-- end unit ----------------------------------------------------------------
#endif	// DemoLbl
