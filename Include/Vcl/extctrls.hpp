// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ExtCtrls.pas' rev: 6.00

#ifndef ExtCtrlsHPP
#define ExtCtrlsHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <StdCtrls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Extctrls
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TShapeType { stRectangle, stSquare, stRoundRect, stRoundSquare, stEllipse, stCircle };
#pragma option pop

class DELPHICLASS TShape;
class PASCALIMPLEMENTATION TShape : public Controls::TGraphicControl 
{
	typedef Controls::TGraphicControl inherited;
	
private:
	Graphics::TPen* FPen;
	Graphics::TBrush* FBrush;
	TShapeType FShape;
	void __fastcall SetBrush(Graphics::TBrush* Value);
	void __fastcall SetPen(Graphics::TPen* Value);
	void __fastcall SetShape(TShapeType Value);
	
protected:
	virtual void __fastcall Paint(void);
	
public:
	__fastcall virtual TShape(Classes::TComponent* AOwner);
	__fastcall virtual ~TShape(void);
	
__published:
	void __fastcall StyleChanged(System::TObject* Sender);
	__property Align  = {default=0};
	__property Anchors  = {default=3};
	__property Graphics::TBrush* Brush = {read=FBrush, write=SetBrush};
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property Constraints ;
	__property ParentShowHint  = {default=1};
	__property Graphics::TPen* Pen = {read=FPen, write=SetPen};
	__property TShapeType Shape = {read=FShape, write=SetShape, default=0};
	__property ShowHint ;
	__property Visible  = {default=1};
	__property OnContextPopup ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnStartDock ;
	__property OnStartDrag ;
};


class DELPHICLASS TPaintBox;
class PASCALIMPLEMENTATION TPaintBox : public Controls::TGraphicControl 
{
	typedef Controls::TGraphicControl inherited;
	
private:
	Classes::TNotifyEvent FOnPaint;
	
protected:
	virtual void __fastcall Paint(void);
	
public:
	__fastcall virtual TPaintBox(Classes::TComponent* AOwner);
	__property Canvas ;
	
__published:
	__property Align  = {default=0};
	__property Anchors  = {default=3};
	__property Color  = {default=-2147483643};
	__property Constraints ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property Font ;
	__property ParentColor  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property Visible  = {default=1};
	__property OnClick ;
	__property OnContextPopup ;
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property Classes::TNotifyEvent OnPaint = {read=FOnPaint, write=FOnPaint};
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TPaintBox(void) { }
	#pragma option pop
	
};


class DELPHICLASS TImage;
class PASCALIMPLEMENTATION TImage : public Controls::TGraphicControl 
{
	typedef Controls::TGraphicControl inherited;
	
private:
	Graphics::TPicture* FPicture;
	Graphics::TProgressEvent FOnProgress;
	bool FStretch;
	bool FCenter;
	bool FIncrementalDisplay;
	bool FTransparent;
	bool FDrawing;
	bool FProportional;
	Graphics::TCanvas* __fastcall GetCanvas(void);
	void __fastcall PictureChanged(System::TObject* Sender);
	void __fastcall SetCenter(bool Value);
	void __fastcall SetPicture(Graphics::TPicture* Value);
	void __fastcall SetStretch(bool Value);
	void __fastcall SetTransparent(bool Value);
	void __fastcall SetProportional(bool Value);
	
protected:
	virtual bool __fastcall CanAutoSize(int &NewWidth, int &NewHeight);
	Types::TRect __fastcall DestRect();
	bool __fastcall DoPaletteChange(void);
	DYNAMIC HPALETTE __fastcall GetPalette(void);
	virtual void __fastcall Paint(void);
	DYNAMIC void __fastcall Progress(System::TObject* Sender, Graphics::TProgressStage Stage, Byte PercentDone, bool RedrawNow, const Types::TRect &R, const AnsiString Msg);
	
public:
	__fastcall virtual TImage(Classes::TComponent* AOwner);
	__fastcall virtual ~TImage(void);
	__property Graphics::TCanvas* Canvas = {read=GetCanvas};
	
__published:
	__property Align  = {default=0};
	__property Anchors  = {default=3};
	__property AutoSize  = {default=0};
	__property bool Center = {read=FCenter, write=SetCenter, default=0};
	__property Constraints ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property bool IncrementalDisplay = {read=FIncrementalDisplay, write=FIncrementalDisplay, default=0};
	__property ParentShowHint  = {default=1};
	__property Graphics::TPicture* Picture = {read=FPicture, write=SetPicture};
	__property PopupMenu ;
	__property bool Proportional = {read=FProportional, write=SetProportional, default=0};
	__property ShowHint ;
	__property bool Stretch = {read=FStretch, write=SetStretch, default=0};
	__property bool Transparent = {read=FTransparent, write=SetTransparent, default=0};
	__property Visible  = {default=1};
	__property OnClick ;
	__property OnContextPopup ;
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property Graphics::TProgressEvent OnProgress = {read=FOnProgress, write=FOnProgress};
	__property OnStartDock ;
	__property OnStartDrag ;
};


#pragma option push -b-
enum TBevelStyle { bsLowered, bsRaised };
#pragma option pop

#pragma option push -b-
enum TBevelShape { bsBox, bsFrame, bsTopLine, bsBottomLine, bsLeftLine, bsRightLine, bsSpacer };
#pragma option pop

class DELPHICLASS TBevel;
class PASCALIMPLEMENTATION TBevel : public Controls::TGraphicControl 
{
	typedef Controls::TGraphicControl inherited;
	
private:
	TBevelStyle FStyle;
	TBevelShape FShape;
	void __fastcall SetStyle(TBevelStyle Value);
	void __fastcall SetShape(TBevelShape Value);
	
protected:
	virtual void __fastcall Paint(void);
	
public:
	__fastcall virtual TBevel(Classes::TComponent* AOwner);
	
__published:
	__property Align  = {default=0};
	__property Anchors  = {default=3};
	__property Constraints ;
	__property ParentShowHint  = {default=1};
	__property TBevelShape Shape = {read=FShape, write=SetShape, default=0};
	__property ShowHint ;
	__property TBevelStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property Visible  = {default=1};
public:
	#pragma option push -w-inl
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TBevel(void) { }
	#pragma option pop
	
};


class DELPHICLASS TTimer;
class PASCALIMPLEMENTATION TTimer : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	unsigned FInterval;
	HWND FWindowHandle;
	Classes::TNotifyEvent FOnTimer;
	bool FEnabled;
	void __fastcall UpdateTimer(void);
	void __fastcall SetEnabled(bool Value);
	void __fastcall SetInterval(unsigned Value);
	void __fastcall SetOnTimer(Classes::TNotifyEvent Value);
	void __fastcall WndProc(Messages::TMessage &Msg);
	
protected:
	DYNAMIC void __fastcall Timer(void);
	
public:
	__fastcall virtual TTimer(Classes::TComponent* AOwner);
	__fastcall virtual ~TTimer(void);
	
__published:
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=1};
	__property unsigned Interval = {read=FInterval, write=SetInterval, default=1000};
	__property Classes::TNotifyEvent OnTimer = {read=FOnTimer, write=SetOnTimer};
};


typedef Controls::TBevelCut TPanelBevel;

class DELPHICLASS TCustomPanel;
class PASCALIMPLEMENTATION TCustomPanel : public Controls::TCustomControl 
{
	typedef Controls::TCustomControl inherited;
	
private:
	bool FAutoSizeDocking;
	Controls::TBevelCut FBevelInner;
	Controls::TBevelCut FBevelOuter;
	Controls::TBevelWidth FBevelWidth;
	Controls::TBorderWidth FBorderWidth;
	Forms::TFormBorderStyle FBorderStyle;
	bool FFullRepaint;
	bool FLocked;
	Classes::TAlignment FAlignment;
	HIDESBASE MESSAGE void __fastcall CMBorderChanged(Messages::TMessage &Message);
	MESSAGE void __fastcall CMTextChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Messages::TMessage &Message);
	MESSAGE void __fastcall CMIsToolControl(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanged(Messages::TWMWindowPosMsg &Message);
	void __fastcall SetAlignment(Classes::TAlignment Value);
	void __fastcall SetBevelInner(Controls::TBevelCut Value);
	void __fastcall SetBevelOuter(Controls::TBevelCut Value);
	HIDESBASE void __fastcall SetBevelWidth(Controls::TBevelWidth Value);
	HIDESBASE void __fastcall SetBorderWidth(Controls::TBorderWidth Value);
	void __fastcall SetBorderStyle(Forms::TBorderStyle Value);
	HIDESBASE MESSAGE void __fastcall CMDockClient(Controls::TCMDockClient &Message);
	
protected:
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	virtual void __fastcall AdjustClientRect(Types::TRect &Rect);
	virtual bool __fastcall CanAutoSize(int &NewWidth, int &NewHeight);
	virtual void __fastcall Paint(void);
	__property Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=2};
	__property Controls::TBevelCut BevelInner = {read=FBevelInner, write=SetBevelInner, default=0};
	__property Controls::TBevelCut BevelOuter = {read=FBevelOuter, write=SetBevelOuter, default=2};
	__property Controls::TBevelWidth BevelWidth = {read=FBevelWidth, write=SetBevelWidth, default=1};
	__property Controls::TBorderWidth BorderWidth = {read=FBorderWidth, write=SetBorderWidth, default=0};
	__property Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=0};
	__property Color  = {default=-2147483633};
	__property bool FullRepaint = {read=FFullRepaint, write=FFullRepaint, default=1};
	__property bool Locked = {read=FLocked, write=FLocked, default=0};
	__property ParentColor  = {default=0};
	
public:
	__fastcall virtual TCustomPanel(Classes::TComponent* AOwner);
	DYNAMIC Classes::TAlignment __fastcall GetControlsAlignment(void);
public:
	#pragma option push -w-inl
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TCustomPanel(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TCustomPanel(HWND ParentWindow) : Controls::TCustomControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TPanel;
class PASCALIMPLEMENTATION TPanel : public TCustomPanel 
{
	typedef TCustomPanel inherited;
	
public:
	__property DockManager ;
	
__published:
	__property Align  = {default=0};
	__property Alignment  = {default=2};
	__property Anchors  = {default=3};
	__property AutoSize  = {default=0};
	__property BevelInner  = {default=0};
	__property BevelOuter  = {default=2};
	__property BevelWidth  = {default=1};
	__property BiDiMode ;
	__property BorderWidth  = {default=0};
	__property BorderStyle  = {default=0};
	__property Caption ;
	__property Color  = {default=-2147483633};
	__property Constraints ;
	__property Ctl3D ;
	__property UseDockManager  = {default=1};
	__property DockSite  = {default=0};
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property FullRepaint  = {default=1};
	__property Font ;
	__property Locked  = {default=0};
	__property ParentBiDiMode  = {default=1};
	__property ParentColor  = {default=0};
	__property ParentCtl3D  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=0};
	__property Visible  = {default=1};
	__property OnCanResize ;
	__property OnClick ;
	__property OnConstrainedResize ;
	__property OnContextPopup ;
	__property OnDockDrop ;
	__property OnDockOver ;
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnGetSiteInfo ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnResize ;
	__property OnStartDock ;
	__property OnStartDrag ;
	__property OnUnDock ;
public:
	#pragma option push -w-inl
	/* TCustomPanel.Create */ inline __fastcall virtual TPanel(Classes::TComponent* AOwner) : TCustomPanel(AOwner) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TPanel(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TPanel(HWND ParentWindow) : TCustomPanel(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TPage;
class PASCALIMPLEMENTATION TPage : public Controls::TCustomControl 
{
	typedef Controls::TCustomControl inherited;
	
private:
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Messages::TWMNCHitTest &Message);
	
protected:
	virtual void __fastcall ReadState(Classes::TReader* Reader);
	virtual void __fastcall Paint(void);
	
public:
	__fastcall virtual TPage(Classes::TComponent* AOwner);
	
__published:
	__property Caption ;
	__property Height  = {stored=false};
	__property TabOrder  = {stored=false, default=-1};
	__property Visible  = {stored=false, default=1};
	__property Width  = {stored=false};
public:
	#pragma option push -w-inl
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TPage(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TPage(HWND ParentWindow) : Controls::TCustomControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TNotebook;
class PASCALIMPLEMENTATION TNotebook : public Controls::TCustomControl 
{
	typedef Controls::TCustomControl inherited;
	
private:
	Classes::TList* FPageList;
	Classes::TStrings* FAccess;
	int FPageIndex;
	Classes::TNotifyEvent FOnPageChanged;
	void __fastcall SetPages(Classes::TStrings* Value);
	void __fastcall SetActivePage(const AnsiString Value);
	AnsiString __fastcall GetActivePage();
	void __fastcall SetPageIndex(int Value);
	
protected:
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	DYNAMIC Classes::TComponent* __fastcall GetChildOwner(void);
	DYNAMIC void __fastcall GetChildren(Classes::TGetChildProc Proc, Classes::TComponent* Root);
	virtual void __fastcall ReadState(Classes::TReader* Reader);
	virtual void __fastcall ShowControl(Controls::TControl* AControl);
	
public:
	__fastcall virtual TNotebook(Classes::TComponent* AOwner);
	__fastcall virtual ~TNotebook(void);
	
__published:
	__property AnsiString ActivePage = {read=GetActivePage, write=SetActivePage, stored=false};
	__property Align  = {default=0};
	__property Anchors  = {default=3};
	__property Color  = {default=-2147483643};
	__property Ctl3D ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Font ;
	__property Enabled  = {default=1};
	__property Constraints ;
	__property int PageIndex = {read=FPageIndex, write=SetPageIndex, default=0};
	__property Classes::TStrings* Pages = {read=FAccess, write=SetPages, stored=false};
	__property ParentColor  = {default=1};
	__property ParentCtl3D  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=0};
	__property Visible  = {default=1};
	__property OnClick ;
	__property OnContextPopup ;
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property Classes::TNotifyEvent OnPageChanged = {read=FOnPageChanged, write=FOnPageChanged};
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TNotebook(HWND ParentWindow) : Controls::TCustomControl(ParentWindow) { }
	#pragma option pop
	
};


typedef void __fastcall (__closure *TSectionEvent)(System::TObject* Sender, int ASection, int AWidth);

class DELPHICLASS THeader;
class PASCALIMPLEMENTATION THeader : public Controls::TCustomControl 
{
	typedef Controls::TCustomControl inherited;
	
private:
	Classes::TStrings* FSections;
	#pragma pack(push, 1)
	Types::TPoint FHitTest;
	#pragma pack(pop)
	
	bool FCanResize;
	bool FAllowResize;
	Forms::TFormBorderStyle FBorderStyle;
	int FResizeSection;
	int FMouseOffset;
	TSectionEvent FOnSizing;
	TSectionEvent FOnSized;
	void __fastcall SetBorderStyle(Forms::TBorderStyle Value);
	void __fastcall FreeSections(void);
	void __fastcall SetSections(Classes::TStrings* Strings);
	int __fastcall GetWidth(int X);
	HIDESBASE void __fastcall SetWidth(int X, int Value);
	HIDESBASE MESSAGE void __fastcall WMSetCursor(Messages::TWMSetCursor &Msg);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Messages::TWMNCHitTest &Msg);
	HIDESBASE MESSAGE void __fastcall WMSize(Messages::TWMSize &Msg);
	
protected:
	virtual void __fastcall Paint(void);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall Sizing(int ASection, int AWidth);
	DYNAMIC void __fastcall Sized(int ASection, int AWidth);
	
public:
	__fastcall virtual THeader(Classes::TComponent* AOwner);
	__fastcall virtual ~THeader(void);
	__property int SectionWidth[int X] = {read=GetWidth, write=SetWidth};
	
__published:
	__property Align  = {default=0};
	__property bool AllowResize = {read=FAllowResize, write=FAllowResize, default=1};
	__property Anchors  = {default=3};
	__property Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property Constraints ;
	__property Enabled  = {default=1};
	__property Font ;
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property Classes::TStrings* Sections = {read=FSections, write=SetSections};
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=0};
	__property Visible  = {default=1};
	__property OnContextPopup ;
	__property TSectionEvent OnSizing = {read=FOnSizing, write=FOnSizing};
	__property TSectionEvent OnSized = {read=FOnSized, write=FOnSized};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall THeader(HWND ParentWindow) : Controls::TCustomControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TCustomRadioGroup;
class PASCALIMPLEMENTATION TCustomRadioGroup : public Stdctrls::TCustomGroupBox 
{
	typedef Stdctrls::TCustomGroupBox inherited;
	
private:
	Classes::TList* FButtons;
	Classes::TStrings* FItems;
	int FItemIndex;
	int FColumns;
	bool FReading;
	bool FUpdating;
	void __fastcall ArrangeButtons(void);
	void __fastcall ButtonClick(System::TObject* Sender);
	void __fastcall ItemsChange(System::TObject* Sender);
	void __fastcall SetButtonCount(int Value);
	void __fastcall SetColumns(int Value);
	void __fastcall SetItemIndex(int Value);
	void __fastcall SetItems(Classes::TStrings* Value);
	void __fastcall UpdateButtons(void);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Messages::TWMSize &Message);
	
protected:
	virtual void __fastcall Loaded(void);
	virtual void __fastcall ReadState(Classes::TReader* Reader);
	virtual bool __fastcall CanModify(void);
	DYNAMIC void __fastcall GetChildren(Classes::TGetChildProc Proc, Classes::TComponent* Root);
	__property int Columns = {read=FColumns, write=SetColumns, default=1};
	__property int ItemIndex = {read=FItemIndex, write=SetItemIndex, default=-1};
	__property Classes::TStrings* Items = {read=FItems, write=SetItems};
	
public:
	__fastcall virtual TCustomRadioGroup(Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomRadioGroup(void);
	DYNAMIC void __fastcall FlipChildren(bool AllLevels);
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TCustomRadioGroup(HWND ParentWindow) : Stdctrls::TCustomGroupBox(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TRadioGroup;
class PASCALIMPLEMENTATION TRadioGroup : public TCustomRadioGroup 
{
	typedef TCustomRadioGroup inherited;
	
__published:
	__property Align  = {default=0};
	__property Anchors  = {default=3};
	__property BiDiMode ;
	__property Caption ;
	__property Color  = {default=-2147483643};
	__property Columns  = {default=1};
	__property Ctl3D ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property Font ;
	__property ItemIndex  = {default=-1};
	__property Items ;
	__property Constraints ;
	__property ParentBiDiMode  = {default=1};
	__property ParentColor  = {default=1};
	__property ParentCtl3D  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=0};
	__property Visible  = {default=1};
	__property OnClick ;
	__property OnContextPopup ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TCustomRadioGroup.Create */ inline __fastcall virtual TRadioGroup(Classes::TComponent* AOwner) : TCustomRadioGroup(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomRadioGroup.Destroy */ inline __fastcall virtual ~TRadioGroup(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TRadioGroup(HWND ParentWindow) : TCustomRadioGroup(ParentWindow) { }
	#pragma option pop
	
};


typedef int NaturalNumber;

typedef void __fastcall (__closure *TCanResizeEvent)(System::TObject* Sender, int &NewSize, bool &Accept);

#pragma option push -b-
enum TResizeStyle { rsNone, rsLine, rsUpdate, rsPattern };
#pragma option pop

class DELPHICLASS TSplitter;
class PASCALIMPLEMENTATION TSplitter : public Controls::TGraphicControl 
{
	typedef Controls::TGraphicControl inherited;
	
private:
	Controls::TWinControl* FActiveControl;
	bool FAutoSnap;
	bool FBeveled;
	Graphics::TBrush* FBrush;
	Controls::TControl* FControl;
	#pragma pack(push, 1)
	Types::TPoint FDownPos;
	#pragma pack(pop)
	
	HDC FLineDC;
	bool FLineVisible;
	NaturalNumber FMinSize;
	int FMaxSize;
	int FNewSize;
	Controls::TKeyEvent FOldKeyDown;
	int FOldSize;
	HBRUSH FPrevBrush;
	TResizeStyle FResizeStyle;
	int FSplit;
	TCanResizeEvent FOnCanResize;
	Classes::TNotifyEvent FOnMoved;
	Classes::TNotifyEvent FOnPaint;
	void __fastcall AllocateLineDC(void);
	void __fastcall CalcSplitSize(int X, int Y, int &NewSize, int &Split);
	void __fastcall DrawLine(void);
	Controls::TControl* __fastcall FindControl(void);
	void __fastcall FocusKeyDown(System::TObject* Sender, Word &Key, Classes::TShiftState Shift);
	void __fastcall ReleaseLineDC(void);
	void __fastcall SetBeveled(bool Value);
	void __fastcall UpdateControlSize(void);
	void __fastcall UpdateSize(int X, int Y);
	
protected:
	HIDESBASE virtual bool __fastcall CanResize(int &NewSize);
	HIDESBASE virtual bool __fastcall DoCanResize(int &NewSize);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint(void);
	DYNAMIC void __fastcall RequestAlign(void);
	DYNAMIC void __fastcall StopSizing(void);
	
public:
	__fastcall virtual TSplitter(Classes::TComponent* AOwner);
	__fastcall virtual ~TSplitter(void);
	__property Canvas ;
	
__published:
	__property Align  = {default=3};
	__property bool AutoSnap = {read=FAutoSnap, write=FAutoSnap, default=1};
	__property bool Beveled = {read=FBeveled, write=SetBeveled, default=0};
	__property Color  = {default=-2147483643};
	__property Constraints ;
	__property NaturalNumber MinSize = {read=FMinSize, write=FMinSize, default=30};
	__property ParentColor  = {default=1};
	__property TResizeStyle ResizeStyle = {read=FResizeStyle, write=FResizeStyle, default=3};
	__property Visible  = {default=1};
	__property TCanResizeEvent OnCanResize = {read=FOnCanResize, write=FOnCanResize};
	__property Classes::TNotifyEvent OnMoved = {read=FOnMoved, write=FOnMoved};
	__property Classes::TNotifyEvent OnPaint = {read=FOnPaint, write=FOnPaint};
};


#pragma option push -b-
enum TBandPaintOption { bpoGrabber, bpoFrame };
#pragma option pop

typedef Set<TBandPaintOption, bpoGrabber, bpoFrame>  TBandPaintOptions;

typedef void __fastcall (__closure *TBandDragEvent)(System::TObject* Sender, Controls::TControl* Control, bool &Drag);

typedef void __fastcall (__closure *TBandInfoEvent)(System::TObject* Sender, Controls::TControl* Control, Types::TRect &Insets, int &PreferredSize, int &RowCount);

typedef void __fastcall (__closure *TBandMoveEvent)(System::TObject* Sender, Controls::TControl* Control, Types::TRect &ARect);

typedef void __fastcall (__closure *TBandPaintEvent)(System::TObject* Sender, Controls::TControl* Control, Graphics::TCanvas* Canvas, Types::TRect &ARect, TBandPaintOptions &Options);

typedef int TRowSize;

class DELPHICLASS TCustomControlBar;
class PASCALIMPLEMENTATION TCustomControlBar : public Controls::TCustomControl 
{
	typedef Controls::TCustomControl inherited;
	
private:
	bool FAligning;
	bool FAutoDrag;
	bool FAutoDock;
	Controls::TControl* FDockingControl;
	Controls::TControl* FDragControl;
	#pragma pack(push, 1)
	Types::TPoint FDragOffset;
	#pragma pack(pop)
	
	bool FDrawing;
	bool FFloating;
	Classes::TList* FItems;
	Graphics::TPicture* FPicture;
	TRowSize FRowSize;
	bool FRowSnap;
	TBandDragEvent FOnBandDrag;
	TBandInfoEvent FOnBandInfo;
	TBandMoveEvent FOnBandMove;
	TBandPaintEvent FOnBandPaint;
	Classes::TNotifyEvent FOnPaint;
	void __fastcall DoAlignControl(Controls::TControl* AControl);
	void * __fastcall FindPos(Controls::TControl* AControl);
	void * __fastcall HitTest2(int X, int Y);
	void __fastcall DockControl(Controls::TControl* AControl, const Types::TRect &ARect, Classes::TList* BreakList, Classes::TList* IndexList, Classes::TList* SizeList, void * Parent, bool ChangedPriorBreak, const Types::TRect &Insets, int PreferredSize, int RowCount, bool Existing);
	void __fastcall PictureChanged(System::TObject* Sender);
	void __fastcall SetPicture(const Graphics::TPicture* Value);
	void __fastcall SetRowSize(TRowSize Value);
	void __fastcall SetRowSnap(bool Value);
	void __fastcall UnDockControl(Controls::TControl* AControl);
	bool __fastcall UpdateItems(Controls::TControl* AControl);
	HIDESBASE MESSAGE void __fastcall CMControlListChange(Controls::TCMControlListChange &Message);
	HIDESBASE MESSAGE void __fastcall CMDesignHitTest(Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall CNKeyDown(Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	
protected:
	virtual void __fastcall AlignControls(Controls::TControl* AControl, Types::TRect &ARect);
	virtual bool __fastcall CanAutoSize(int &NewWidth, int &NewHeight);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	virtual void __fastcall DoBandMove(Controls::TControl* Control, Types::TRect &ARect);
	virtual void __fastcall DoBandPaint(Controls::TControl* Control, Graphics::TCanvas* Canvas, Types::TRect &ARect, TBandPaintOptions &Options);
	DYNAMIC void __fastcall DockOver(Controls::TDragDockObject* Source, int X, int Y, Controls::TDragState State, bool &Accept);
	bool __fastcall DoPaletteChange(void);
	virtual bool __fastcall DragControl(Controls::TControl* AControl, int X, int Y, bool KeepCapture = false);
	virtual void __fastcall GetControlInfo(Controls::TControl* AControl, Types::TRect &Insets, int &PreferredSize, int &RowCount);
	DYNAMIC HPALETTE __fastcall GetPalette(void);
	DYNAMIC void __fastcall GetSiteInfo(Controls::TControl* Client, Types::TRect &InfluenceRect, const Types::TPoint &MousePos, bool &CanDock);
	Controls::TControl* __fastcall HitTest(int X, int Y);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint(void);
	virtual void __fastcall PaintControlFrame(Graphics::TCanvas* Canvas, Controls::TControl* AControl, Types::TRect &ARect);
	
public:
	__fastcall virtual TCustomControlBar(Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomControlBar(void);
	DYNAMIC void __fastcall FlipChildren(bool AllLevels);
	virtual void __fastcall StickControls(void);
	__property Graphics::TPicture* Picture = {read=FPicture, write=SetPicture};
	
protected:
	__property bool AutoDock = {read=FAutoDock, write=FAutoDock, default=1};
	__property bool AutoDrag = {read=FAutoDrag, write=FAutoDrag, default=1};
	__property AutoSize  = {default=0};
	__property BevelKind  = {default=1};
	__property DockSite  = {default=1};
	__property TRowSize RowSize = {read=FRowSize, write=SetRowSize, default=26};
	__property bool RowSnap = {read=FRowSnap, write=SetRowSnap, default=1};
	__property TBandDragEvent OnBandDrag = {read=FOnBandDrag, write=FOnBandDrag};
	__property TBandInfoEvent OnBandInfo = {read=FOnBandInfo, write=FOnBandInfo};
	__property TBandMoveEvent OnBandMove = {read=FOnBandMove, write=FOnBandMove};
	__property TBandPaintEvent OnBandPaint = {read=FOnBandPaint, write=FOnBandPaint};
	__property Classes::TNotifyEvent OnPaint = {read=FOnPaint, write=FOnPaint};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TCustomControlBar(HWND ParentWindow) : Controls::TCustomControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TControlBar;
class PASCALIMPLEMENTATION TControlBar : public TCustomControlBar 
{
	typedef TCustomControlBar inherited;
	
public:
	__property Canvas ;
	
__published:
	__property Align  = {default=0};
	__property Anchors  = {default=3};
	__property AutoDock  = {default=1};
	__property AutoDrag  = {default=1};
	__property AutoSize  = {default=0};
	__property BevelEdges  = {default=15};
	__property BevelInner  = {index=0, default=2};
	__property BevelOuter  = {index=1, default=1};
	__property BevelKind  = {default=1};
	__property BevelWidth  = {default=1};
	__property BorderWidth  = {default=0};
	__property Color  = {default=-2147483643};
	__property Constraints ;
	__property DockSite  = {default=1};
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property ParentColor  = {default=1};
	__property ParentCtl3D  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property Picture ;
	__property PopupMenu ;
	__property RowSize  = {default=26};
	__property RowSnap  = {default=1};
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=0};
	__property Visible  = {default=1};
	__property OnBandDrag ;
	__property OnBandInfo ;
	__property OnBandMove ;
	__property OnBandPaint ;
	__property OnCanResize ;
	__property OnClick ;
	__property OnConstrainedResize ;
	__property OnContextPopup ;
	__property OnDockDrop ;
	__property OnDockOver ;
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnGetSiteInfo ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnPaint ;
	__property OnResize ;
	__property OnStartDock ;
	__property OnStartDrag ;
	__property OnUnDock ;
public:
	#pragma option push -w-inl
	/* TCustomControlBar.Create */ inline __fastcall virtual TControlBar(Classes::TComponent* AOwner) : TCustomControlBar(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomControlBar.Destroy */ inline __fastcall virtual ~TControlBar(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TControlBar(HWND ParentWindow) : TCustomControlBar(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TBoundLabel;
class PASCALIMPLEMENTATION TBoundLabel : public Stdctrls::TCustomLabel 
{
	typedef Stdctrls::TCustomLabel inherited;
	
private:
	int __fastcall GetTop(void);
	int __fastcall GetLeft(void);
	int __fastcall GetWidth(void);
	int __fastcall GetHeight(void);
	HIDESBASE void __fastcall SetHeight(const int Value);
	HIDESBASE void __fastcall SetWidth(const int Value);
	
protected:
	DYNAMIC void __fastcall AdjustBounds(void);
	
public:
	__fastcall virtual TBoundLabel(Classes::TComponent* AOwner);
	
__published:
	__property BiDiMode ;
	__property Caption ;
	__property Color  = {default=-2147483643};
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Font ;
	__property int Height = {read=GetHeight, write=SetHeight, nodefault};
	__property int Left = {read=GetLeft, nodefault};
	__property ParentBiDiMode  = {default=1};
	__property ParentColor  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowAccelChar  = {default=1};
	__property ShowHint ;
	__property int Top = {read=GetTop, nodefault};
	__property Transparent  = {default=0};
	__property Layout  = {default=0};
	__property WordWrap  = {default=0};
	__property int Width = {read=GetWidth, write=SetWidth, nodefault};
	__property OnClick ;
	__property OnContextPopup ;
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TBoundLabel(void) { }
	#pragma option pop
	
};


#pragma option push -b-
enum TLabelPosition { lpAbove, lpBelow, lpLeft, lpRight };
#pragma option pop

class DELPHICLASS TCustomLabeledEdit;
class PASCALIMPLEMENTATION TCustomLabeledEdit : public Stdctrls::TCustomEdit 
{
	typedef Stdctrls::TCustomEdit inherited;
	
private:
	TBoundLabel* FEditLabel;
	TLabelPosition FLabelPosition;
	int FLabelSpacing;
	void __fastcall SetLabelPosition(const TLabelPosition Value);
	void __fastcall SetLabelSpacing(const int Value);
	
protected:
	virtual void __fastcall SetParent(Controls::TWinControl* AParent);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual void __fastcall SetName(const AnsiString Value);
	HIDESBASE MESSAGE void __fastcall CMVisiblechanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledchanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMBidimodechanged(Messages::TMessage &Message);
	
public:
	__fastcall virtual TCustomLabeledEdit(Classes::TComponent* AOwner);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	void __fastcall SetupInternalLabel(void);
	__property TBoundLabel* EditLabel = {read=FEditLabel};
	__property TLabelPosition LabelPosition = {read=FLabelPosition, write=SetLabelPosition, nodefault};
	__property int LabelSpacing = {read=FLabelSpacing, write=SetLabelSpacing, nodefault};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TCustomLabeledEdit(HWND ParentWindow) : Stdctrls::TCustomEdit(ParentWindow) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TWinControl.Destroy */ inline __fastcall virtual ~TCustomLabeledEdit(void) { }
	#pragma option pop
	
};


class DELPHICLASS TLabeledEdit;
class PASCALIMPLEMENTATION TLabeledEdit : public TCustomLabeledEdit 
{
	typedef TCustomLabeledEdit inherited;
	
__published:
	__property Anchors  = {default=3};
	__property AutoSelect  = {default=1};
	__property AutoSize  = {default=1};
	__property BevelEdges  = {default=15};
	__property BevelInner  = {index=0, default=2};
	__property BevelKind  = {default=0};
	__property BevelOuter  = {index=1, default=1};
	__property BiDiMode ;
	__property BorderStyle  = {default=1};
	__property CharCase  = {default=0};
	__property Color  = {default=-2147483643};
	__property Constraints ;
	__property Ctl3D ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property EditLabel ;
	__property Enabled  = {default=1};
	__property Font ;
	__property HideSelection  = {default=1};
	__property ImeMode  = {default=3};
	__property ImeName ;
	__property LabelPosition ;
	__property LabelSpacing ;
	__property MaxLength  = {default=0};
	__property OEMConvert  = {default=0};
	__property ParentBiDiMode  = {default=1};
	__property ParentColor  = {default=0};
	__property ParentCtl3D  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PasswordChar  = {default=0};
	__property PopupMenu ;
	__property ReadOnly  = {default=0};
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property Text ;
	__property Visible  = {default=1};
	__property OnChange ;
	__property OnClick ;
	__property OnContextPopup ;
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TCustomLabeledEdit.Create */ inline __fastcall virtual TLabeledEdit(Classes::TComponent* AOwner) : TCustomLabeledEdit(AOwner) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TLabeledEdit(HWND ParentWindow) : TCustomLabeledEdit(ParentWindow) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TWinControl.Destroy */ inline __fastcall virtual ~TLabeledEdit(void) { }
	#pragma option pop
	
};


#pragma option push -b-
enum TColorBoxStyles { cbStandardColors, cbExtendedColors, cbSystemColors, cbIncludeNone, cbIncludeDefault, cbCustomColor, cbPrettyNames };
#pragma option pop

typedef Set<TColorBoxStyles, cbStandardColors, cbPrettyNames>  TColorBoxStyle;

class DELPHICLASS TCustomColorBox;
class PASCALIMPLEMENTATION TCustomColorBox : public Stdctrls::TCustomComboBox 
{
	typedef Stdctrls::TCustomComboBox inherited;
	
private:
	TColorBoxStyle FStyle;
	bool FNeedToPopulate;
	bool FListSelected;
	Graphics::TColor FDefaultColorColor;
	Graphics::TColor FNoneColorColor;
	Graphics::TColor FSelectedColor;
	Graphics::TColor __fastcall GetColor(int Index);
	AnsiString __fastcall GetColorName(int Index);
	Graphics::TColor __fastcall GetSelected(void);
	void __fastcall SetSelected(const Graphics::TColor AColor);
	void __fastcall ColorCallBack(const AnsiString AName);
	void __fastcall SetDefaultColorColor(const Graphics::TColor Value);
	void __fastcall SetNoneColorColor(const Graphics::TColor Value);
	
protected:
	DYNAMIC void __fastcall CloseUp(void);
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall DrawItem(int Index, const Types::TRect &Rect, Windows::TOwnerDrawState State);
	DYNAMIC void __fastcall KeyDown(Word &Key, Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(char &Key);
	virtual bool __fastcall PickCustomColor(void);
	void __fastcall PopulateList(void);
	DYNAMIC void __fastcall Select(void);
	HIDESBASE void __fastcall SetStyle(TColorBoxStyle AStyle);
	
public:
	__fastcall virtual TCustomColorBox(Classes::TComponent* AOwner);
	__property TColorBoxStyle Style = {read=FStyle, write=SetStyle, default=7};
	__property Graphics::TColor Colors[int Index] = {read=GetColor};
	__property AnsiString ColorNames[int Index] = {read=GetColorName};
	__property Graphics::TColor Selected = {read=GetSelected, write=SetSelected, default=0};
	__property Graphics::TColor DefaultColorColor = {read=FDefaultColorColor, write=SetDefaultColorColor, default=0};
	__property Graphics::TColor NoneColorColor = {read=FNoneColorColor, write=SetNoneColorColor, default=0};
public:
	#pragma option push -w-inl
	/* TCustomComboBox.Destroy */ inline __fastcall virtual ~TCustomColorBox(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TCustomColorBox(HWND ParentWindow) : Stdctrls::TCustomComboBox(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TColorBox;
class PASCALIMPLEMENTATION TColorBox : public TCustomColorBox 
{
	typedef TCustomColorBox inherited;
	
__published:
	__property AutoComplete  = {default=1};
	__property AutoDropDown  = {default=0};
	__property DefaultColorColor  = {default=0};
	__property NoneColorColor  = {default=0};
	__property Selected  = {default=0};
	__property Style  = {default=7};
	__property Anchors  = {default=3};
	__property BevelEdges  = {default=15};
	__property BevelInner  = {index=0, default=2};
	__property BevelKind  = {default=0};
	__property BevelOuter  = {index=1, default=1};
	__property BiDiMode ;
	__property Color  = {default=-2147483643};
	__property Constraints ;
	__property Ctl3D ;
	__property DropDownCount  = {default=8};
	__property Enabled  = {default=1};
	__property Font ;
	__property ItemHeight ;
	__property ParentBiDiMode  = {default=1};
	__property ParentColor  = {default=0};
	__property ParentCtl3D  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property Visible  = {default=1};
	__property OnChange ;
	__property OnCloseUp ;
	__property OnClick ;
	__property OnContextPopup ;
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnDropDown ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnSelect ;
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TCustomColorBox.Create */ inline __fastcall virtual TColorBox(Classes::TComponent* AOwner) : TCustomColorBox(AOwner) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TCustomComboBox.Destroy */ inline __fastcall virtual ~TColorBox(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TColorBox(HWND ParentWindow) : TCustomColorBox(ParentWindow) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
static const Graphics::TColor NoColorSelected = 0xff000000;
extern PACKAGE void __fastcall Frame3D(Graphics::TCanvas* Canvas, Types::TRect &Rect, Graphics::TColor TopColor, Graphics::TColor BottomColor, int Width);
extern PACKAGE void __fastcall NotebookHandlesNeeded(TNotebook* Notebook);

}	/* namespace Extctrls */
using namespace Extctrls;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ExtCtrls
