// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.ICollection`1
#include "System/Collections/Generic/ICollection_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: UnicastIPAddressInformation
  class UnicastIPAddressInformation;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: Collection`1<T>
  template<typename T>
  class Collection_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.UnicastIPAddressInformationCollection
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: CA0A74
  class UnicastIPAddressInformationCollection : public ::Il2CppObject/*, public System::Collections::Generic::ICollection_1<System::Net::NetworkInformation::UnicastIPAddressInformation*>*/ {
    public:
    // private System.Collections.ObjectModel.Collection`1<System.Net.NetworkInformation.UnicastIPAddressInformation> addresses
    // Size: 0x8
    // Offset: 0x10
    System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::UnicastIPAddressInformation*>* addresses;
    // Field size check
    static_assert(sizeof(System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::UnicastIPAddressInformation*>*) == 0x8);
    // Creating value type constructor for type: UnicastIPAddressInformationCollection
    UnicastIPAddressInformationCollection(System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::UnicastIPAddressInformation*>* addresses_ = {}) noexcept : addresses{addresses_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::ICollection_1<System::Net::NetworkInformation::UnicastIPAddressInformation*>
    operator System::Collections::Generic::ICollection_1<System::Net::NetworkInformation::UnicastIPAddressInformation*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::ICollection_1<System::Net::NetworkInformation::UnicastIPAddressInformation*>*>(this);
    }
    // Creating conversion operator: operator System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::UnicastIPAddressInformation*>*
    constexpr operator System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::UnicastIPAddressInformation*>*() const noexcept {
      return addresses;
    }
    // public System.Void CopyTo(System.Net.NetworkInformation.UnicastIPAddressInformation[] array, System.Int32 offset)
    // Offset: 0x1329504
    void CopyTo_NEW(::Array<System::Net::NetworkInformation::UnicastIPAddressInformation*>* array, int offset);
    // public System.Int32 get_Count()
    // Offset: 0x1329574
    int get_Count_NEW();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x13295CC
    bool get_IsReadOnly_NEW();
    // public System.Void Add(System.Net.NetworkInformation.UnicastIPAddressInformation address)
    // Offset: 0x13295D4
    void Add_NEW(System::Net::NetworkInformation::UnicastIPAddressInformation* address);
    // System.Void InternalAdd(System.Net.NetworkInformation.UnicastIPAddressInformation address)
    // Offset: 0x1329654
    void InternalAdd(System::Net::NetworkInformation::UnicastIPAddressInformation* address);
    // public System.Boolean Contains(System.Net.NetworkInformation.UnicastIPAddressInformation address)
    // Offset: 0x13296BC
    bool Contains_NEW(System::Net::NetworkInformation::UnicastIPAddressInformation* address);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1329724
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator_NEW();
    // public System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation> GetEnumerator()
    // Offset: 0x1329734
    System::Collections::Generic::IEnumerator_1<System::Net::NetworkInformation::UnicastIPAddressInformation*>* GetEnumerator_NEW();
    // public System.Boolean Remove(System.Net.NetworkInformation.UnicastIPAddressInformation address)
    // Offset: 0x132978C
    bool Remove_NEW(System::Net::NetworkInformation::UnicastIPAddressInformation* address);
    // public System.Void Clear()
    // Offset: 0x132980C
    void Clear_NEW();
    // protected internal System.Void .ctor()
    // Offset: 0x1329494
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnicastIPAddressInformationCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::UnicastIPAddressInformationCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnicastIPAddressInformationCollection*, creationType>()));
    }
  }; // System.Net.NetworkInformation.UnicastIPAddressInformationCollection
  #pragma pack(pop)
  static check_size<sizeof(UnicastIPAddressInformationCollection), 16 + sizeof(System::Collections::ObjectModel::Collection_1<System::Net::NetworkInformation::UnicastIPAddressInformation*>*)> __System_Net_NetworkInformation_UnicastIPAddressInformationCollectionSizeCheck;
  static_assert(sizeof(UnicastIPAddressInformationCollection) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::UnicastIPAddressInformationCollection*, "System.Net.NetworkInformation", "UnicastIPAddressInformationCollection");
