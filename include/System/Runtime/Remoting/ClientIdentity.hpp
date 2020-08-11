// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Runtime.Remoting.Identity
#include "System/Runtime/Remoting/Identity.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: WeakReference
  class WeakReference;
  // Forward declaring type: MarshalByRefObject
  class MarshalByRefObject;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ObjRef
  class ObjRef;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Autogenerated type: System.Runtime.Remoting.ClientIdentity
  class ClientIdentity : public System::Runtime::Remoting::Identity {
    public:
    // private System.WeakReference _proxyReference
    // Offset: 0x48
    System::WeakReference* proxyReference;
    // public System.Void .ctor(System.String objectUri, System.Runtime.Remoting.ObjRef objRef)
    // Offset: 0x1044CBC
    static ClientIdentity* New_ctor(::CsString* objectUri, System::Runtime::Remoting::ObjRef* objRef);
    // public System.MarshalByRefObject get_ClientProxy()
    // Offset: 0x1044E34
    System::MarshalByRefObject* get_ClientProxy();
    // public System.Void set_ClientProxy(System.MarshalByRefObject value)
    // Offset: 0x1044EC8
    void set_ClientProxy(System::MarshalByRefObject* value);
    // public System.String get_TargetUri()
    // Offset: 0x1044F48
    ::CsString* get_TargetUri();
    // public override System.Runtime.Remoting.ObjRef CreateObjRef(System.Type requestedType)
    // Offset: 0x1044F40
    // Implemented from: System.Runtime.Remoting.Identity
    // Base method: System.Runtime.Remoting.ObjRef Identity::CreateObjRef(System.Type requestedType)
    System::Runtime::Remoting::ObjRef* CreateObjRef(System::Type* requestedType);
  }; // System.Runtime.Remoting.ClientIdentity
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ClientIdentity*, "System.Runtime.Remoting", "ClientIdentity");
#pragma pack(pop)
