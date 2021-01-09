// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IHashCodeProvider
#include "System/Collections/IHashCodeProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: TextInfo
  class TextInfo;
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x18
  // Autogenerated type: System.Collections.CaseInsensitiveHashCodeProvider
  // [] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: D3C6CC
  // [ComVisibleAttribute] Offset: D3C6CC
  class CaseInsensitiveHashCodeProvider : public ::Il2CppObject/*, public System::Collections::IHashCodeProvider*/ {
    public:
    // private System.Globalization.TextInfo m_text
    // Size: 0x8
    // Offset: 0x10
    System::Globalization::TextInfo* m_text;
    // Field size check
    static_assert(sizeof(System::Globalization::TextInfo*) == 0x8);
    // Creating value type constructor for type: CaseInsensitiveHashCodeProvider
    CaseInsensitiveHashCodeProvider(System::Globalization::TextInfo* m_text_ = {}) noexcept : m_text{m_text_} {}
    // Creating interface conversion operator: operator System::Collections::IHashCodeProvider
    operator System::Collections::IHashCodeProvider() noexcept {
      return *reinterpret_cast<System::Collections::IHashCodeProvider*>(this);
    }
    // Creating conversion operator: operator System::Globalization::TextInfo*
    constexpr operator System::Globalization::TextInfo*() const noexcept {
      return m_text;
    }
    // public System.Void .ctor(System.Globalization.CultureInfo culture)
    // Offset: 0x1CB3F14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CaseInsensitiveHashCodeProvider* New_ctor(System::Globalization::CultureInfo* culture) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::CaseInsensitiveHashCodeProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CaseInsensitiveHashCodeProvider*, creationType>(culture)));
    }
    // static public System.Collections.CaseInsensitiveHashCodeProvider get_Default()
    // Offset: 0x1CB3FC4
    static System::Collections::CaseInsensitiveHashCodeProvider* get_Default();
    // public System.Void .ctor()
    // Offset: 0x1CB3E80
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CaseInsensitiveHashCodeProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::CaseInsensitiveHashCodeProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CaseInsensitiveHashCodeProvider*, creationType>()));
    }
    // public System.Int32 GetHashCode(System.Object obj)
    // Offset: 0x1CB4050
    // Implemented from: System.Collections.IHashCodeProvider
    // Base method: System.Int32 IHashCodeProvider::GetHashCode(System.Object obj)
    int GetHashCode(::Il2CppObject* obj);
  }; // System.Collections.CaseInsensitiveHashCodeProvider
  static check_size<sizeof(CaseInsensitiveHashCodeProvider), 16 + sizeof(System::Globalization::TextInfo*)> __System_Collections_CaseInsensitiveHashCodeProviderSizeCheck;
  static_assert(sizeof(CaseInsensitiveHashCodeProvider) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::CaseInsensitiveHashCodeProvider*, "System.Collections", "CaseInsensitiveHashCodeProvider");
#pragma pack(pop)
