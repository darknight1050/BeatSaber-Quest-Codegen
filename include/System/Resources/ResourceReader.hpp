// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Resources.IResourceReader
#include "System/Resources/IResourceReader.hpp"
// Including type: System.Resources.ResourceLocator
#include "System/Resources/ResourceLocator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Resources
namespace System::Resources {
  // Forward declaring type: ResourceTypeCode
  struct ResourceTypeCode;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: BinaryReader
  class BinaryReader;
  // Forward declaring type: UnmanagedMemoryStream
  class UnmanagedMemoryStream;
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: BinaryFormatter
  class BinaryFormatter;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
}
// Completed forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Autogenerated type: System.Resources.ResourceReader
  class ResourceReader : public System::Resources::IResourceReader, public ::Il2CppObject {
    public:
    // Nested type: System::Resources::ResourceReader::ResourceEnumerator
    class ResourceEnumerator;
    // private System.IO.BinaryReader _store
    // Offset: 0x10
    System::IO::BinaryReader* store;
    // System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> _resCache
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceLocator>* resCache;
    // private System.Int64 _nameSectionOffset
    // Offset: 0x20
    int64_t nameSectionOffset;
    // private System.Int64 _dataSectionOffset
    // Offset: 0x28
    int64_t dataSectionOffset;
    // private System.Int32[] _nameHashes
    // Offset: 0x30
    ::Array<int>* nameHashes;
    // private System.Int32* _nameHashesPtr
    // Offset: 0x38
    int* nameHashesPtr;
    // private System.Int32[] _namePositions
    // Offset: 0x40
    ::Array<int>* namePositions;
    // private System.Int32* _namePositionsPtr
    // Offset: 0x48
    int* namePositionsPtr;
    // private System.RuntimeType[] _typeTable
    // Offset: 0x50
    ::Array<System::RuntimeType*>* typeTable;
    // private System.Int32[] _typeNamePositions
    // Offset: 0x58
    ::Array<int>* typeNamePositions;
    // private System.Runtime.Serialization.Formatters.Binary.BinaryFormatter _objFormatter
    // Offset: 0x60
    System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* objFormatter;
    // private System.Int32 _numResources
    // Offset: 0x68
    int numResources;
    // private System.IO.UnmanagedMemoryStream _ums
    // Offset: 0x70
    System::IO::UnmanagedMemoryStream* ums;
    // private System.Int32 _version
    // Offset: 0x78
    int version;
    // System.Void .ctor(System.IO.Stream stream, System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> resCache)
    // Offset: 0x10BD794
    static ResourceReader* New_ctor(System::IO::Stream* stream, System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceLocator>* resCache);
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0x10BDA24
    void Dispose(bool disposing);
    // static System.Int32 ReadUnalignedI4(System.Int32* p)
    // Offset: 0x10BDAE0
    static int ReadUnalignedI4(int* p);
    // private System.Void SkipString()
    // Offset: 0x10BDAE8
    void SkipString();
    // private System.Int32 GetNameHash(System.Int32 index)
    // Offset: 0x10BDBC0
    int GetNameHash(int index);
    // private System.Int32 GetNamePosition(System.Int32 index)
    // Offset: 0x10BDC10
    int GetNamePosition(int index);
    // System.Resources.ResourceReader/ResourceEnumerator GetEnumeratorInternal()
    // Offset: 0x10BDE88
    System::Resources::ResourceReader::ResourceEnumerator* GetEnumeratorInternal();
    // System.Int32 FindPosForResource(System.String name)
    // Offset: 0x10BDF08
    int FindPosForResource(::Il2CppString* name);
    // private System.Boolean CompareStringEqualsName(System.String name)
    // Offset: 0x10BE2EC
    bool CompareStringEqualsName(::Il2CppString* name);
    // private System.String AllocateStringForNameIndex(System.Int32 index, System.Int32 dataOffset)
    // Offset: 0x10BE504
    ::Il2CppString* AllocateStringForNameIndex(int index, int& dataOffset);
    // private System.Object GetValueForNameIndex(System.Int32 index)
    // Offset: 0x10BEDF4
    ::Il2CppObject* GetValueForNameIndex(int index);
    // System.String LoadString(System.Int32 pos)
    // Offset: 0x10BF348
    ::Il2CppString* LoadString(int pos);
    // System.Object LoadObject(System.Int32 pos)
    // Offset: 0x10BF974
    ::Il2CppObject* LoadObject(int pos);
    // System.Object LoadObject(System.Int32 pos, System.Resources.ResourceTypeCode typeCode)
    // Offset: 0x10BF9AC
    ::Il2CppObject* LoadObject(int pos, System::Resources::ResourceTypeCode& typeCode);
    // System.Object LoadObjectV1(System.Int32 pos)
    // Offset: 0x10BF0D8
    ::Il2CppObject* LoadObjectV1(int pos);
    // private System.Object _LoadObjectV1(System.Int32 pos)
    // Offset: 0x10BFA4C
    ::Il2CppObject* _LoadObjectV1(int pos);
    // System.Object LoadObjectV2(System.Int32 pos, System.Resources.ResourceTypeCode typeCode)
    // Offset: 0x10BF20C
    ::Il2CppObject* LoadObjectV2(int pos, System::Resources::ResourceTypeCode& typeCode);
    // private System.Object _LoadObjectV2(System.Int32 pos, System.Resources.ResourceTypeCode typeCode)
    // Offset: 0x10C039C
    ::Il2CppObject* _LoadObjectV2(int pos, System::Resources::ResourceTypeCode& typeCode);
    // private System.Object DeserializeObject(System.Int32 typeIndex)
    // Offset: 0x10C01B4
    ::Il2CppObject* DeserializeObject(int typeIndex);
    // private System.Void ReadResources()
    // Offset: 0x10BD8A0
    void ReadResources();
    // private System.Void _ReadResources()
    // Offset: 0x10C0A04
    void _ReadResources();
    // private System.RuntimeType FindType(System.Int32 typeIndex)
    // Offset: 0x10BF604
    System::RuntimeType* FindType(int typeIndex);
    // public System.Void Close()
    // Offset: 0x10BDA1C
    // Implemented from: System.Resources.IResourceReader
    // Base method: System.Void IResourceReader::Close()
    void Close();
    // public System.Void Dispose()
    // Offset: 0x10BDAD8
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x10BDD64
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x10BDD68
    // Implemented from: System.Resources.IResourceReader
    // Base method: System.Collections.IDictionaryEnumerator IResourceReader::GetEnumerator()
    System::Collections::IDictionaryEnumerator* GetEnumerator();
  }; // System.Resources.ResourceReader
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Resources::ResourceReader*, "System.Resources", "ResourceReader");
#pragma pack(pop)
