// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: AnalyticsMetricUnit
  struct AnalyticsMetricUnit;
  // Forward declaring type: IMasterServerReliableRequest
  class IMasterServerReliableRequest;
  // Forward declaring type: IMasterServerReliableResponse
  class IMasterServerReliableResponse;
  // Forward declaring type: IMasterServerUnreliableMessage
  class IMasterServerUnreliableMessage;
  // Forward declaring type: IMasterServerResponse
  class IMasterServerResponse;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DedicatedServerType
  struct DedicatedServerType;
  // Forward declaring type: ConnectionFailedReason
  struct ConnectionFailedReason;
  // Forward declaring type: DisconnectedReason
  struct DisconnectedReason;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.IAnalyticsManager
  class IAnalyticsManager/*, public System::IDisposable*/ {
    public:
    // Creating value type constructor for type: IAnalyticsManager
    IAnalyticsManager() noexcept {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void PollUpdate()
    // Offset: 0xFFFFFFFF
    void PollUpdate();
    // public System.Void UpdateState(System.String metricName, System.Int64 state, MasterServer.AnalyticsMetricUnit unit, System.Boolean alarmMetric)
    // Offset: 0xFFFFFFFF
    void UpdateState(::Il2CppString* metricName, int64_t state, MasterServer::AnalyticsMetricUnit unit, bool alarmMetric);
    // public System.Void UpdateAverage(System.String metricName, System.Double value, MasterServer.AnalyticsMetricUnit unit, System.Boolean alarmMetric)
    // Offset: 0xFFFFFFFF
    void UpdateAverage(::Il2CppString* metricName, double value, MasterServer::AnalyticsMetricUnit unit, bool alarmMetric);
    // public System.Void IncrementCounter(System.String metricName, System.Int64 incrementAmount, MasterServer.AnalyticsMetricUnit unit)
    // Offset: 0xFFFFFFFF
    void IncrementCounter(::Il2CppString* metricName, int64_t incrementAmount, MasterServer::AnalyticsMetricUnit unit);
    // public System.Void ReceivedReliableRequestEvent(MasterServer.IMasterServerReliableRequest request)
    // Offset: 0xFFFFFFFF
    void ReceivedReliableRequestEvent(MasterServer::IMasterServerReliableRequest* request);
    // public System.Void SentReliableRequestEvent(MasterServer.IMasterServerReliableRequest request)
    // Offset: 0xFFFFFFFF
    void SentReliableRequestEvent(MasterServer::IMasterServerReliableRequest* request);
    // public System.Void ReceivedReliableResponseEvent(MasterServer.IMasterServerReliableResponse request)
    // Offset: 0xFFFFFFFF
    void ReceivedReliableResponseEvent(MasterServer::IMasterServerReliableResponse* request);
    // public System.Void SentReliableResponseEvent(MasterServer.IMasterServerReliableResponse response)
    // Offset: 0xFFFFFFFF
    void SentReliableResponseEvent(MasterServer::IMasterServerReliableResponse* response);
    // public System.Void ReceivedUnreliableMessageEvent(MasterServer.IMasterServerUnreliableMessage message)
    // Offset: 0xFFFFFFFF
    void ReceivedUnreliableMessageEvent(MasterServer::IMasterServerUnreliableMessage* message);
    // public System.Void SentUnreliableMessageEvent(MasterServer.IMasterServerUnreliableMessage message)
    // Offset: 0xFFFFFFFF
    void SentUnreliableMessageEvent(MasterServer::IMasterServerUnreliableMessage* message);
    // public System.Void SentUnreliableResponseEvent(MasterServer.IMasterServerResponse response)
    // Offset: 0xFFFFFFFF
    void SentUnreliableResponseEvent(MasterServer::IMasterServerResponse* response);
    // public System.Void ReceivedUnreliableResponseEvent(MasterServer.IMasterServerResponse response)
    // Offset: 0xFFFFFFFF
    void ReceivedUnreliableResponseEvent(MasterServer::IMasterServerResponse* response);
    // public System.Void DedicatedServerServerConnectedEvent(DedicatedServerType serverType)
    // Offset: 0xFFFFFFFF
    void DedicatedServerServerConnectedEvent(GlobalNamespace::DedicatedServerType serverType);
    // public System.Void DedicatedServerServerConnectionFailedEvent(DedicatedServerType serverType, ConnectionFailedReason reason)
    // Offset: 0xFFFFFFFF
    void DedicatedServerServerConnectionFailedEvent(GlobalNamespace::DedicatedServerType serverType, GlobalNamespace::ConnectionFailedReason reason);
    // public System.Void DedicatedServerServerDisconnectedEvent(DedicatedServerType serverType, DisconnectedReason reason)
    // Offset: 0xFFFFFFFF
    void DedicatedServerServerDisconnectedEvent(GlobalNamespace::DedicatedServerType serverType, GlobalNamespace::DisconnectedReason reason);
    // public System.Void DedicatedServerPlayerConnectedEvent(DedicatedServerType serverType)
    // Offset: 0xFFFFFFFF
    void DedicatedServerPlayerConnectedEvent(GlobalNamespace::DedicatedServerType serverType);
    // public System.Void DedicatedServerPlayerDisconnectedEvent(DedicatedServerType serverType, DisconnectedReason reason)
    // Offset: 0xFFFFFFFF
    void DedicatedServerPlayerDisconnectedEvent(GlobalNamespace::DedicatedServerType serverType, GlobalNamespace::DisconnectedReason reason);
  }; // MasterServer.IAnalyticsManager
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::IAnalyticsManager*, "MasterServer", "IAnalyticsManager");
