// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::TestRunner::Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Forward declaring namespace: UnityEngine::TestRunner::TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
  // Forward declaring type: IRemoteTestResultDataFactory
  class IRemoteTestResultDataFactory;
}
// Forward declaring namespace: UnityEngine::Networking::PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Forward declaring type: MessageEventArgs
  class MessageEventArgs;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: ITestResult
  class ITestResult;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner.Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
  // Autogenerated type: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender
  class RemoteTestResultSender : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData
    class QueueData;
    // Nested type: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__13
    class $SendDataRoutine$d__13;
    // private System.Single m_NextliveMessage
    // Offset: 0x18
    float m_NextliveMessage;
    // private readonly System.Collections.Generic.Queue`1<UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender/QueueData> m_SendQueue
    // Offset: 0x20
    System::Collections::Generic::Queue_1<UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData*>* m_SendQueue;
    // private readonly System.Object m_LockQueue
    // Offset: 0x28
    ::Il2CppObject* m_LockQueue;
    // private readonly UnityEngine.TestRunner.TestLaunchers.IRemoteTestResultDataFactory m_TestResultDataFactory
    // Offset: 0x30
    UnityEngine::TestRunner::TestLaunchers::IRemoteTestResultDataFactory* m_TestResultDataFactory;
    // static field const value: static private System.Int32 k_aliveMessageFrequency
    static constexpr const int k_aliveMessageFrequency = 120;
    // Get static field: static private System.Int32 k_aliveMessageFrequency
    static int _get_k_aliveMessageFrequency();
    // Set static field: static private System.Int32 k_aliveMessageFrequency
    static void _set_k_aliveMessageFrequency(int value);
    // public System.Void Start()
    // Offset: 0xDA0B50
    void Start();
    // private System.Void EditorProccessedTheResult(UnityEngine.Networking.PlayerConnection.MessageEventArgs arg0)
    // Offset: 0xDA0C9C
    void EditorProccessedTheResult(UnityEngine::Networking::PlayerConnection::MessageEventArgs* arg0);
    // private System.Byte[] SerializeObject(System.Object objectToSerialize)
    // Offset: 0xDA0CEC
    ::Array<uint8_t>* SerializeObject(::Il2CppObject* objectToSerialize);
    // public System.Void RunStarted(NUnit.Framework.Interfaces.ITest testsToRun)
    // Offset: 0xDA0D3C
    void RunStarted(NUnit::Framework::Interfaces::ITest* testsToRun);
    // public System.Void RunFinished(NUnit.Framework.Interfaces.ITestResult testResults)
    // Offset: 0xDA0F00
    void RunFinished(NUnit::Framework::Interfaces::ITestResult* testResults);
    // public System.Void TestStarted(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xDA10B8
    void TestStarted(NUnit::Framework::Interfaces::ITest* test);
    // public System.Void TestFinished(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0xDA1274
    void TestFinished(NUnit::Framework::Interfaces::ITestResult* result);
    // public System.Collections.IEnumerator SendDataRoutine()
    // Offset: 0xDA0C20
    System::Collections::IEnumerator* SendDataRoutine();
    // private System.Void SendAliveMessageIfNeeded()
    // Offset: 0xDA1458
    void SendAliveMessageIfNeeded();
    // private System.Void ResetNextPlayerAliveMessageTime()
    // Offset: 0xDA1558
    void ResetNextPlayerAliveMessageTime();
    // public System.Void .ctor()
    // Offset: 0xDA158C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static RemoteTestResultSender* New_ctor();
  }; // UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender*, "UnityEngine.TestTools.TestRunner.Callbacks", "RemoteTestResultSender");
#pragma pack(pop)
