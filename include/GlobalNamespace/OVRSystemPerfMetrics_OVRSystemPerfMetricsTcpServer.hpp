// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSystemPerfMetrics
#include "GlobalNamespace/OVRSystemPerfMetrics.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRNetwork
#include "GlobalNamespace/OVRNetwork.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: OVRSystemPerfMetrics/OVRSystemPerfMetricsTcpServer
  class OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer : public UnityEngine::MonoBehaviour {
    public:
    // private OVRNetwork/OVRNetworkTcpServer tcpServer
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::OVRNetwork::OVRNetworkTcpServer* tcpServer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRNetwork::OVRNetworkTcpServer*) == 0x8);
    // public System.Int32 listeningPort
    // Size: 0x4
    // Offset: 0x20
    int listeningPort;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: OVRSystemPerfMetricsTcpServer
    OVRSystemPerfMetricsTcpServer(GlobalNamespace::OVRNetwork::OVRNetworkTcpServer* tcpServer_ = {}, int listeningPort_ = {}) noexcept : tcpServer{tcpServer_}, listeningPort{listeningPort_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static public OVRSystemPerfMetrics/OVRSystemPerfMetricsTcpServer singleton
    static GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer* _get_singleton();
    // Set static field: static public OVRSystemPerfMetrics/OVRSystemPerfMetricsTcpServer singleton
    static void _set_singleton(GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer* value);
    // private System.Void OnEnable()
    // Offset: 0x1EB9790
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x1EB98CC
    void OnDisable();
    // private System.Void Update()
    // Offset: 0x1EB997C
    void Update();
    // private OVRSystemPerfMetrics/PerfMetrics GatherPerfMetrics()
    // Offset: 0x1EB9A04
    GlobalNamespace::OVRSystemPerfMetrics::PerfMetrics* GatherPerfMetrics();
    // public System.Void .ctor()
    // Offset: 0x1EBA074
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1EBA0E4
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // OVRSystemPerfMetrics/OVRSystemPerfMetricsTcpServer
  #pragma pack(pop)
  static check_size<sizeof(OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer), 32 + sizeof(int)> __GlobalNamespace_OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServerSizeCheck;
  static_assert(sizeof(OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer*, "", "OVRSystemPerfMetrics/OVRSystemPerfMetricsTcpServer");
