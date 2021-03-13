// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IEqualityComparer
#include "System/Collections/IEqualityComparer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IComparer
  class IComparer;
  // Forward declaring type: IHashCodeProvider
  class IHashCodeProvider;
}
// Completed forward declares
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Specialized.CompatibleComparer
  // [] Offset: FFFFFFFF
  class CompatibleComparer : public ::Il2CppObject/*, public System::Collections::IEqualityComparer*/ {
    public:
    // private System.Collections.IComparer _comparer
    // Size: 0x8
    // Offset: 0x10
    System::Collections::IComparer* comparer;
    // Field size check
    static_assert(sizeof(System::Collections::IComparer*) == 0x8);
    // private System.Collections.IHashCodeProvider _hcp
    // Size: 0x8
    // Offset: 0x18
    System::Collections::IHashCodeProvider* hcp;
    // Field size check
    static_assert(sizeof(System::Collections::IHashCodeProvider*) == 0x8);
    // Creating value type constructor for type: CompatibleComparer
    CompatibleComparer(System::Collections::IComparer* comparer_ = {}, System::Collections::IHashCodeProvider* hcp_ = {}) noexcept : comparer{comparer_}, hcp{hcp_} {}
    // Creating interface conversion operator: operator System::Collections::IEqualityComparer
    operator System::Collections::IEqualityComparer() noexcept {
      return *reinterpret_cast<System::Collections::IEqualityComparer*>(this);
    }
    // Get static field: static private System.Collections.IComparer defaultComparer
    static System::Collections::IComparer* _get_defaultComparer();
    // Set static field: static private System.Collections.IComparer defaultComparer
    static void _set_defaultComparer(System::Collections::IComparer* value);
    // Get static field: static private System.Collections.IHashCodeProvider defaultHashProvider
    static System::Collections::IHashCodeProvider* _get_defaultHashProvider();
    // Set static field: static private System.Collections.IHashCodeProvider defaultHashProvider
    static void _set_defaultHashProvider(System::Collections::IHashCodeProvider* value);
    // System.Void .ctor(System.Collections.IComparer comparer, System.Collections.IHashCodeProvider hashCodeProvider)
    // Offset: 0x16C077C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CompatibleComparer* New_ctor(System::Collections::IComparer* comparer, System::Collections::IHashCodeProvider* hashCodeProvider) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Specialized::CompatibleComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CompatibleComparer*, creationType>(comparer, hashCodeProvider)));
    }
    // public System.Boolean Equals(System.Object a, System.Object b)
    // Offset: 0x16C07B4
    bool Equals_NEW(::Il2CppObject* a, ::Il2CppObject* b);
    // public System.Int32 GetHashCode(System.Object obj)
    // Offset: 0x16C09C0
    int GetHashCode_NEW(::Il2CppObject* obj);
    // public System.Collections.IComparer get_Comparer()
    // Offset: 0x16C0AD8
    System::Collections::IComparer* get_Comparer();
    // public System.Collections.IHashCodeProvider get_HashCodeProvider()
    // Offset: 0x16C0AE0
    System::Collections::IHashCodeProvider* get_HashCodeProvider();
    // static public System.Collections.IComparer get_DefaultComparer()
    // Offset: 0x16C0AE8
    static System::Collections::IComparer* get_DefaultComparer();
    // static public System.Collections.IHashCodeProvider get_DefaultHashCodeProvider()
    // Offset: 0x16C0BBC
    static System::Collections::IHashCodeProvider* get_DefaultHashCodeProvider();
  }; // System.Collections.Specialized.CompatibleComparer
  #pragma pack(pop)
  static check_size<sizeof(CompatibleComparer), 24 + sizeof(System::Collections::IHashCodeProvider*)> __System_Collections_Specialized_CompatibleComparerSizeCheck;
  static_assert(sizeof(CompatibleComparer) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::CompatibleComparer*, "System.Collections.Specialized", "CompatibleComparer");
