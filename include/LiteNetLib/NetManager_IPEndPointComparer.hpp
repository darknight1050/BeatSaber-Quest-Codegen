// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.NetManager
#include "LiteNetLib/NetManager.hpp"
// Including type: System.Collections.Generic.IEqualityComparer`1
#include "System/Collections/Generic/IEqualityComparer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NetManager/IPEndPointComparer
  class NetManager::IPEndPointComparer : public ::Il2CppObject/*, public System::Collections::Generic::IEqualityComparer_1<System::Net::IPEndPoint*>*/ {
    public:
    // Creating value type constructor for type: IPEndPointComparer
    IPEndPointComparer() noexcept {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEqualityComparer_1<System::Net::IPEndPoint*>
    operator System::Collections::Generic::IEqualityComparer_1<System::Net::IPEndPoint*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEqualityComparer_1<System::Net::IPEndPoint*>*>(this);
    }
    // public System.Boolean Equals(System.Net.IPEndPoint x, System.Net.IPEndPoint y)
    // Offset: 0x1B2A0C8
    bool Equals(System::Net::IPEndPoint* x, System::Net::IPEndPoint* y);
    // public System.Int32 GetHashCode(System.Net.IPEndPoint obj)
    // Offset: 0x1B2A128
    int GetHashCode(System::Net::IPEndPoint* obj);
    // public System.Void .ctor()
    // Offset: 0x1B24A48
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetManager::IPEndPointComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::NetManager::IPEndPointComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetManager::IPEndPointComparer*, creationType>()));
    }
  }; // LiteNetLib.NetManager/IPEndPointComparer
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetManager::IPEndPointComparer*, "LiteNetLib", "NetManager/IPEndPointComparer");
