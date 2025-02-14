// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ServerIdentity
  class ServerIdentity;
  // Forward declaring type: ObjRef
  class ObjRef;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.MarshalByRefObject
  // [ComVisibleAttribute] Offset: D7B2E0
  class MarshalByRefObject : public ::Il2CppObject {
    public:
    // private System.Object _identity
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* identity;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: MarshalByRefObject
    MarshalByRefObject(::Il2CppObject* identity_ = {}) noexcept : identity{identity_} {}
    // Creating conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept {
      return identity;
    }
    // System.Runtime.Remoting.ServerIdentity get_ObjectIdentity()
    // Offset: 0x18099CC
    System::Runtime::Remoting::ServerIdentity* get_ObjectIdentity();
    // System.Void set_ObjectIdentity(System.Runtime.Remoting.ServerIdentity value)
    // Offset: 0x1809A9C
    void set_ObjectIdentity(System::Runtime::Remoting::ServerIdentity* value);
    // public System.Runtime.Remoting.ObjRef CreateObjRef(System.Type requestedType)
    // Offset: 0x1809AF8
    System::Runtime::Remoting::ObjRef* CreateObjRef(System::Type* requestedType);
    // public System.Object InitializeLifetimeService()
    // Offset: 0x1809B54
    ::Il2CppObject* InitializeLifetimeService();
    // protected System.Void .ctor()
    // Offset: 0x1800674
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MarshalByRefObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::MarshalByRefObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MarshalByRefObject*, creationType>()));
    }
  }; // System.MarshalByRefObject
  #pragma pack(pop)
  static check_size<sizeof(MarshalByRefObject), 16 + sizeof(::Il2CppObject*)> __System_MarshalByRefObjectSizeCheck;
  static_assert(sizeof(MarshalByRefObject) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::MarshalByRefObject*, "System", "MarshalByRefObject");
