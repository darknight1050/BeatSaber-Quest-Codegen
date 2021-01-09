// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CompareInfo
  class CompareInfo;
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x18
  // Autogenerated type: System.Collections.Comparer
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3C730
  class Comparer : public ::Il2CppObject/*, public System::Collections::IComparer, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // private System.Globalization.CompareInfo m_compareInfo
    // Size: 0x8
    // Offset: 0x10
    System::Globalization::CompareInfo* m_compareInfo;
    // Field size check
    static_assert(sizeof(System::Globalization::CompareInfo*) == 0x8);
    // Creating value type constructor for type: Comparer
    Comparer(System::Globalization::CompareInfo* m_compareInfo_ = {}) noexcept : m_compareInfo{m_compareInfo_} {}
    // Creating interface conversion operator: operator System::Collections::IComparer
    operator System::Collections::IComparer() noexcept {
      return *reinterpret_cast<System::Collections::IComparer*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating conversion operator: operator System::Globalization::CompareInfo*
    constexpr operator System::Globalization::CompareInfo*() const noexcept {
      return m_compareInfo;
    }
    // Get static field: static public readonly System.Collections.Comparer Default
    static System::Collections::Comparer* _get_Default();
    // Set static field: static public readonly System.Collections.Comparer Default
    static void _set_Default(System::Collections::Comparer* value);
    // Get static field: static public readonly System.Collections.Comparer DefaultInvariant
    static System::Collections::Comparer* _get_DefaultInvariant();
    // Set static field: static public readonly System.Collections.Comparer DefaultInvariant
    static void _set_DefaultInvariant(System::Collections::Comparer* value);
    // public System.Void .ctor(System.Globalization.CultureInfo culture)
    // Offset: 0x1CB4EC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Comparer* New_ctor(System::Globalization::CultureInfo* culture) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Comparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Comparer*, creationType>(culture)));
    }
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1CB4F74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Comparer* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Comparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Comparer*, creationType>(info, context)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1CB519C
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0x1CB4E94
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Comparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Comparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Comparer*, creationType>()));
    }
    // public System.Int32 Compare(System.Object a, System.Object b)
    // Offset: 0x1CB3C68
    // Implemented from: System.Collections.IComparer
    // Base method: System.Int32 IComparer::Compare(System.Object a, System.Object b)
    int Compare(::Il2CppObject* a, ::Il2CppObject* b);
    // Creating proxy method: System_Collections_IComparer_Compare
    // Maps to method: Compare
    int System_Collections_IComparer_Compare(::Il2CppObject* a, ::Il2CppObject* b);
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1CB50E8
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.Collections.Comparer
  static check_size<sizeof(Comparer), 16 + sizeof(System::Globalization::CompareInfo*)> __System_Collections_ComparerSizeCheck;
  static_assert(sizeof(Comparer) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Comparer*, "System.Collections", "Comparer");
#pragma pack(pop)
