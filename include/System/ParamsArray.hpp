// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.ParamsArray
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: C933E8
  struct ParamsArray/*, public System::ValueType*/ {
    public:
    // private readonly System.Object arg0
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* arg0;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Object arg1
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppObject* arg1;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Object arg2
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* arg2;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Object[] args
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppObject*>* args;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // Creating value type constructor for type: ParamsArray
    constexpr ParamsArray(::Il2CppObject* arg0_ = {}, ::Il2CppObject* arg1_ = {}, ::Il2CppObject* arg2_ = {}, ::Array<::Il2CppObject*>* args_ = {}) noexcept : arg0{arg0_}, arg1{arg1_}, arg2{arg2_}, args{args_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get static field: static private readonly System.Object[] oneArgArray
    static ::Array<::Il2CppObject*>* _get_oneArgArray();
    // Set static field: static private readonly System.Object[] oneArgArray
    static void _set_oneArgArray(::Array<::Il2CppObject*>* value);
    // Get static field: static private readonly System.Object[] twoArgArray
    static ::Array<::Il2CppObject*>* _get_twoArgArray();
    // Set static field: static private readonly System.Object[] twoArgArray
    static void _set_twoArgArray(::Array<::Il2CppObject*>* value);
    // Get static field: static private readonly System.Object[] threeArgArray
    static ::Array<::Il2CppObject*>* _get_threeArgArray();
    // Set static field: static private readonly System.Object[] threeArgArray
    static void _set_threeArgArray(::Array<::Il2CppObject*>* value);
    // public System.Void .ctor(System.Object arg0)
    // Offset: 0xE015A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    ParamsArray(::Il2CppObject* arg0) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ParamsArray::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(arg0)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, arg0);
    }
    // public System.Void .ctor(System.Object arg0, System.Object arg1)
    // Offset: 0xE015AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    ParamsArray(::Il2CppObject* arg0, ::Il2CppObject* arg1) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ParamsArray::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(arg0, arg1)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, arg0, arg1);
    }
    // public System.Void .ctor(System.Object arg0, System.Object arg1, System.Object arg2)
    // Offset: 0xE015B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    ParamsArray(::Il2CppObject* arg0, ::Il2CppObject* arg1, ::Il2CppObject* arg2) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ParamsArray::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(arg0, arg1, arg2)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, arg0, arg1, arg2);
    }
    // public System.Void .ctor(System.Object[] args)
    // Offset: 0xE015BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    ParamsArray(::Array<::Il2CppObject*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ParamsArray::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(args)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, args);
    }
    // public System.Int32 get_Length()
    // Offset: 0xE015C4
    int get_Length();
    // public System.Object get_Item(System.Int32 index)
    // Offset: 0xE015E0
    ::Il2CppObject* get_Item(int index);
    // private System.Object GetAtSlow(System.Int32 index)
    // Offset: 0xE015F4
    ::Il2CppObject* GetAtSlow(int index);
    // static private System.Void .cctor()
    // Offset: 0x1ABB64C
    static void _cctor();
  }; // System.ParamsArray
  #pragma pack(pop)
  static check_size<sizeof(ParamsArray), 24 + sizeof(::Array<::Il2CppObject*>*)> __System_ParamsArraySizeCheck;
  static_assert(sizeof(ParamsArray) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::ParamsArray, "System", "ParamsArray");
