// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Exception
#include "System/Exception.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: System::Runtime::ExceptionServices
namespace System::Runtime::ExceptionServices {
  // Forward declaring type: ExceptionDispatchInfo
  class ExceptionDispatchInfo;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.AggregateException
  class AggregateException : public System::Exception {
    public:
    // private System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> m_innerExceptions
    // Offset: 0x88
    System::Collections::ObjectModel::ReadOnlyCollection_1<System::Exception*>* m_innerExceptions;
    // public System.Void .ctor(System.Collections.Generic.IEnumerable`1<System.Exception> innerExceptions)
    // Offset: 0x101906C
    static AggregateException* New_ctor(System::Collections::Generic::IEnumerable_1<System::Exception*>* innerExceptions);
    // public System.Void .ctor(System.Exception[] innerExceptions)
    // Offset: 0x101918C
    static AggregateException* New_ctor(::Array<System::Exception*>* innerExceptions);
    // public System.Void .ctor(System.String message, System.Collections.Generic.IEnumerable`1<System.Exception> innerExceptions)
    // Offset: 0x10190D8
    static AggregateException* New_ctor(::Il2CppString* message, System::Collections::Generic::IEnumerable_1<System::Exception*>* innerExceptions);
    // public System.Void .ctor(System.String message, System.Exception[] innerExceptions)
    // Offset: 0x10191F8
    static AggregateException* New_ctor(::Il2CppString* message, ::Array<System::Exception*>* innerExceptions);
    // private System.Void .ctor(System.String message, System.Collections.Generic.IList`1<System.Exception> innerExceptions)
    // Offset: 0x10191FC
    static AggregateException* New_ctor(::Il2CppString* message, System::Collections::Generic::IList_1<System::Exception*>* innerExceptions);
    // System.Void .ctor(System.Collections.Generic.IEnumerable`1<System.Runtime.ExceptionServices.ExceptionDispatchInfo> innerExceptionInfos)
    // Offset: 0x10195D0
    static AggregateException* New_ctor(System::Collections::Generic::IEnumerable_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos);
    // System.Void .ctor(System.String message, System.Collections.Generic.IEnumerable`1<System.Runtime.ExceptionServices.ExceptionDispatchInfo> innerExceptionInfos)
    // Offset: 0x101963C
    static AggregateException* New_ctor(::Il2CppString* message, System::Collections::Generic::IEnumerable_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos);
    // private System.Void .ctor(System.String message, System.Collections.Generic.IList`1<System.Runtime.ExceptionServices.ExceptionDispatchInfo> innerExceptionInfos)
    // Offset: 0x10196F0
    static AggregateException* New_ctor(::Il2CppString* message, System::Collections::Generic::IList_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos);
    // public System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> get_InnerExceptions()
    // Offset: 0x1019E4C
    System::Collections::ObjectModel::ReadOnlyCollection_1<System::Exception*>* get_InnerExceptions();
    // public System.AggregateException Flatten()
    // Offset: 0x1019E54
    System::AggregateException* Flatten();
    // public System.Void .ctor()
    // Offset: 0x1018F88
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static AggregateException* New_ctor();
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1019B2C
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static AggregateException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1019CEC
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.String ToString()
    // Offset: 0x101A0F4
    // Implemented from: System.Exception
    // Base method: System.String Exception::ToString()
    ::Il2CppString* ToString();
  }; // System.AggregateException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::AggregateException*, "System", "AggregateException");
#pragma pack(pop)
