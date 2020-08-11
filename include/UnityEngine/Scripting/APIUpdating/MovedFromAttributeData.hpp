// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.Scripting.APIUpdating
namespace UnityEngine::Scripting::APIUpdating {
  // Autogenerated type: UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
  struct MovedFromAttributeData : public System::ValueType {
    public:
    // public System.String className
    // Offset: 0x0
    ::CsString* className;
    // public System.String nameSpace
    // Offset: 0x8
    ::CsString* nameSpace;
    // public System.String assembly
    // Offset: 0x10
    ::CsString* assembly;
    // public System.Boolean classHasChanged
    // Offset: 0x18
    bool classHasChanged;
    // public System.Boolean nameSpaceHasChanged
    // Offset: 0x19
    bool nameSpaceHasChanged;
    // public System.Boolean assemblyHasChanged
    // Offset: 0x1A
    bool assemblyHasChanged;
    // public System.Boolean autoUdpateAPI
    // Offset: 0x1B
    bool autoUdpateAPI;
    // Creating value type constructor for type: MovedFromAttributeData
    MovedFromAttributeData(::CsString* className_ = {}, ::CsString* nameSpace_ = {}, ::CsString* assembly_ = {}, bool classHasChanged_ = {}, bool nameSpaceHasChanged_ = {}, bool assemblyHasChanged_ = {}, bool autoUdpateAPI_ = {}) : className{className_}, nameSpace{nameSpace_}, assembly{assembly_}, classHasChanged{classHasChanged_}, nameSpaceHasChanged{nameSpaceHasChanged_}, assemblyHasChanged{assemblyHasChanged_}, autoUdpateAPI{autoUdpateAPI_} {}
    // public System.Void Set(System.Boolean autoUpdateAPI, System.String sourceNamespace, System.String sourceAssembly, System.String sourceClassName)
    // Offset: 0xA43A50
    void Set(bool autoUpdateAPI, ::CsString* sourceNamespace, ::CsString* sourceAssembly, ::CsString* sourceClassName);
  }; // UnityEngine.Scripting.APIUpdating.MovedFromAttributeData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Scripting::APIUpdating::MovedFromAttributeData, "UnityEngine.Scripting.APIUpdating", "MovedFromAttributeData");
#pragma pack(pop)
