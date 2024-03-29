// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DataBkr.pas' rev: 6.00

#ifndef DataBkrHPP
#define DataBkrHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <SysUtils.hpp>	// Pascal unit
#include <Provider.hpp>	// Pascal unit
#include <Midas.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <ActiveX.hpp>	// Pascal unit
#include <Variants.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Databkr
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TRemoteDataModule;
class PASCALIMPLEMENTATION TRemoteDataModule : public Classes::TDataModule 
{
	typedef Classes::TDataModule inherited;
	
private:
	Classes::TList* FProviders;
	_RTL_CRITICAL_SECTION FLock;
	int __fastcall GetProviderCount(void);
	
protected:
	virtual Provider::TCustomProvider* __fastcall GetProvider(const AnsiString ProviderName);
	/* virtual class method */ virtual void __fastcall UpdateRegistry(TMetaClass* vmt, bool Register, const AnsiString ClassID, const AnsiString ProgID);
	HRESULT __safecall AS_GetProviderNames(OleVariant &AS_GetProviderNames_result);
	HRESULT __safecall AS_ApplyUpdates(const WideString ProviderName, const OleVariant Delta, int MaxErrors, /* out */ int &ErrorCount, OleVariant &OwnerData, OleVariant &AS_ApplyUpdates_result);
	HRESULT __safecall AS_GetRecords(const WideString ProviderName, int Count, /* out */ int &RecsOut, int Options, const WideString CommandText, OleVariant &Params, OleVariant &OwnerData, OleVariant &AS_GetRecords_result);
	HRESULT __safecall AS_DataRequest(const WideString ProviderName, const OleVariant Data, OleVariant &AS_DataRequest_result);
	HRESULT __safecall AS_GetParams(const WideString ProviderName, OleVariant &OwnerData, OleVariant &AS_GetParams_result);
	HRESULT __safecall AS_RowRequest(const WideString ProviderName, const OleVariant Row, int RequestType, OleVariant &OwnerData, OleVariant &AS_RowRequest_result);
	HRESULT __safecall AS_Execute(const WideString ProviderName, const WideString CommandText, OleVariant &Params, OleVariant &OwnerData);
	
public:
	__fastcall virtual TRemoteDataModule(Classes::TComponent* AOwner);
	__fastcall virtual ~TRemoteDataModule(void);
	virtual void __fastcall RegisterProvider(Provider::TCustomProvider* Value);
	virtual void __fastcall UnRegisterProvider(Provider::TCustomProvider* Value);
	virtual void __fastcall Lock(void);
	virtual void __fastcall Unlock(void);
	__property Provider::TCustomProvider* Providers[AnsiString ProviderName] = {read=GetProvider};
	__property int ProviderCount = {read=GetProviderCount, nodefault};
public:
	#pragma option push -w-inl
	/* TDataModule.CreateNew */ inline __fastcall virtual TRemoteDataModule(Classes::TComponent* AOwner, int Dummy) : Classes::TDataModule(AOwner, Dummy) { }
	#pragma option pop
	
private:
	void *__IAppServer;	/* Midas::IAppServer */
	
public:
	operator IAppServer*(void) { return (IAppServer*)&__IAppServer; }
	
};


class DELPHICLASS TCRemoteDataModule;
class PASCALIMPLEMENTATION TCRemoteDataModule : public Classes::TDataModule 
{
	typedef Classes::TDataModule inherited;
	
private:
	Classes::TList* FProviders;
	_RTL_CRITICAL_SECTION FLock;
	int __fastcall GetProviderCount(void);
	
public:
	__fastcall virtual TCRemoteDataModule(Classes::TComponent* AOwner);
	__fastcall virtual ~TCRemoteDataModule(void);
	virtual void __fastcall RegisterProvider(Provider::TCustomProvider* Value);
	virtual void __fastcall UnRegisterProvider(Provider::TCustomProvider* Value);
	virtual void __fastcall Lock(void);
	virtual void __fastcall UnLock(void);
	OleVariant __fastcall CRDMGetProviderNames();
	virtual Provider::TCustomProvider* __fastcall GetProvider(const AnsiString ProviderName);
	__property Provider::TCustomProvider* Providers[AnsiString ProviderName] = {read=GetProvider};
	__property int ProviderCount = {read=GetProviderCount, nodefault};
public:
	#pragma option push -w-inl
	/* TDataModule.CreateNew */ inline __fastcall virtual TCRemoteDataModule(Classes::TComponent* AOwner, int Dummy) : Classes::TDataModule(AOwner, Dummy) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall RegisterPooled(const AnsiString ClassID, int Max, int Timeout, bool Singleton = false);
extern PACKAGE void __fastcall UnregisterPooled(const AnsiString ClassID);
extern PACKAGE void __fastcall EnableSocketTransport(const AnsiString ClassID);
extern PACKAGE void __fastcall DisableSocketTransport(const AnsiString ClassID);
extern PACKAGE void __fastcall EnableWebTransport(const AnsiString ClassID);
extern PACKAGE void __fastcall DisableWebTransport(const AnsiString ClassID);

}	/* namespace Databkr */
using namespace Databkr;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DataBkr
