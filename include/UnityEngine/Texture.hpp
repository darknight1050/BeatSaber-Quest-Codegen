// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: TextureDimension
  struct TextureDimension;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextureWrapMode
  struct TextureWrapMode;
  // Forward declaring type: FilterMode
  struct FilterMode;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: TextureFormat
  struct TextureFormat;
  // Forward declaring type: UnityException
  class UnityException;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Forward declaring namespace: UnityEngine::Experimental::Rendering
namespace UnityEngine::Experimental::Rendering {
  // Forward declaring type: GraphicsFormat
  struct GraphicsFormat;
  // Forward declaring type: FormatUsage
  struct FormatUsage;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Texture
  // [] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: CA760C
  // [NativeHeaderAttribute] Offset: CA760C
  // [NativeHeaderAttribute] Offset: CA760C
  class Texture : public UnityEngine::Object {
    public:
    // Creating value type constructor for type: Texture
    Texture() noexcept {}
    // Get static field: static public readonly System.Int32 GenerateAllMips
    static int _get_GenerateAllMips();
    // Set static field: static public readonly System.Int32 GenerateAllMips
    static void _set_GenerateAllMips(int value);
    // public System.Int32 get_mipmapCount()
    // Offset: 0x1982BD0
    int get_mipmapCount();
    // private System.Int32 GetDataWidth()
    // Offset: 0x1982C10
    int GetDataWidth();
    // private System.Int32 GetDataHeight()
    // Offset: 0x1982C50
    int GetDataHeight();
    // public System.Int32 get_width()
    // Offset: 0x1982C90
    int get_width_NEW();
    // public System.Void set_width(System.Int32 value)
    // Offset: 0x1982CD0
    void set_width_NEW(int value);
    // public System.Int32 get_height()
    // Offset: 0x1982D30
    int get_height_NEW();
    // public System.Void set_height(System.Int32 value)
    // Offset: 0x1982D70
    void set_height_NEW(int value);
    // public System.Void set_dimension(UnityEngine.Rendering.TextureDimension value)
    // Offset: 0x1982DD0
    void set_dimension_NEW(UnityEngine::Rendering::TextureDimension value);
    // public System.Boolean get_isReadable()
    // Offset: 0x1982E30
    bool get_isReadable_NEW();
    // public UnityEngine.TextureWrapMode get_wrapMode()
    // Offset: 0x1982E70
    UnityEngine::TextureWrapMode get_wrapMode();
    // public System.Void set_wrapMode(UnityEngine.TextureWrapMode value)
    // Offset: 0x1982EB0
    void set_wrapMode(UnityEngine::TextureWrapMode value);
    // public System.Void set_filterMode(UnityEngine.FilterMode value)
    // Offset: 0x1982F00
    void set_filterMode(UnityEngine::FilterMode value);
    // public System.Void set_mipMapBias(System.Single value)
    // Offset: 0x1982F50
    void set_mipMapBias(float value);
    // public UnityEngine.Vector2 get_texelSize()
    // Offset: 0x1982FA0
    UnityEngine::Vector2 get_texelSize();
    // public System.IntPtr GetNativeTexturePtr()
    // Offset: 0x1983048
    System::IntPtr GetNativeTexturePtr();
    // System.Boolean ValidateFormat(UnityEngine.TextureFormat format)
    // Offset: 0x1983088
    bool ValidateFormat(UnityEngine::TextureFormat format);
    // System.Boolean ValidateFormat(UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.FormatUsage usage)
    // Offset: 0x19831F0
    bool ValidateFormat(UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::FormatUsage usage);
    // UnityEngine.UnityException CreateNonReadableException(UnityEngine.Texture t)
    // Offset: 0x1983358
    UnityEngine::UnityException* CreateNonReadableException(UnityEngine::Texture* t);
    // private System.Void get_texelSize_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x1982FF8
    void get_texelSize_Injected(UnityEngine::Vector2& ret);
    // protected System.Void .ctor()
    // Offset: 0x1982B68
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Texture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1983478
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // UnityEngine.Texture
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Texture*, "UnityEngine", "Texture");
