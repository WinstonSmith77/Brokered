

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0613 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for C:\Users\mhenning\AppData\Local\Temp\Server.idl-062a1efe:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0613 
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
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __Server_h__
#define __Server_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_Server_CIBrokeredComponentClass_FWD_DEFINED__
#define ____x_Server_CIBrokeredComponentClass_FWD_DEFINED__
typedef interface __x_Server_CIBrokeredComponentClass __x_Server_CIBrokeredComponentClass;

#ifdef __cplusplus
namespace Server {
    interface IBrokeredComponentClass;
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_Server_CIBrokeredComponentClass_FWD_DEFINED__ */


#ifndef ____x_Server_CIHostProcessManagerClass_FWD_DEFINED__
#define ____x_Server_CIHostProcessManagerClass_FWD_DEFINED__
typedef interface __x_Server_CIHostProcessManagerClass __x_Server_CIHostProcessManagerClass;

#ifdef __cplusplus
namespace Server {
    interface IHostProcessManagerClass;
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_Server_CIHostProcessManagerClass_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_Server_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)



#ifdef __cplusplus
namespace Server {
class BrokeredComponent;
} /*Server*/
#endif
#ifdef __cplusplus
namespace Server {
class HostProcessManager;
} /*Server*/
#endif
#if !defined(____x_Server_CIBrokeredComponentClass_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Server_IBrokeredComponentClass[] = L"Server.IBrokeredComponentClass";
#endif /* !defined(____x_Server_CIBrokeredComponentClass_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Server_0000_0000 */
/* [local] */ 






extern RPC_IF_HANDLE __MIDL_itf_Server_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Server_0000_0000_v0_0_s_ifspec;

#ifndef ____x_Server_CIBrokeredComponentClass_INTERFACE_DEFINED__
#define ____x_Server_CIBrokeredComponentClass_INTERFACE_DEFINED__

/* interface __x_Server_CIBrokeredComponentClass */
/* [uuid][object] */ 



/* interface Server::IBrokeredComponentClass */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Server_CIBrokeredComponentClass;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace Server {
        
        MIDL_INTERFACE("BC3E21BC-D1E0-5387-68CE-B77D57F6E79C")
        IBrokeredComponentClass : public IInspectable
        {
        public:
            virtual HRESULT STDMETHODCALLTYPE GetValue( 
                /* [out][retval] */ HSTRING *value) = 0;
            
        };

        extern const __declspec(selectany) IID & IID_IBrokeredComponentClass = __uuidof(IBrokeredComponentClass);

        
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_Server_CIBrokeredComponentClassVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Server_CIBrokeredComponentClass * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Server_CIBrokeredComponentClass * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Server_CIBrokeredComponentClass * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Server_CIBrokeredComponentClass * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Server_CIBrokeredComponentClass * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Server_CIBrokeredComponentClass * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetValue )( 
            __x_Server_CIBrokeredComponentClass * This,
            /* [out][retval] */ HSTRING *value);
        
        END_INTERFACE
    } __x_Server_CIBrokeredComponentClassVtbl;

    interface __x_Server_CIBrokeredComponentClass
    {
        CONST_VTBL struct __x_Server_CIBrokeredComponentClassVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Server_CIBrokeredComponentClass_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Server_CIBrokeredComponentClass_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Server_CIBrokeredComponentClass_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Server_CIBrokeredComponentClass_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Server_CIBrokeredComponentClass_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Server_CIBrokeredComponentClass_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Server_CIBrokeredComponentClass_GetValue(This,value)	\
    ( (This)->lpVtbl -> GetValue(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Server_CIBrokeredComponentClass_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Server_0000_0001 */
/* [local] */ 

#if !defined(____x_Server_CIHostProcessManagerClass_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Server_IHostProcessManagerClass[] = L"Server.IHostProcessManagerClass";
#endif /* !defined(____x_Server_CIHostProcessManagerClass_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_Server_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Server_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Server_0000_0001_v0_0_s_ifspec;

#ifndef ____x_Server_CIHostProcessManagerClass_INTERFACE_DEFINED__
#define ____x_Server_CIHostProcessManagerClass_INTERFACE_DEFINED__

/* interface __x_Server_CIHostProcessManagerClass */
/* [uuid][object] */ 



/* interface Server::IHostProcessManagerClass */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_Server_CIHostProcessManagerClass;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace Server {
        
        MIDL_INTERFACE("7419718A-B1ED-532A-4166-5C28B8291EAF")
        IHostProcessManagerClass : public IInspectable
        {
        public:
            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ProcessId( 
                /* [out][retval] */ INT32 *value) = 0;
            
            virtual HRESULT STDMETHODCALLTYPE KillProcess( void) = 0;
            
        };

        extern const __declspec(selectany) IID & IID_IHostProcessManagerClass = __uuidof(IHostProcessManagerClass);

        
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_Server_CIHostProcessManagerClassVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_Server_CIHostProcessManagerClass * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_Server_CIHostProcessManagerClass * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_Server_CIHostProcessManagerClass * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_Server_CIHostProcessManagerClass * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_Server_CIHostProcessManagerClass * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_Server_CIHostProcessManagerClass * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProcessId )( 
            __x_Server_CIHostProcessManagerClass * This,
            /* [out][retval] */ INT32 *value);
        
        HRESULT ( STDMETHODCALLTYPE *KillProcess )( 
            __x_Server_CIHostProcessManagerClass * This);
        
        END_INTERFACE
    } __x_Server_CIHostProcessManagerClassVtbl;

    interface __x_Server_CIHostProcessManagerClass
    {
        CONST_VTBL struct __x_Server_CIHostProcessManagerClassVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_Server_CIHostProcessManagerClass_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_Server_CIHostProcessManagerClass_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_Server_CIHostProcessManagerClass_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_Server_CIHostProcessManagerClass_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_Server_CIHostProcessManagerClass_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_Server_CIHostProcessManagerClass_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_Server_CIHostProcessManagerClass_get_ProcessId(This,value)	\
    ( (This)->lpVtbl -> get_ProcessId(This,value) ) 

#define __x_Server_CIHostProcessManagerClass_KillProcess(This)	\
    ( (This)->lpVtbl -> KillProcess(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_Server_CIHostProcessManagerClass_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Server_0000_0002 */
/* [local] */ 

#ifndef RUNTIMECLASS_Server_BrokeredComponent_DEFINED
#define RUNTIMECLASS_Server_BrokeredComponent_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Server_BrokeredComponent[] = L"Server.BrokeredComponent";
#endif
#ifndef RUNTIMECLASS_Server_HostProcessManager_DEFINED
#define RUNTIMECLASS_Server_HostProcessManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Server_HostProcessManager[] = L"Server.HostProcessManager";
#endif


/* interface __MIDL_itf_Server_0000_0002 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_Server_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Server_0000_0002_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HSTRING_UserSize(     unsigned long *, unsigned long            , HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal(  unsigned long *, unsigned char *, HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal(unsigned long *, unsigned char *, HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree(     unsigned long *, HSTRING * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


