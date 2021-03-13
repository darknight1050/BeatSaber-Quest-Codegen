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
  // Forward declaring type: ObjRef
  class ObjRef;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.CADObjRef
  // [] Offset: FFFFFFFF
  class CADObjRef : public ::Il2CppObject {
    public:
    // System.Runtime.Remoting.ObjRef objref
    // Size: 0x8
    // Offset: 0x10
    System::Runtime::Remoting::ObjRef* objref;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::ObjRef*) == 0x8);
    // System.Int32 SourceDomain
    // Size: 0x4
    // Offset: 0x18
    int SourceDomain;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: SourceDomain and: TypeInfo
    char __padding1[0x4] = {};
    // System.Byte[] TypeInfo
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* TypeInfo;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: CADObjRef
    CADObjRef(System::Runtime::Remoting::ObjRef* objref_ = {}, int SourceDomain_ = {}, ::Array<uint8_t>* TypeInfo_ = {}) noexcept : objref{objref_}, SourceDomain{SourceDomain_}, TypeInfo{TypeInfo_} {}
    // public System.Void .ctor(System.Runtime.Remoting.ObjRef o, System.Int32 sourceDomain)
    // Offset: 0x18A8650
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CADObjRef* New_ctor(System::Runtime::Remoting::ObjRef* o, int sourceDomain) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::CADObjRef::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CADObjRef*, creationType>(o, sourceDomain)));
    }
  }; // System.Runtime.Remoting.Messaging.CADObjRef
  #pragma pack(pop)
  static check_size<sizeof(CADObjRef), 32 + sizeof(::Array<uint8_t>*)> __System_Runtime_Remoting_Messaging_CADObjRefSizeCheck;
  static_assert(sizeof(CADObjRef) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::CADObjRef*, "System.Runtime.Remoting.Messaging", "CADObjRef");
