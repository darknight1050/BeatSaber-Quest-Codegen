// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
// Including type: System.Runtime.Serialization.Formatters.FormatterTypeStyle
#include "System/Runtime/Serialization/Formatters/FormatterTypeStyle.hpp"
// Including type: System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "System/Runtime/Serialization/Formatters/FormatterAssemblyStyle.hpp"
// Including type: System.Runtime.Serialization.Formatters.TypeFilterLevel
#include "System/Runtime/Serialization/Formatters/TypeFilterLevel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: ISurrogateSelector
  class ISurrogateSelector;
  // Forward declaring type: SerializationBinder
  class SerializationBinder;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: TypeInformation
  class TypeInformation;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: HeaderHandler
  class HeaderHandler;
  // Forward declaring type: Header
  class Header;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
  // [ComVisibleAttribute] Offset: D7E050
  class BinaryFormatter : public ::Il2CppObject {
    public:
    // System.Runtime.Serialization.ISurrogateSelector m_surrogates
    // Size: 0x8
    // Offset: 0x10
    System::Runtime::Serialization::ISurrogateSelector* m_surrogates;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::ISurrogateSelector*) == 0x8);
    // System.Runtime.Serialization.StreamingContext m_context
    // Size: 0xC
    // Offset: 0x18
    System::Runtime::Serialization::StreamingContext m_context;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::StreamingContext) == 0xC);
    // Padding between fields: m_context and: m_binder
    char __padding1[0x4] = {};
    // System.Runtime.Serialization.SerializationBinder m_binder
    // Size: 0x8
    // Offset: 0x28
    System::Runtime::Serialization::SerializationBinder* m_binder;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::SerializationBinder*) == 0x8);
    // System.Runtime.Serialization.Formatters.FormatterTypeStyle m_typeFormat
    // Size: 0x4
    // Offset: 0x30
    System::Runtime::Serialization::Formatters::FormatterTypeStyle m_typeFormat;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::FormatterTypeStyle) == 0x4);
    // System.Runtime.Serialization.Formatters.FormatterAssemblyStyle m_assemblyFormat
    // Size: 0x4
    // Offset: 0x34
    System::Runtime::Serialization::Formatters::FormatterAssemblyStyle m_assemblyFormat;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::FormatterAssemblyStyle) == 0x4);
    // System.Runtime.Serialization.Formatters.TypeFilterLevel m_securityLevel
    // Size: 0x4
    // Offset: 0x38
    System::Runtime::Serialization::Formatters::TypeFilterLevel m_securityLevel;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::TypeFilterLevel) == 0x4);
    // Padding between fields: m_securityLevel and: m_crossAppDomainArray
    char __padding5[0x4] = {};
    // System.Object[] m_crossAppDomainArray
    // Size: 0x8
    // Offset: 0x40
    ::Array<::Il2CppObject*>* m_crossAppDomainArray;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // Creating value type constructor for type: BinaryFormatter
    BinaryFormatter(System::Runtime::Serialization::ISurrogateSelector* m_surrogates_ = {}, System::Runtime::Serialization::StreamingContext m_context_ = {}, System::Runtime::Serialization::SerializationBinder* m_binder_ = {}, System::Runtime::Serialization::Formatters::FormatterTypeStyle m_typeFormat_ = {}, System::Runtime::Serialization::Formatters::FormatterAssemblyStyle m_assemblyFormat_ = {}, System::Runtime::Serialization::Formatters::TypeFilterLevel m_securityLevel_ = {}, ::Array<::Il2CppObject*>* m_crossAppDomainArray_ = {}) noexcept : m_surrogates{m_surrogates_}, m_context{m_context_}, m_binder{m_binder_}, m_typeFormat{m_typeFormat_}, m_assemblyFormat{m_assemblyFormat_}, m_securityLevel{m_securityLevel_}, m_crossAppDomainArray{m_crossAppDomainArray_} {}
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation> typeNameCache
    static System::Collections::Generic::Dictionary_2<System::Type*, System::Runtime::Serialization::Formatters::Binary::TypeInformation*>* _get_typeNameCache();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation> typeNameCache
    static void _set_typeNameCache(System::Collections::Generic::Dictionary_2<System::Type*, System::Runtime::Serialization::Formatters::Binary::TypeInformation*>* value);
    // public System.Void set_AssemblyFormat(System.Runtime.Serialization.Formatters.FormatterAssemblyStyle value)
    // Offset: 0x15EF360
    void set_AssemblyFormat(System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value);
    // public System.Void set_SurrogateSelector(System.Runtime.Serialization.ISurrogateSelector value)
    // Offset: 0x15EF368
    void set_SurrogateSelector(System::Runtime::Serialization::ISurrogateSelector* value);
    // public System.Void set_Binder(System.Runtime.Serialization.SerializationBinder value)
    // Offset: 0x15EF370
    void set_Binder(System::Runtime::Serialization::SerializationBinder* value);
    // public System.Void .ctor(System.Runtime.Serialization.ISurrogateSelector selector, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x15EF3D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryFormatter* New_ctor(System::Runtime::Serialization::ISurrogateSelector* selector, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryFormatter*, creationType>(selector, context)));
    }
    // public System.Object Deserialize(System.IO.Stream serializationStream)
    // Offset: 0x15EF424
    ::Il2CppObject* Deserialize(System::IO::Stream* serializationStream);
    // System.Object Deserialize(System.IO.Stream serializationStream, System.Runtime.Remoting.Messaging.HeaderHandler handler, System.Boolean fCheck)
    // Offset: 0x15EF438
    ::Il2CppObject* Deserialize(System::IO::Stream* serializationStream, System::Runtime::Remoting::Messaging::HeaderHandler* handler, bool fCheck);
    // public System.Object Deserialize(System.IO.Stream serializationStream, System.Runtime.Remoting.Messaging.HeaderHandler handler)
    // Offset: 0x15EF430
    ::Il2CppObject* Deserialize(System::IO::Stream* serializationStream, System::Runtime::Remoting::Messaging::HeaderHandler* handler);
    // public System.Void Serialize(System.IO.Stream serializationStream, System.Object graph)
    // Offset: 0x15EFBAC
    void Serialize(System::IO::Stream* serializationStream, ::Il2CppObject* graph);
    // public System.Void Serialize(System.IO.Stream serializationStream, System.Object graph, System.Runtime.Remoting.Messaging.Header[] headers)
    // Offset: 0x15EFBB8
    void Serialize(System::IO::Stream* serializationStream, ::Il2CppObject* graph, ::Array<System::Runtime::Remoting::Messaging::Header*>* headers);
    // System.Void Serialize(System.IO.Stream serializationStream, System.Object graph, System.Runtime.Remoting.Messaging.Header[] headers, System.Boolean fCheck)
    // Offset: 0x15EFBC0
    void Serialize(System::IO::Stream* serializationStream, ::Il2CppObject* graph, ::Array<System::Runtime::Remoting::Messaging::Header*>* headers, bool fCheck);
    // static System.Runtime.Serialization.Formatters.Binary.TypeInformation GetTypeInformation(System.Type type)
    // Offset: 0x15F01C0
    static System::Runtime::Serialization::Formatters::Binary::TypeInformation* GetTypeInformation(System::Type* type);
    // static private System.Void .cctor()
    // Offset: 0x15F0414
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x15EF378
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryFormatter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::BinaryFormatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryFormatter*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
  #pragma pack(pop)
  static check_size<sizeof(BinaryFormatter), 64 + sizeof(::Array<::Il2CppObject*>*)> __System_Runtime_Serialization_Formatters_Binary_BinaryFormatterSizeCheck;
  static_assert(sizeof(BinaryFormatter) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*, "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter");
