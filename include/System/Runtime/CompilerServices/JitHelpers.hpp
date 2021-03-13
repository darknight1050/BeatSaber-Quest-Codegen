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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ValueType
  class ValueType;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.JitHelpers
  // [] Offset: FFFFFFFF
  // [FriendAccessAllowedAttribute] Offset: C975B0
  class JitHelpers : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: JitHelpers
    JitHelpers() noexcept {}
    // static T UnsafeCast(System.Object o)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T UnsafeCast(::Il2CppObject* o) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::JitHelpers::UnsafeCast");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Runtime.CompilerServices", "JitHelpers", "UnsafeCast", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(o)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, o);
    }
    // static System.Int32 UnsafeEnumCast(T val)
    // Offset: 0xFFFFFFFF
    template<class T>
    static int UnsafeEnumCast(T val) {
      static_assert(is_value_type_v<T>);
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::JitHelpers::UnsafeEnumCast");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Runtime.CompilerServices", "JitHelpers", "UnsafeEnumCast", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(val)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, val);
    }
    // static System.Int64 UnsafeEnumCastLong(T val)
    // Offset: 0xFFFFFFFF
    template<class T>
    static int64_t UnsafeEnumCastLong(T val) {
      static_assert(is_value_type_v<T>);
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::JitHelpers::UnsafeEnumCastLong");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Runtime.CompilerServices", "JitHelpers", "UnsafeEnumCastLong", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(val)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<int64_t, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, val);
    }
  }; // System.Runtime.CompilerServices.JitHelpers
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::JitHelpers*, "System.Runtime.CompilerServices", "JitHelpers");
