// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PacketEncryptionLayer
#include "GlobalNamespace/PacketEncryptionLayer.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: EncryptionUtility
#include "GlobalNamespace/EncryptionUtility.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: PacketEncryptionLayer/<AddEncryptedEndpointAsync>d__24
  // [CompilerGeneratedAttribute] Offset: DEF5FC
  struct PacketEncryptionLayer::$AddEncryptedEndpointAsync$d__24/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<EncryptionUtility/IEncryptionState> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::EncryptionUtility::IEncryptionState*> $$t__builder;
    // public System.Byte[] preMasterSecret
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* preMasterSecret;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Byte[] serverRandom
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* serverRandom;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Byte[] clientRandom
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* clientRandom;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Boolean isClient
    // Size: 0x1
    // Offset: 0x38
    bool isClient;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public PacketEncryptionLayer <>4__this
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::PacketEncryptionLayer* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PacketEncryptionLayer*) == 0x8);
    // public System.Net.IPEndPoint endPoint
    // Size: 0x8
    // Offset: 0x48
    System::Net::IPEndPoint* endPoint;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<EncryptionUtility/IEncryptionState> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x50
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EncryptionUtility::IEncryptionState*> $$u__1;
    // Creating value type constructor for type: $AddEncryptedEndpointAsync$d__24
    constexpr $AddEncryptedEndpointAsync$d__24(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::EncryptionUtility::IEncryptionState*> $$t__builder_ = {}, ::Array<uint8_t>* preMasterSecret_ = {}, ::Array<uint8_t>* serverRandom_ = {}, ::Array<uint8_t>* clientRandom_ = {}, bool isClient_ = {}, GlobalNamespace::PacketEncryptionLayer* $$4__this_ = {}, System::Net::IPEndPoint* endPoint_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EncryptionUtility::IEncryptionState*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, preMasterSecret{preMasterSecret_}, serverRandom{serverRandom_}, clientRandom{clientRandom_}, isClient{isClient_}, $$4__this{$$4__this_}, endPoint{endPoint_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xEF05D0
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xEF05D8
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // PacketEncryptionLayer/<AddEncryptedEndpointAsync>d__24
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PacketEncryptionLayer::$AddEncryptedEndpointAsync$d__24, "", "PacketEncryptionLayer/<AddEncryptedEndpointAsync>d__24");
