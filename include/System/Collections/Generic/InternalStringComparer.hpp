// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.EqualityComparer`1
#include "System/Collections/Generic/EqualityComparer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.InternalStringComparer
  class InternalStringComparer : public System::Collections::Generic::EqualityComparer_1<::Il2CppString*> {
    public:
    // Creating value type constructor for type: InternalStringComparer
    InternalStringComparer() noexcept {}
    // public System.Int32 GetHashCode(System.String obj)
    // Offset: 0x176DD00
    int GetHashCode(::Il2CppString* obj);
    // public System.Boolean Equals(System.String x, System.String y)
    // Offset: 0x176DD20
    bool Equals(::Il2CppString* x, ::Il2CppString* y);
    // System.Int32 IndexOf(System.String[] array, System.String value, System.Int32 startIndex, System.Int32 count)
    // Offset: 0x176DD50
    int IndexOf(::Array<::Il2CppString*>* array, ::Il2CppString* value, int startIndex, int count);
    // public System.Void .ctor()
    // Offset: 0x176DDB8
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Void EqualityComparer_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InternalStringComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::InternalStringComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InternalStringComparer*, creationType>()));
    }
  }; // System.Collections.Generic.InternalStringComparer
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Generic::InternalStringComparer*, "System.Collections.Generic", "InternalStringComparer");
