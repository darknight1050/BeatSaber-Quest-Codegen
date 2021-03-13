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
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: IList
  class IList;
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Channels.SinkProviderData
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: C96CAC
  class SinkProviderData : public ::Il2CppObject {
    public:
    // private System.String sinkName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* sinkName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Collections.ArrayList children
    // Size: 0x8
    // Offset: 0x18
    System::Collections::ArrayList* children;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.Collections.Hashtable properties
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Hashtable* properties;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // Creating value type constructor for type: SinkProviderData
    SinkProviderData(::Il2CppString* sinkName_ = {}, System::Collections::ArrayList* children_ = {}, System::Collections::Hashtable* properties_ = {}) noexcept : sinkName{sinkName_}, children{children_}, properties{properties_} {}
    // public System.Void .ctor(System.String name)
    // Offset: 0x1309784
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SinkProviderData* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Channels::SinkProviderData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SinkProviderData*, creationType>(name)));
    }
    // public System.Collections.IList get_Children()
    // Offset: 0x1309820
    System::Collections::IList* get_Children();
    // public System.Collections.IDictionary get_Properties()
    // Offset: 0x1309828
    System::Collections::IDictionary* get_Properties();
  }; // System.Runtime.Remoting.Channels.SinkProviderData
  #pragma pack(pop)
  static check_size<sizeof(SinkProviderData), 32 + sizeof(System::Collections::Hashtable*)> __System_Runtime_Remoting_Channels_SinkProviderDataSizeCheck;
  static_assert(sizeof(SinkProviderData) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Channels::SinkProviderData*, "System.Runtime.Remoting.Channels", "SinkProviderData");
