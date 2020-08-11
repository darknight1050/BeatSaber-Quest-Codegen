// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Sockets.SocketException
#include "System/Net/Sockets/SocketException.hpp"
// Including type: System.Net.EndPoint
#include "System/Net/EndPoint.hpp"
// Including type: System.Net.Sockets.SocketError
#include "System/Net/Sockets/SocketError.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.Sockets.SocketException.WSAGetLastError_internal
int System::Net::Sockets::SocketException::WSAGetLastError_internal() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Net.Sockets", "SocketException", "WSAGetLastError_internal"));
}
// Autogenerated method: System.Net.Sockets.SocketException..ctor
System::Net::Sockets::SocketException* System::Net::Sockets::SocketException::New_ctor(System::Net::Sockets::SocketError socketError) {
  return (SocketException*)THROW_UNLESS(il2cpp_utils::New("System.Net.Sockets", "SocketException", socketError));
}
// Autogenerated method: System.Net.Sockets.SocketException.get_SocketErrorCode
System::Net::Sockets::SocketError System::Net::Sockets::SocketException::get_SocketErrorCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::Sockets::SocketError>(this, "get_SocketErrorCode"));
}
// Autogenerated method: System.Net.Sockets.SocketException..ctor
System::Net::Sockets::SocketException* System::Net::Sockets::SocketException::New_ctor() {
  return (SocketException*)THROW_UNLESS(il2cpp_utils::New("System.Net.Sockets", "SocketException"));
}
// Autogenerated method: System.Net.Sockets.SocketException..ctor
System::Net::Sockets::SocketException* System::Net::Sockets::SocketException::New_ctor(int error, ::CsString* message) {
  return (SocketException*)THROW_UNLESS(il2cpp_utils::New("System.Net.Sockets", "SocketException", error, message));
}
// Autogenerated method: System.Net.Sockets.SocketException..ctor
System::Net::Sockets::SocketException* System::Net::Sockets::SocketException::New_ctor(int errorCode) {
  return (SocketException*)THROW_UNLESS(il2cpp_utils::New("System.Net.Sockets", "SocketException", errorCode));
}
// Autogenerated method: System.Net.Sockets.SocketException..ctor
System::Net::Sockets::SocketException* System::Net::Sockets::SocketException::New_ctor(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) {
  return (SocketException*)THROW_UNLESS(il2cpp_utils::New("System.Net.Sockets", "SocketException", serializationInfo, streamingContext));
}
// Autogenerated method: System.Net.Sockets.SocketException.get_Message
::CsString* System::Net::Sockets::SocketException::get_Message() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_Message"));
}
