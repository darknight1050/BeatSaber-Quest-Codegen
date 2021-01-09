// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.NetSerializer
#include "LiteNetLib/Utils/NetSerializer.hpp"
// Including type: LiteNetLib.Utils.NetSerializer/FastCallSpecific`2
#include "LiteNetLib/Utils/NetSerializer_FastCallSpecific_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: INetSerializable
  class INetSerializable;
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // WARNING Size may be invalid!
  // Autogenerated type: LiteNetLib.Utils.NetSerializer/FastCallClass`2
  // [] Offset: FFFFFFFF
  template<typename TClass, typename TProperty>
  class NetSerializer::FastCallClass_2 : public LiteNetLib::Utils::NetSerializer::FastCallSpecific_2<TClass, TProperty> {
    public:
    // private readonly System.Func`1<TProperty> _constructor
    // Size: 0x8
    // Offset: 0x0
    System::Func_1<TProperty>* constructor;
    // Field size check
    static_assert(sizeof(System::Func_1<TProperty>*) == 0x8);
    // Creating value type constructor for type: FastCallClass_2
    FastCallClass_2(System::Func_1<TProperty>* constructor_ = {}) noexcept : constructor{constructor_} {}
    // public System.Void .ctor(System.Func`1<TProperty> constructor)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetSerializer::FastCallClass_2<TClass, TProperty>* New_ctor(System::Func_1<TProperty>* constructor) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::FastCallClass_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetSerializer::FastCallClass_2<TClass, TProperty>*, creationType>(constructor)));
    }
    // public override System.Void Read(TClass inf, LiteNetLib.Utils.NetDataReader r)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/FastCall`1
    // Base method: System.Void FastCall_1::Read(TClass inf, LiteNetLib.Utils.NetDataReader r)
    void Read(TClass inf, LiteNetLib::Utils::NetDataReader* r) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::FastCallClass_2::Read");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Read", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(inf, r)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, inf, r);
    }
    // public override System.Void Write(TClass inf, LiteNetLib.Utils.NetDataWriter w)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/FastCall`1
    // Base method: System.Void FastCall_1::Write(TClass inf, LiteNetLib.Utils.NetDataWriter w)
    void Write(TClass inf, LiteNetLib::Utils::NetDataWriter* w) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::FastCallClass_2::Write");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Write", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(inf, w)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, inf, w);
    }
    // public override System.Void ReadArray(TClass inf, LiteNetLib.Utils.NetDataReader r)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/FastCall`1
    // Base method: System.Void FastCall_1::ReadArray(TClass inf, LiteNetLib.Utils.NetDataReader r)
    void ReadArray(TClass inf, LiteNetLib::Utils::NetDataReader* r) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::FastCallClass_2::ReadArray");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadArray", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(inf, r)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, inf, r);
    }
    // public override System.Void WriteArray(TClass inf, LiteNetLib.Utils.NetDataWriter w)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/FastCall`1
    // Base method: System.Void FastCall_1::WriteArray(TClass inf, LiteNetLib.Utils.NetDataWriter w)
    void WriteArray(TClass inf, LiteNetLib::Utils::NetDataWriter* w) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::FastCallClass_2::WriteArray");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "WriteArray", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(inf, w)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, inf, w);
    }
  }; // LiteNetLib.Utils.NetSerializer/FastCallClass`2
  // Could not write size check! Type: LiteNetLib.Utils.NetSerializer/FastCallClass`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::NetSerializer::FastCallClass_2, "LiteNetLib.Utils", "NetSerializer/FastCallClass`2");
