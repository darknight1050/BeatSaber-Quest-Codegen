// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ComponentModel.Win32Exception
#include "System/ComponentModel/Win32Exception.hpp"
// Including type: System.Net.Sockets.SocketError
#include "System/Net/Sockets/SocketError.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: EndPoint
  class EndPoint;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0x98
  // Autogenerated type: System.Net.Sockets.SocketException
  // [] Offset: FFFFFFFF
  class SocketException : public System::ComponentModel::Win32Exception {
    public:
    // Writing base type padding for base size: 0x8C to desired offset: 0x90
    char ___base_padding[0x4] = {};
    // private System.Net.EndPoint m_EndPoint
    // Size: 0x8
    // Offset: 0x90
    System::Net::EndPoint* m_EndPoint;
    // Field size check
    static_assert(sizeof(System::Net::EndPoint*) == 0x8);
    // Creating value type constructor for type: SocketException
    SocketException(System::Net::EndPoint* m_EndPoint_ = {}) noexcept : m_EndPoint{m_EndPoint_} {}
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // static private System.Int32 WSAGetLastError_internal()
    // Offset: 0x1214E34
    static int WSAGetLastError_internal();
    // System.Void .ctor(System.Net.Sockets.SocketError socketError)
    // Offset: 0x1213E18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SocketException* New_ctor(System::Net::Sockets::SocketError socketError) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Sockets::SocketException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SocketException*, creationType>(socketError)));
    }
    // public System.Net.Sockets.SocketError get_SocketErrorCode()
    // Offset: 0x1212478
    System::Net::Sockets::SocketError get_SocketErrorCode();
    // public System.Void .ctor()
    // Offset: 0x1214E38
    // Implemented from: System.ComponentModel.Win32Exception
    // Base method: System.Void Win32Exception::.ctor()
    // Base method: System.Void ExternalException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SocketException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Sockets::SocketException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SocketException*, creationType>()));
    }
    // System.Void .ctor(System.Int32 error, System.String message)
    // Offset: 0x1214EB0
    // Implemented from: System.ComponentModel.Win32Exception
    // Base method: System.Void Win32Exception::.ctor(System.Int32 error, System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SocketException* New_ctor(int error, ::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Sockets::SocketException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SocketException*, creationType>(error, message)));
    }
    // public System.Void .ctor(System.Int32 errorCode)
    // Offset: 0x1212888
    // Implemented from: System.ComponentModel.Win32Exception
    // Base method: System.Void Win32Exception::.ctor(System.Int32 errorCode)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SocketException* New_ctor(int errorCode) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Sockets::SocketException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SocketException*, creationType>(errorCode)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x1214F30
    // Implemented from: System.ComponentModel.Win32Exception
    // Base method: System.Void Win32Exception::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Base method: System.Void ExternalException::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SocketException* New_ctor(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Sockets::SocketException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SocketException*, creationType>(serializationInfo, streamingContext)));
    }
    // public override System.String get_Message()
    // Offset: 0x1214FC0
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::Il2CppString* get_Message();
  }; // System.Net.Sockets.SocketException
  static check_size<sizeof(SocketException), 144 + sizeof(System::Net::EndPoint*)> __System_Net_Sockets_SocketExceptionSizeCheck;
  static_assert(sizeof(SocketException) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SocketException*, "System.Net.Sockets", "SocketException");
#pragma pack(pop)
