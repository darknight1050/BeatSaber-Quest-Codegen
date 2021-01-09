// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.NetSerializer
#include "LiteNetLib/Utils/NetSerializer.hpp"
// Including type: LiteNetLib.Utils.NetSerializer/EnumByteSerializer`1
#include "LiteNetLib/Utils/NetSerializer_EnumByteSerializer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
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
  // Autogenerated type: LiteNetLib.Utils.NetSerializer/EnumIntSerializer`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class NetSerializer::EnumIntSerializer_1 : public LiteNetLib::Utils::NetSerializer::EnumByteSerializer_1<T> {
    public:
    // Creating value type constructor for type: EnumIntSerializer_1
    EnumIntSerializer_1() noexcept {}
    // public System.Void .ctor(System.Reflection.PropertyInfo property, System.Type propertyType)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/EnumByteSerializer`1
    // Base method: System.Void EnumByteSerializer_1::.ctor(System.Reflection.PropertyInfo property, System.Type propertyType)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetSerializer::EnumIntSerializer_1<T>* New_ctor(System::Reflection::PropertyInfo* property, System::Type* propertyType) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::EnumIntSerializer_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetSerializer::EnumIntSerializer_1<T>*, creationType>(property, propertyType)));
    }
    // public override System.Void Read(T inf, LiteNetLib.Utils.NetDataReader r)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/EnumByteSerializer`1
    // Base method: System.Void EnumByteSerializer_1::Read(T inf, LiteNetLib.Utils.NetDataReader r)
    void Read(T inf, LiteNetLib::Utils::NetDataReader* r) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::EnumIntSerializer_1::Read");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Read", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(inf, r)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, inf, r);
    }
    // public override System.Void Write(T inf, LiteNetLib.Utils.NetDataWriter w)
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/EnumByteSerializer`1
    // Base method: System.Void EnumByteSerializer_1::Write(T inf, LiteNetLib.Utils.NetDataWriter w)
    void Write(T inf, LiteNetLib::Utils::NetDataWriter* w) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::EnumIntSerializer_1::Write");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Write", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(inf, w)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, inf, w);
    }
  }; // LiteNetLib.Utils.NetSerializer/EnumIntSerializer`1
  // Could not write size check! Type: LiteNetLib.Utils.NetSerializer/EnumIntSerializer`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::NetSerializer::EnumIntSerializer_1, "LiteNetLib.Utils", "NetSerializer/EnumIntSerializer`1");
