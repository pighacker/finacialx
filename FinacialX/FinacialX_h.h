

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Sun Mar 30 16:06:38 2014
 */
/* Compiler settings for FinacialX.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0595 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __FinacialX_h_h__
#define __FinacialX_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IFinacialX_FWD_DEFINED__
#define __IFinacialX_FWD_DEFINED__
typedef interface IFinacialX IFinacialX;

#endif 	/* __IFinacialX_FWD_DEFINED__ */


#ifndef __FinacialX_FWD_DEFINED__
#define __FinacialX_FWD_DEFINED__

#ifdef __cplusplus
typedef class FinacialX FinacialX;
#else
typedef struct FinacialX FinacialX;
#endif /* __cplusplus */

#endif 	/* __FinacialX_FWD_DEFINED__ */


#ifndef __IFinXPop_FWD_DEFINED__
#define __IFinXPop_FWD_DEFINED__
typedef interface IFinXPop IFinXPop;

#endif 	/* __IFinXPop_FWD_DEFINED__ */


#ifndef __FinXPop_FWD_DEFINED__
#define __FinXPop_FWD_DEFINED__

#ifdef __cplusplus
typedef class FinXPop FinXPop;
#else
typedef struct FinXPop FinXPop;
#endif /* __cplusplus */

#endif 	/* __FinXPop_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __FinacialX_LIBRARY_DEFINED__
#define __FinacialX_LIBRARY_DEFINED__

/* library FinacialX */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_FinacialX;

#ifndef __IFinacialX_DISPINTERFACE_DEFINED__
#define __IFinacialX_DISPINTERFACE_DEFINED__

/* dispinterface IFinacialX */
/* [uuid] */ 


EXTERN_C const IID DIID_IFinacialX;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("C1336C42-8F49-4A14-BCDC-3156613DA392")
    IFinacialX : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IFinacialXVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFinacialX * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFinacialX * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFinacialX * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFinacialX * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFinacialX * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFinacialX * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFinacialX * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IFinacialXVtbl;

    interface IFinacialX
    {
        CONST_VTBL struct IFinacialXVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFinacialX_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFinacialX_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFinacialX_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFinacialX_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFinacialX_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFinacialX_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFinacialX_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IFinacialX_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_FinacialX;

#ifdef __cplusplus

class DECLSPEC_UUID("7AF7E243-D6A6-438D-A197-76C80517D21C")
FinacialX;
#endif

#ifndef __IFinXPop_DISPINTERFACE_DEFINED__
#define __IFinXPop_DISPINTERFACE_DEFINED__

/* dispinterface IFinXPop */
/* [uuid] */ 


EXTERN_C const IID DIID_IFinXPop;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CB6830D8-E111-4F08-A243-3B32BD776949")
    IFinXPop : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IFinXPopVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFinXPop * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFinXPop * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFinXPop * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFinXPop * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFinXPop * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFinXPop * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFinXPop * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IFinXPopVtbl;

    interface IFinXPop
    {
        CONST_VTBL struct IFinXPopVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFinXPop_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFinXPop_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFinXPop_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFinXPop_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFinXPop_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFinXPop_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFinXPop_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IFinXPop_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_FinXPop;

#ifdef __cplusplus

class DECLSPEC_UUID("DBF65E86-062A-46DD-8CF7-200B4EF1E131")
FinXPop;
#endif
#endif /* __FinacialX_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


