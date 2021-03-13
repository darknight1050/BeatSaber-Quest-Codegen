// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender
  // [] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: D44F3C
  class RemoteTestResultSender : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData
    class QueueData;
    // Nested type: UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::$SendDataRoutine$d__12
    class $SendDataRoutine$d__12;
    // private System.Single m_NextliveMessage
    // Size: 0x4
    // Offset: 0x18
    float m_NextliveMessage;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: m_NextliveMessage and: m_SendQueue
    char __padding0[0x4] = {};
    // private readonly System.Collections.Generic.Queue`1<UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender/QueueData> m_SendQueue
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::Queue_1<UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData*>* m_SendQueue;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Queue_1<UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData*>*) == 0x8);
    // private readonly System.Object m_LockQueue
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* m_LockQueue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly UnityEngine.TestRunner.TestLaunchers.IRemoteTestResultDataFactory m_TestResultDataFactory
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::TestRunner::TestLaunchers::IRemoteTestResultDataFactory* m_TestResultDataFactory;
    // Field size check
    static_assert(sizeof(UnityEngine::TestRunner::TestLaunchers::IRemoteTestResultDataFactory*) == 0x8);
    // Creating value type constructor for type: RemoteTestResultSender
    RemoteTestResultSender(float m_NextliveMessage_ = {}, System::Collections::Generic::Queue_1<UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData*>* m_SendQueue_ = {}, ::Il2CppObject* m_LockQueue_ = {}, UnityEngine::TestRunner::TestLaunchers::IRemoteTestResultDataFactory* m_TestResultDataFactory_ = {}) noexcept : m_NextliveMessage{m_NextliveMessage_}, m_SendQueue{m_SendQueue_}, m_LockQueue{m_LockQueue_}, m_TestResultDataFactory{m_TestResultDataFactory_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 k_aliveMessageFrequency
    static constexpr const int k_aliveMessageFrequency = 120;
    // Get static field: static private System.Int32 k_aliveMessageFrequency
    static int _get_k_aliveMessageFrequency();
    // Set static field: static private System.Int32 k_aliveMessageFrequency
    static void _set_k_aliveMessageFrequency(int value);
    // public System.Void Start()
    // Offset: 0x1353230
    void Start();
    // private System.Byte[] SerializeObject(System.Object objectToSerialize)
    // Offset: 0x13532CC
    ::Array<uint8_t>* SerializeObject(::Il2CppObject* objectToSerialize);
    // public System.Void RunStarted(NUnit.Framework.Interfaces.ITest testsToRun)
    // Offset: 0x135331C
    void RunStarted_NEW(NUnit::Framework::Interfaces::ITest* testsToRun);
    // public System.Void RunFinished(NUnit.Framework.Interfaces.ITestResult testResults)
    // Offset: 0x13534C0
    void RunFinished_NEW(NUnit::Framework::Interfaces::ITestResult* testResults);
    // public System.Void TestStarted(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x1353658
    void TestStarted_NEW(NUnit::Framework::Interfaces::ITest* test);
    // public System.Void TestFinished(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0x13537F4
    void TestFinished_NEW(NUnit::Framework::Interfaces::ITestResult* result);
    // public System.Collections.IEnumerator SendDataRoutine()
    // Offset: 0x135325C
    System::Collections::IEnumerator* SendDataRoutine();
    // private System.Void SendAliveMessageIfNeeded()
    // Offset: 0x13539B8
    void SendAliveMessageIfNeeded();
    // private System.Void ResetNextPlayerAliveMessageTime()
    // Offset: 0x1353AB8
    void ResetNextPlayerAliveMessageTime();
    // public System.Void .ctor()
    // Offset: 0x1353AEC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoteTestResultSender* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoteTestResultSender*, creationType>()));
    }
  }; // UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender
  #pragma pack(pop)
  static check_size<sizeof(RemoteTestResultSender), 48 + sizeof(UnityEngine::TestRunner::TestLaunchers::IRemoteTestResultDataFactory*)> __UnityEngine_TestTools_TestRunner_Callbacks_RemoteTestResultSenderSizeCheck;
  static_assert(sizeof(RemoteTestResultSender) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender*, "UnityEngine.TestTools.TestRunner.Callbacks", "RemoteTestResultSender");
