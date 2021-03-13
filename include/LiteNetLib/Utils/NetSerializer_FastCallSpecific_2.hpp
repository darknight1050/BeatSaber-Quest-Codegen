// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.NetSerializer
#include "LiteNetLib/Utils/NetSerializer.hpp"
// Including type: LiteNetLib.Utils.NetSerializer/FastCall`1
#include "LiteNetLib/Utils/NetSerializer_FastCall_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // WARNING Size may be invalid!
  // Autogenerated type: LiteNetLib.Utils.NetSerializer/FastCallSpecific`2
  // [] Offset: FFFFFFFF
  template<typename TClass, typename TProperty>
  class NetSerializer::FastCallSpecific_2 : public LiteNetLib::Utils::NetSerializer::FastCall_1<TClass> {
    public:
    // protected System.Func`2<TClass,TProperty> Getter
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<TClass, TProperty>* Getter;
    // Field size check
    static_assert(sizeof(System::Func_2<TClass, TProperty>*) == 0x8);
    // protected System.Action`2<TClass,TProperty> Setter
    // Size: 0x8
    // Offset: 0x0
    System::Action_2<TClass, TProperty>* Setter;
    // Field size check
    static_assert(sizeof(System::Action_2<TClass, TProperty>*) == 0x8);
    // protected System.Func`2<TClass,TProperty[]> GetterArr
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<TClass, ::Array<TProperty>*>* GetterArr;
    // Field size check
    static_assert(sizeof(System::Func_2<TClass, ::Array<TProperty>*>*) == 0x8);
    // protected System.Action`2<TClass,TProperty[]> SetterArr
    // Size: 0x8
    // Offset: 0x0
    System::Action_2<TClass, ::Array<TProperty>*>* SetterArr;
    // Field size check
    static_assert(sizeof(System::Action_2<TClass, ::Array<TProperty>*>*) == 0x8);
    // Creating value type constructor for type: FastCallSpecific_2
    FastCallSpecific_2(System::Func_2<TClass, TProperty>* Getter_ = {}, System::Action_2<TClass, TProperty>* Setter_ = {}, System::Func_2<TClass, ::Array<TProperty>*>* GetterArr_ = {}, System::Action_2<TClass, ::Array<TProperty>*>* SetterArr_ = {}) noexcept : Getter{Getter_}, Setter{Setter_}, GetterArr{GetterArr_}, SetterArr{SetterArr_} {}
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // protected TProperty[] ReadArrayHelper(TClass inf, LiteNetLib.Utils.NetDataReader r)
    // Offset: 0xFFFFFFFF
    ::Array<TProperty>* ReadArrayHelper(TClass inf, LiteNetLib::Utils::NetDataReader* r) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::FastCallSpecific_2::ReadArrayHelper");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadArrayHelper", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(inf, r)));
      return ::il2cpp_utils::RunMethodThrow<::Array<TProperty>*, false>(this, ___internal__method, inf, r);
    }
    // protected TProperty[] WriteArrayHelper(TClass inf, LiteNetLib.Utils.NetDataWriter w)
    // Offset: 0xFFFFFFFF
    ::Array<TProperty>* WriteArrayHelper(TClass inf, LiteNetLib::Utils::NetDataWriter* w) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::FastCallSpecific_2::WriteArrayHelper");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "WriteArrayHelper", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(inf, w)));
      return ::il2cpp_utils::RunMethodThrow<::Array<TProperty>*, false>(this, ___internal__method, inf, w);
    }
    // public override System.Void Init(System.Reflection.MethodInfo getMethod, System.Reflection.MethodInfo setMethod, System.Boolean isArray)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/FastCall`1
    // Base method: System.Void FastCall_1::Init_NEW(System.Reflection.MethodInfo getMethod, System.Reflection.MethodInfo setMethod, System.Boolean isArray)
    void Init(System::Reflection::MethodInfo* getMethod, System::Reflection::MethodInfo* setMethod, bool isArray) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::FastCallSpecific_2::Init");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Init", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(getMethod, setMethod, isArray)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, getMethod, setMethod, isArray);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/FastCall`1
    // Base method: System.Void FastCall_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetSerializer::FastCallSpecific_2<TClass, TProperty>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::FastCallSpecific_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetSerializer::FastCallSpecific_2<TClass, TProperty>*, creationType>()));
    }
  }; // LiteNetLib.Utils.NetSerializer/FastCallSpecific`2
  // Could not write size check! Type: LiteNetLib.Utils.NetSerializer/FastCallSpecific`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::NetSerializer::FastCallSpecific_2, "LiteNetLib.Utils", "NetSerializer/FastCallSpecific`2");
