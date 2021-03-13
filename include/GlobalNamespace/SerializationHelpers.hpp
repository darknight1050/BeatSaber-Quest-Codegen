// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SerializationHelpers
  // [] Offset: FFFFFFFF
  class SerializationHelpers : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SerializationHelpers
    SerializationHelpers() noexcept {}
    // static public T DeserializeData(System.Byte[] data)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T DeserializeData(::Array<uint8_t>* data) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SerializationHelpers::DeserializeData");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "SerializationHelpers", "DeserializeData", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(data)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, data);
    }
    // static public System.Byte[] SerializeObject(T serializableObject)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<uint8_t>* SerializeObject(T serializableObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SerializationHelpers::SerializeObject");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "SerializationHelpers", "SerializeObject", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(serializableObject)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, serializableObject);
    }
    // static public T DeserializeDataFromPlayerPrefs(System.String key)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T DeserializeDataFromPlayerPrefs(::Il2CppString* key) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SerializationHelpers::DeserializeDataFromPlayerPrefs");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "SerializationHelpers", "DeserializeDataFromPlayerPrefs", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(key)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, key);
    }
    // static public System.Void SerializeObjectIntoPlayerPrefs(System.String key, T serializableObject)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void SerializeObjectIntoPlayerPrefs(::Il2CppString* key, T serializableObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SerializationHelpers::SerializeObjectIntoPlayerPrefs");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "SerializationHelpers", "SerializeObjectIntoPlayerPrefs", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(key, serializableObject)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, key, serializableObject);
    }
    // static public T DeserializeDataFromFile(System.String filePath)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T DeserializeDataFromFile(::Il2CppString* filePath) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SerializationHelpers::DeserializeDataFromFile");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "SerializationHelpers", "DeserializeDataFromFile", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(filePath)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, filePath);
    }
    // static public System.Void SerializeObjectToFile(System.String filePath, T serializableObject)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void SerializeObjectToFile(::Il2CppString* filePath, T serializableObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SerializationHelpers::SerializeObjectToFile");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "SerializationHelpers", "SerializeObjectToFile", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(filePath, serializableObject)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, filePath, serializableObject);
    }
    // public System.Void .ctor()
    // Offset: 0x211D62C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationHelpers* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SerializationHelpers::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationHelpers*, creationType>()));
    }
  }; // SerializationHelpers
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SerializationHelpers*, "", "SerializationHelpers");
