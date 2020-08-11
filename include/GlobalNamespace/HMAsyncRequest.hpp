// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: HMAutoincrementedRequestId
#include "GlobalNamespace/HMAutoincrementedRequestId.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: HMAsyncRequest
  class HMAsyncRequest : public GlobalNamespace::HMAutoincrementedRequestId {
    public:
    // Nested type: GlobalNamespace::HMAsyncRequest::CancelHander
    class CancelHander;
    // private System.Boolean _cancelled
    // Offset: 0x18
    bool cancelled;
    // private HMAsyncRequest/CancelHander _cancelHander
    // Offset: 0x20
    GlobalNamespace::HMAsyncRequest::CancelHander* cancelHander;
    // public HMAsyncRequest/CancelHander get_CancelHandler()
    // Offset: 0xCA0328
    GlobalNamespace::HMAsyncRequest::CancelHander* get_CancelHandler();
    // public System.Void set_CancelHandler(HMAsyncRequest/CancelHander value)
    // Offset: 0xCA0330
    void set_CancelHandler(GlobalNamespace::HMAsyncRequest::CancelHander* value);
    // public System.Boolean get_cancelled()
    // Offset: 0xCA0338
    bool get_cancelled();
    // public System.Void Cancel()
    // Offset: 0xCA0340
    void Cancel();
    // public System.Void .ctor()
    // Offset: 0xCA0714
    // Implemented from: HMAutoincrementedRequestId
    // Base method: System.Void HMAutoincrementedRequestId::.ctor()
    // Base method: System.Void Object::.ctor()
    static HMAsyncRequest* New_ctor();
  }; // HMAsyncRequest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HMAsyncRequest*, "", "HMAsyncRequest");
#pragma pack(pop)
