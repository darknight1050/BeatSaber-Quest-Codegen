// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509ChainElement
  class X509ChainElement;
  // Forward declaring type: X509ChainElementEnumerator
  class X509ChainElementEnumerator;
  // Forward declaring type: X509Certificate2
  class X509Certificate2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x18
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509ChainElementCollection
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: D455FC
  class X509ChainElementCollection : public ::Il2CppObject/*, public System::Collections::ICollection*/ {
    public:
    // private System.Collections.ArrayList _list
    // Size: 0x8
    // Offset: 0x10
    System::Collections::ArrayList* list;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // Creating value type constructor for type: X509ChainElementCollection
    X509ChainElementCollection(System::Collections::ArrayList* list_ = {}) noexcept : list{list_} {}
    // Creating interface conversion operator: operator System::Collections::ICollection
    operator System::Collections::ICollection() noexcept {
      return *reinterpret_cast<System::Collections::ICollection*>(this);
    }
    // Creating conversion operator: operator System::Collections::ArrayList*
    constexpr operator System::Collections::ArrayList*() const noexcept {
      return list;
    }
    // public System.Security.Cryptography.X509Certificates.X509ChainElement get_Item(System.Int32 index)
    // Offset: 0x1465E34
    System::Security::Cryptography::X509Certificates::X509ChainElement* get_Item(int index);
    // public System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator GetEnumerator()
    // Offset: 0x1465F00
    System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator* GetEnumerator();
    // System.Void Add(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate)
    // Offset: 0x146609C
    void Add(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);
    // System.Void Clear()
    // Offset: 0x1466124
    void Clear();
    // System.Boolean Contains(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate)
    // Offset: 0x1466148
    bool Contains(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);
    // System.Void .ctor()
    // Offset: 0x1465D9C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509ChainElementCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509ChainElementCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509ChainElementCollection*, creationType>()));
    }
    // public System.Int32 get_Count()
    // Offset: 0x1465E10
    // Implemented from: System.Collections.ICollection
    // Base method: System.Int32 ICollection::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count();
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x1465EDC
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 index)
    void System_Collections_ICollection_CopyTo(System::Array* array, int index);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1466038
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.Security.Cryptography.X509Certificates.X509ChainElementCollection
  static check_size<sizeof(X509ChainElementCollection), 16 + sizeof(System::Collections::ArrayList*)> __System_Security_Cryptography_X509Certificates_X509ChainElementCollectionSizeCheck;
  static_assert(sizeof(X509ChainElementCollection) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509ChainElementCollection*, "System.Security.Cryptography.X509Certificates", "X509ChainElementCollection");
#pragma pack(pop)
