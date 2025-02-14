// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ColorType
#include "GlobalNamespace/ColorType.hpp"
// Including type: NoteCutDirection
#include "GlobalNamespace/NoteCutDirection.hpp"
// Including type: NoteLineLayer
#include "GlobalNamespace/NoteLineLayer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MockNoteData
  class MockNoteData : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDFD248
    // private System.Single <time>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDFD258
    // private System.Int32 <lineIndex>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int lineIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDFD268
    // private ColorType <colorType>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::ColorType colorType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorType) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDFD278
    // private NoteCutDirection <cutDirection>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    GlobalNamespace::NoteCutDirection cutDirection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteCutDirection) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDFD288
    // private NoteLineLayer <noteLineLayer>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::NoteLineLayer noteLineLayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteLineLayer) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDFD298
    // private System.Single <duration>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: MockNoteData
    MockNoteData(float time_ = {}, int lineIndex_ = {}, GlobalNamespace::ColorType colorType_ = {}, GlobalNamespace::NoteCutDirection cutDirection_ = {}, GlobalNamespace::NoteLineLayer noteLineLayer_ = {}, float duration_ = {}) noexcept : time{time_}, lineIndex{lineIndex_}, colorType{colorType_}, cutDirection{cutDirection_}, noteLineLayer{noteLineLayer_}, duration{duration_} {}
    // public System.Single get_time()
    // Offset: 0x2399BD4
    float get_time();
    // public System.Void set_time(System.Single value)
    // Offset: 0x2399BDC
    void set_time(float value);
    // public System.Int32 get_lineIndex()
    // Offset: 0x2399BE4
    int get_lineIndex();
    // public System.Void set_lineIndex(System.Int32 value)
    // Offset: 0x2399BEC
    void set_lineIndex(int value);
    // public ColorType get_colorType()
    // Offset: 0x2399BF4
    GlobalNamespace::ColorType get_colorType();
    // public System.Void set_colorType(ColorType value)
    // Offset: 0x2399BFC
    void set_colorType(GlobalNamespace::ColorType value);
    // public NoteCutDirection get_cutDirection()
    // Offset: 0x2399C04
    GlobalNamespace::NoteCutDirection get_cutDirection();
    // public System.Void set_cutDirection(NoteCutDirection value)
    // Offset: 0x2399C0C
    void set_cutDirection(GlobalNamespace::NoteCutDirection value);
    // public NoteLineLayer get_noteLineLayer()
    // Offset: 0x2399C14
    GlobalNamespace::NoteLineLayer get_noteLineLayer();
    // public System.Void set_noteLineLayer(NoteLineLayer value)
    // Offset: 0x2399C1C
    void set_noteLineLayer(GlobalNamespace::NoteLineLayer value);
    // public System.Single get_duration()
    // Offset: 0x2399C24
    float get_duration();
    // public System.Void set_duration(System.Single value)
    // Offset: 0x2399C2C
    void set_duration(float value);
    // public System.Void Mirror(System.Int32 lineCount)
    // Offset: 0x2399C34
    void Mirror(int lineCount);
    // public System.Void .ctor()
    // Offset: 0x2399C8C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockNoteData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockNoteData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockNoteData*, creationType>()));
    }
  }; // MockNoteData
  #pragma pack(pop)
  static check_size<sizeof(MockNoteData), 36 + sizeof(float)> __GlobalNamespace_MockNoteDataSizeCheck;
  static_assert(sizeof(MockNoteData) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockNoteData*, "", "MockNoteData");
