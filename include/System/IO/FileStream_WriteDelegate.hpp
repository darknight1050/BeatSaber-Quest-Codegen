// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.FileStream
#include "System/IO/FileStream.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x70
  // Autogenerated type: System.IO.FileStream/WriteDelegate
  // [] Offset: FFFFFFFF
  class FileStream::WriteDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: WriteDelegate
    WriteDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x143C778
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileStream::WriteDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileStream::WriteDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileStream::WriteDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x143D9F4
    void Invoke(::Array<uint8_t>* buffer, int offset, int count);
    // public System.IAsyncResult BeginInvoke(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object object)
    // Offset: 0x143C78C
    System::IAsyncResult* BeginInvoke(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x143C990
    void EndInvoke(System::IAsyncResult* result);
  }; // System.IO.FileStream/WriteDelegate
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileStream::WriteDelegate*, "System.IO", "FileStream/WriteDelegate");
#pragma pack(pop)
