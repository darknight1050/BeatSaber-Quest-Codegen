// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.ArrayUtility
#include "UnityEngine/ProBuilder/ArrayUtility.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.ArrayUtility/SearchRange
  struct ArrayUtility::SearchRange : public System::ValueType {
    public:
    // public System.Int32 begin
    // Offset: 0x0
    int begin;
    // public System.Int32 end
    // Offset: 0x4
    int end;
    // Creating value type constructor for type: SearchRange
    SearchRange(int begin_ = {}, int end_ = {}) : begin{begin_}, end{end_} {}
    // public System.Void .ctor(System.Int32 begin, System.Int32 end)
    // Offset: 0x9B2BFC
    static ArrayUtility::SearchRange* New_ctor(int begin, int end);
    // public System.Boolean Valid()
    // Offset: 0x9B2C04
    bool Valid();
    // public System.Int32 Center()
    // Offset: 0x9B2C18
    int Center();
    // public override System.String ToString()
    // Offset: 0x9B2C30
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.ArrayUtility/SearchRange
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ArrayUtility::SearchRange, "UnityEngine.ProBuilder", "ArrayUtility/SearchRange");
#pragma pack(pop)
