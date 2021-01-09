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
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // WARNING Size may be invalid!
  // Autogenerated type: LiteNetLib.Utils.NetSerializer/IntSerializer`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class NetSerializer::IntSerializer_1 : public LiteNetLib::Utils::NetSerializer::FastCallSpecific_2<T, int> {
    public:
    // Creating value type constructor for type: IntSerializer_1
    IntSerializer_1() noexcept {}
    // public override System.Void Read(T inf, LiteNetLib.Utils.NetDataReader r)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/FastCall`1
    // Base method: System.Void FastCall_1::Read(T inf, LiteNetLib.Utils.NetDataReader r)
    void Read(T inf, LiteNetLib::Utils::NetDataReader* r) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::IntSerializer_1::Read");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Read", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(inf, r)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, inf, r);
    }
    // public override System.Void Write(T inf, LiteNetLib.Utils.NetDataWriter w)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/FastCall`1
    // Base method: System.Void FastCall_1::Write(T inf, LiteNetLib.Utils.NetDataWriter w)
    void Write(T inf, LiteNetLib::Utils::NetDataWriter* w) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::IntSerializer_1::Write");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Write", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(inf, w)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, inf, w);
    }
    // public override System.Void ReadArray(T inf, LiteNetLib.Utils.NetDataReader r)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/FastCall`1
    // Base method: System.Void FastCall_1::ReadArray(T inf, LiteNetLib.Utils.NetDataReader r)
    void ReadArray(T inf, LiteNetLib::Utils::NetDataReader* r) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::IntSerializer_1::ReadArray");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReadArray", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(inf, r)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, inf, r);
    }
    // public override System.Void WriteArray(T inf, LiteNetLib.Utils.NetDataWriter w)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/FastCall`1
    // Base method: System.Void FastCall_1::WriteArray(T inf, LiteNetLib.Utils.NetDataWriter w)
    void WriteArray(T inf, LiteNetLib::Utils::NetDataWriter* w) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::IntSerializer_1::WriteArray");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "WriteArray", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(inf, w)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, inf, w);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/FastCallSpecific`2
    // Base method: System.Void FastCallSpecific_2::.ctor()
    // Base method: System.Void FastCall_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetSerializer::IntSerializer_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::IntSerializer_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetSerializer::IntSerializer_1<T>*, creationType>()));
    }
  }; // LiteNetLib.Utils.NetSerializer/IntSerializer`1
  // Could not write size check! Type: LiteNetLib.Utils.NetSerializer/IntSerializer`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::NetSerializer::IntSerializer_1, "LiteNetLib.Utils", "NetSerializer/IntSerializer`1");
