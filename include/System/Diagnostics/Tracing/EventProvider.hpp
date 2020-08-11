// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw
#include "Microsoft/Win32/UnsafeNativeMethods_ManifestEtw.hpp"
// Including type: System.Runtime.InteropServices.GCHandle
#include "System/Runtime/InteropServices/GCHandle.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: ControllerCommand
  struct ControllerCommand;
  // Forward declaring type: EventLevel
  struct EventLevel;
  // Forward declaring type: EventKeywords
  struct EventKeywords;
  // Skipping declaration: WriteEventErrorCode because it is already included!
  // Forward declaring type: EventDescriptor
  struct EventDescriptor;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.EventProvider
  class EventProvider : public ::CsObject, public System::IDisposable {
    public:
    // Nested type: System::Diagnostics::Tracing::EventProvider::EventData
    struct EventData;
    // Nested type: System::Diagnostics::Tracing::EventProvider::SessionInfo
    struct SessionInfo;
    // Nested type: System::Diagnostics::Tracing::EventProvider::WriteEventErrorCode
    struct WriteEventErrorCode;
    // Nested type: System::Diagnostics::Tracing::EventProvider::MonoPInvokeCallbackAttribute
    class MonoPInvokeCallbackAttribute;
    // Nested type: System::Diagnostics::Tracing::EventProvider::$$c__DisplayClass44_0
    class $$c__DisplayClass44_0;
    // Autogenerated type: System.Diagnostics.Tracing.EventProvider/SessionInfo
    struct SessionInfo : public System::ValueType {
      public:
      // System.Int32 sessionIdBit
      // Offset: 0x0
      int sessionIdBit;
      // System.Int32 etwSessionId
      // Offset: 0x4
      int etwSessionId;
      // Creating value type constructor for type: SessionInfo
      SessionInfo(int sessionIdBit_ = {}, int etwSessionId_ = {}) : sessionIdBit{sessionIdBit_}, etwSessionId{etwSessionId_} {}
      // System.Void .ctor(System.Int32 sessionIdBit_, System.Int32 etwSessionId_)
      // Offset: 0xA289F8
      static EventProvider::SessionInfo* New_ctor(int sessionIdBit_, int etwSessionId_);
    }; // System.Diagnostics.Tracing.EventProvider/SessionInfo
    // Autogenerated type: System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode
    struct WriteEventErrorCode : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode NoError
      static constexpr const int NoError = 0;
      // Get static field: static public System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode NoError
      static System::Diagnostics::Tracing::EventProvider::WriteEventErrorCode _get_NoError();
      // Set static field: static public System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode NoError
      static void _set_NoError(System::Diagnostics::Tracing::EventProvider::WriteEventErrorCode value);
      // static field const value: static public System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode NoFreeBuffers
      static constexpr const int NoFreeBuffers = 1;
      // Get static field: static public System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode NoFreeBuffers
      static System::Diagnostics::Tracing::EventProvider::WriteEventErrorCode _get_NoFreeBuffers();
      // Set static field: static public System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode NoFreeBuffers
      static void _set_NoFreeBuffers(System::Diagnostics::Tracing::EventProvider::WriteEventErrorCode value);
      // static field const value: static public System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode EventTooBig
      static constexpr const int EventTooBig = 2;
      // Get static field: static public System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode EventTooBig
      static System::Diagnostics::Tracing::EventProvider::WriteEventErrorCode _get_EventTooBig();
      // Set static field: static public System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode EventTooBig
      static void _set_EventTooBig(System::Diagnostics::Tracing::EventProvider::WriteEventErrorCode value);
      // static field const value: static public System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode NullInput
      static constexpr const int NullInput = 3;
      // Get static field: static public System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode NullInput
      static System::Diagnostics::Tracing::EventProvider::WriteEventErrorCode _get_NullInput();
      // Set static field: static public System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode NullInput
      static void _set_NullInput(System::Diagnostics::Tracing::EventProvider::WriteEventErrorCode value);
      // static field const value: static public System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode TooManyArgs
      static constexpr const int TooManyArgs = 4;
      // Get static field: static public System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode TooManyArgs
      static System::Diagnostics::Tracing::EventProvider::WriteEventErrorCode _get_TooManyArgs();
      // Set static field: static public System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode TooManyArgs
      static void _set_TooManyArgs(System::Diagnostics::Tracing::EventProvider::WriteEventErrorCode value);
      // static field const value: static public System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode Other
      static constexpr const int Other = 5;
      // Get static field: static public System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode Other
      static System::Diagnostics::Tracing::EventProvider::WriteEventErrorCode _get_Other();
      // Set static field: static public System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode Other
      static void _set_Other(System::Diagnostics::Tracing::EventProvider::WriteEventErrorCode value);
      // Creating value type constructor for type: WriteEventErrorCode
      WriteEventErrorCode(int value_ = {}) : value{value_} {}
    }; // System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode
    // Get static field: static private System.Boolean m_setInformationMissing
    static bool _get_m_setInformationMissing();
    // Set static field: static private System.Boolean m_setInformationMissing
    static void _set_m_setInformationMissing(bool value);
    // private Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback m_etwCallback
    // Offset: 0x10
    Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EtwEnableCallback* m_etwCallback;
    // private System.Runtime.InteropServices.GCHandle m_thisGCHandle
    // Offset: 0x18
    System::Runtime::InteropServices::GCHandle m_thisGCHandle;
    // private System.Int64 m_regHandle
    // Offset: 0x20
    int64_t m_regHandle;
    // private System.Byte m_level
    // Offset: 0x28
    uint8_t m_level;
    // private System.Int64 m_anyKeywordMask
    // Offset: 0x30
    int64_t m_anyKeywordMask;
    // private System.Int64 m_allKeywordMask
    // Offset: 0x38
    int64_t m_allKeywordMask;
    // private System.Collections.Generic.List`1<System.Diagnostics.Tracing.EventProvider/SessionInfo> m_liveSessions
    // Offset: 0x40
    System::Collections::Generic::List_1<System::Diagnostics::Tracing::EventProvider::SessionInfo>* m_liveSessions;
    // private System.Boolean m_enabled
    // Offset: 0x48
    bool m_enabled;
    // private System.Guid m_providerId
    // Offset: 0x4C
    System::Guid m_providerId;
    // System.Boolean m_disposed
    // Offset: 0x5C
    bool m_disposed;
    // Get static field: static private System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode s_returnCode
    static System::Diagnostics::Tracing::EventProvider::WriteEventErrorCode _get_s_returnCode();
    // Set static field: static private System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode s_returnCode
    static void _set_s_returnCode(System::Diagnostics::Tracing::EventProvider::WriteEventErrorCode value);
    // Get static field: static private System.Int32[] nibblebits
    static ::Array<int>* _get_nibblebits();
    // Set static field: static private System.Int32[] nibblebits
    static void _set_nibblebits(::Array<int>* value);
    // System.Void Register(System.Guid providerGuid)
    // Offset: 0xC882D0
    void Register(System::Guid providerGuid);
    // System.Int32 SetInformation(Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_INFO_CLASS eventInfoClass, System.Void* data, System.Int32 dataSize)
    // Offset: 0xC884A4
    int SetInformation(Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EVENT_INFO_CLASS eventInfoClass, void* data, int dataSize);
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0xC88664
    void Dispose(bool disposing);
    // private System.Void Deregister()
    // Offset: 0xC887A8
    void Deregister();
    // static private System.Void EtwEnableCallBack(System.Guid sourceId, System.Int32 controlCode, System.Byte setLevel, System.Int64 anyKeyword, System.Int64 allKeyword, Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR* filterData, System.Void* callbackContext)
    // Offset: 0xC881E8
    static void EtwEnableCallBack(System::Guid& sourceId, int& controlCode, uint8_t& setLevel, int64_t& anyKeyword, int64_t& allKeyword, Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EVENT_FILTER_DESCRIPTOR*& filterData, void*& callbackContext);
    // private System.Void EtwEnableCallBackImpl(System.Int32 controlCode, System.Byte setLevel, System.Int64 anyKeyword, System.Int64 allKeyword, Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR* filterData)
    // Offset: 0xC8888C
    void EtwEnableCallBackImpl(int& controlCode, uint8_t& setLevel, int64_t& anyKeyword, int64_t& allKeyword, Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EVENT_FILTER_DESCRIPTOR*& filterData);
    // protected System.Void OnControllerCommand(System.Diagnostics.Tracing.ControllerCommand command, System.Collections.Generic.IDictionary`2<System.String,System.String> arguments, System.Int32 sessionId, System.Int32 etwSessionId)
    // Offset: 0xC892DC
    void OnControllerCommand(System::Diagnostics::Tracing::ControllerCommand command, System::Collections::Generic::IDictionary_2<::CsString*, ::CsString*>* arguments, int sessionId, int etwSessionId);
    // protected System.Diagnostics.Tracing.EventLevel get_Level()
    // Offset: 0xC892E0
    System::Diagnostics::Tracing::EventLevel get_Level();
    // protected System.Diagnostics.Tracing.EventKeywords get_MatchAnyKeyword()
    // Offset: 0xC892E8
    System::Diagnostics::Tracing::EventKeywords get_MatchAnyKeyword();
    // static private System.Int32 FindNull(System.Byte[] buffer, System.Int32 idx)
    // Offset: 0xC89288
    static int FindNull(::Array<uint8_t>* buffer, int idx);
    // private System.Collections.Generic.List`1<System.Tuple`2<System.Diagnostics.Tracing.EventProvider/SessionInfo,System.Boolean>> GetSessions()
    // Offset: 0xC88DAC
    System::Collections::Generic::List_1<System::Tuple_2<System::Diagnostics::Tracing::EventProvider::SessionInfo, bool>*>* GetSessions();
    // static private System.Void GetSessionInfoCallback(System.Int32 etwSessionId, System.Int64 matchAllKeywords, System.Collections.Generic.List`1<System.Diagnostics.Tracing.EventProvider/SessionInfo> sessionList)
    // Offset: 0xC89568
    static void GetSessionInfoCallback(int etwSessionId, int64_t matchAllKeywords, System::Collections::Generic::List_1<System::Diagnostics::Tracing::EventProvider::SessionInfo>*& sessionList);
    // private System.Void GetSessionInfo(System.Action`2<System.Int32,System.Int64> action)
    // Offset: 0xC892F8
    void GetSessionInfo(System::Action_2<int, int64_t>* action);
    // static private System.Int32 IndexOfSessionInList(System.Collections.Generic.List`1<System.Diagnostics.Tracing.EventProvider/SessionInfo> sessions, System.Int32 etwSessionId)
    // Offset: 0xC894CC
    static int IndexOfSessionInList(System::Collections::Generic::List_1<System::Diagnostics::Tracing::EventProvider::SessionInfo>* sessions, int etwSessionId);
    // private System.Boolean GetDataFromController(System.Int32 etwSessionId, Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR* filterData, System.Diagnostics.Tracing.ControllerCommand command, System.Byte[] data, System.Int32 dataStart)
    // Offset: 0xC89170
    bool GetDataFromController(int etwSessionId, Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EVENT_FILTER_DESCRIPTOR* filterData, System::Diagnostics::Tracing::ControllerCommand& command, ::Array<uint8_t>*& data, int& dataStart);
    // public System.Boolean IsEnabled()
    // Offset: 0xC89804
    bool IsEnabled();
    // public System.Boolean IsEnabled(System.Byte level, System.Int64 keywords)
    // Offset: 0xC8980C
    bool IsEnabled(uint8_t level, int64_t keywords);
    // static public System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode GetLastWriteEventError()
    // Offset: 0xC89850
    static System::Diagnostics::Tracing::EventProvider::WriteEventErrorCode GetLastWriteEventError();
    // static private System.Void SetLastError(System.Int32 error)
    // Offset: 0xC898B8
    static void SetLastError(int error);
    // static private System.Object EncodeObject(System.Object data, System.Diagnostics.Tracing.EventProvider/EventData* dataDescriptor, System.Byte* dataBuffer, System.UInt32 totalEventSize)
    // Offset: 0xC8996C
    static ::CsObject* EncodeObject(::CsObject*& data, System::Diagnostics::Tracing::EventProvider::EventData*& dataDescriptor, uint8_t*& dataBuffer, uint& totalEventSize);
    // System.Boolean WriteEvent(System.Diagnostics.Tracing.EventDescriptor eventDescriptor, System.Guid* activityID, System.Guid* childActivityID, System.Object[] eventPayload)
    // Offset: 0xC8A268
    bool WriteEvent(System::Diagnostics::Tracing::EventDescriptor& eventDescriptor, System::Guid* activityID, System::Guid* childActivityID, ::Array<::CsObject*>* eventPayload);
    // protected internal System.Boolean WriteEvent(System.Diagnostics.Tracing.EventDescriptor eventDescriptor, System.Guid* activityID, System.Guid* childActivityID, System.Int32 dataCount, System.IntPtr data)
    // Offset: 0xC8AD38
    bool WriteEvent(System::Diagnostics::Tracing::EventDescriptor& eventDescriptor, System::Guid* activityID, System::Guid* childActivityID, int dataCount, System::IntPtr data);
    // System.Boolean WriteEventRaw(System.Diagnostics.Tracing.EventDescriptor eventDescriptor, System.Guid* activityID, System.Guid* relatedActivityID, System.Int32 dataCount, System.IntPtr data)
    // Offset: 0xC8AE10
    bool WriteEventRaw(System::Diagnostics::Tracing::EventDescriptor& eventDescriptor, System::Guid* activityID, System::Guid* relatedActivityID, int dataCount, System::IntPtr data);
    // private System.UInt32 EventUnregister()
    // Offset: 0xC88860
    uint EventUnregister();
    // static private System.Int32 bitcount(System.UInt32 n)
    // Offset: 0xC8971C
    static int bitcount(uint n);
    // static private System.Int32 bitindex(System.UInt32 n)
    // Offset: 0xC897DC
    static int bitindex(uint n);
    // static private System.Void .cctor()
    // Offset: 0xC8AEE8
    static void _cctor();
    // System.Void .ctor()
    // Offset: 0xC882C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static EventProvider* New_ctor();
    // public System.Void Dispose()
    // Offset: 0xC885E8
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // protected override System.Void Finalize()
    // Offset: 0xC887EC
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.Diagnostics.Tracing.EventProvider
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventProvider*, "System.Diagnostics.Tracing", "EventProvider");
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventProvider::SessionInfo, "System.Diagnostics.Tracing", "EventProvider/SessionInfo");
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventProvider::WriteEventErrorCode, "System.Diagnostics.Tracing", "EventProvider/WriteEventErrorCode");
#pragma pack(pop)
