// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: ConditionalWeakTable`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class ConditionalWeakTable_2;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.DictionaryHashHelpers
  class DictionaryHashHelpers : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> <SerializationInfoTable>k__BackingField
    static System::Runtime::CompilerServices::ConditionalWeakTable_2<::Il2CppObject*, System::Runtime::Serialization::SerializationInfo*>* _get_$SerializationInfoTable$k__BackingField();
    // Set static field: static private readonly System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> <SerializationInfoTable>k__BackingField
    static void _set_$SerializationInfoTable$k__BackingField(System::Runtime::CompilerServices::ConditionalWeakTable_2<::Il2CppObject*, System::Runtime::Serialization::SerializationInfo*>* value);
    // static System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> get_SerializationInfoTable()
    // Offset: 0x1294C48
    static System::Runtime::CompilerServices::ConditionalWeakTable_2<::Il2CppObject*, System::Runtime::Serialization::SerializationInfo*>* get_SerializationInfoTable();
    // static private System.Void .cctor()
    // Offset: 0x1294CB0
    static void _cctor();
  }; // System.Collections.Generic.DictionaryHashHelpers
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Generic::DictionaryHashHelpers*, "System.Collections.Generic", "DictionaryHashHelpers");
#pragma pack(pop)
