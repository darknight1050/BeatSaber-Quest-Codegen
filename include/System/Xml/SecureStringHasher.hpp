// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.IEqualityComparer`1
#include "System/Collections/Generic/IEqualityComparer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x14
  // Autogenerated type: System.Xml.SecureStringHasher
  // [] Offset: FFFFFFFF
  class SecureStringHasher : public ::Il2CppObject/*, public System::Collections::Generic::IEqualityComparer_1<::Il2CppString*>*/ {
    public:
    // Nested type: System::Xml::SecureStringHasher::HashCodeOfStringDelegate
    class HashCodeOfStringDelegate;
    // private System.Int32 hashCodeRandomizer
    // Size: 0x4
    // Offset: 0x10
    int hashCodeRandomizer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SecureStringHasher
    SecureStringHasher(int hashCodeRandomizer_ = {}) noexcept : hashCodeRandomizer{hashCodeRandomizer_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEqualityComparer_1<::Il2CppString*>
    operator System::Collections::Generic::IEqualityComparer_1<::Il2CppString*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEqualityComparer_1<::Il2CppString*>*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return hashCodeRandomizer;
    }
    // Get static field: static private System.Xml.SecureStringHasher/HashCodeOfStringDelegate hashCodeDelegate
    static System::Xml::SecureStringHasher::HashCodeOfStringDelegate* _get_hashCodeDelegate();
    // Set static field: static private System.Xml.SecureStringHasher/HashCodeOfStringDelegate hashCodeDelegate
    static void _set_hashCodeDelegate(System::Xml::SecureStringHasher::HashCodeOfStringDelegate* value);
    // static private System.Int32 GetHashCodeOfString(System.String key, System.Int32 sLen, System.Int64 additionalEntropy)
    // Offset: 0x14E7468
    static int GetHashCodeOfString(::Il2CppString* key, int sLen, int64_t additionalEntropy);
    // static private System.Xml.SecureStringHasher/HashCodeOfStringDelegate GetHashCodeDelegate()
    // Offset: 0x14E6EC8
    static System::Xml::SecureStringHasher::HashCodeOfStringDelegate* GetHashCodeDelegate();
    // public System.Void .ctor()
    // Offset: 0x14E6DDC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecureStringHasher* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::SecureStringHasher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecureStringHasher*, creationType>()));
    }
    // public System.Boolean Equals(System.String x, System.String y)
    // Offset: 0x14E6E0C
    // Implemented from: System.Collections.Generic.IEqualityComparer`1
    // Base method: System.Boolean IEqualityComparer_1::Equals(System.String x, System.String y)
    bool Equals(::Il2CppString* x, ::Il2CppString* y);
    // public System.Int32 GetHashCode(System.String key)
    // Offset: 0x14E6E24
    // Implemented from: System.Collections.Generic.IEqualityComparer`1
    // Base method: System.Int32 IEqualityComparer_1::GetHashCode(System.String key)
    int GetHashCode(::Il2CppString* key);
  }; // System.Xml.SecureStringHasher
  static check_size<sizeof(SecureStringHasher), 16 + sizeof(int)> __System_Xml_SecureStringHasherSizeCheck;
  static_assert(sizeof(SecureStringHasher) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::SecureStringHasher*, "System.Xml", "SecureStringHasher");
#pragma pack(pop)
