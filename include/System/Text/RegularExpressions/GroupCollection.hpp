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
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Match
  class Match;
  // Forward declaring type: Group
  class Group;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x28
  // Autogenerated type: System.Text.RegularExpressions.GroupCollection
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: D44E10
  class GroupCollection : public ::Il2CppObject/*, public System::Collections::ICollection*/ {
    public:
    // System.Text.RegularExpressions.Match _match
    // Size: 0x8
    // Offset: 0x10
    System::Text::RegularExpressions::Match* match;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::Match*) == 0x8);
    // System.Collections.Hashtable _captureMap
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Hashtable* captureMap;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // System.Text.RegularExpressions.Group[] _groups
    // Size: 0x8
    // Offset: 0x20
    ::Array<System::Text::RegularExpressions::Group*>* groups;
    // Field size check
    static_assert(sizeof(::Array<System::Text::RegularExpressions::Group*>*) == 0x8);
    // Creating value type constructor for type: GroupCollection
    GroupCollection(System::Text::RegularExpressions::Match* match_ = {}, System::Collections::Hashtable* captureMap_ = {}, ::Array<System::Text::RegularExpressions::Group*>* groups_ = {}) noexcept : match{match_}, captureMap{captureMap_}, groups{groups_} {}
    // Creating interface conversion operator: operator System::Collections::ICollection
    operator System::Collections::ICollection() noexcept {
      return *reinterpret_cast<System::Collections::ICollection*>(this);
    }
    // System.Void .ctor(System.Text.RegularExpressions.Match match, System.Collections.Hashtable caps)
    // Offset: 0x146D014
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GroupCollection* New_ctor(System::Text::RegularExpressions::Match* match, System::Collections::Hashtable* caps) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::GroupCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GroupCollection*, creationType>(match, caps)));
    }
    // public System.Text.RegularExpressions.Group get_Item(System.Int32 groupnum)
    // Offset: 0x146D08C
    System::Text::RegularExpressions::Group* get_Item(int groupnum);
    // System.Text.RegularExpressions.Group GetGroup(System.Int32 groupnum)
    // Offset: 0x146D090
    System::Text::RegularExpressions::Group* GetGroup(int groupnum);
    // System.Text.RegularExpressions.Group GetGroupImpl(System.Int32 groupnum)
    // Offset: 0x146D1BC
    System::Text::RegularExpressions::Group* GetGroupImpl(int groupnum);
    // public System.Int32 get_Count()
    // Offset: 0x146D064
    // Implemented from: System.Collections.ICollection
    // Base method: System.Int32 ICollection::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count();
    // public System.Void CopyTo(System.Array array, System.Int32 arrayIndex)
    // Offset: 0x146D52C
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 arrayIndex)
    void CopyTo(System::Array* array, int arrayIndex);
    // Creating proxy method: System_Collections_ICollection_CopyTo
    // Maps to method: CopyTo
    void System_Collections_ICollection_CopyTo(System::Array* array, int arrayIndex);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x146D610
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IEnumerable_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // System.Void .ctor()
    // Offset: 0x146D6C4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GroupCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::GroupCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GroupCollection*, creationType>()));
    }
  }; // System.Text.RegularExpressions.GroupCollection
  static check_size<sizeof(GroupCollection), 32 + sizeof(::Array<System::Text::RegularExpressions::Group*>*)> __System_Text_RegularExpressions_GroupCollectionSizeCheck;
  static_assert(sizeof(GroupCollection) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::GroupCollection*, "System.Text.RegularExpressions", "GroupCollection");
#pragma pack(pop)
