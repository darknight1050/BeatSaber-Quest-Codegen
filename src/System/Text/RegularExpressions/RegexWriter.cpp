// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.RegularExpressions.RegexWriter
#include "System/Text/RegularExpressions/RegexWriter.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Collections.Hashtable
#include "System/Collections/Hashtable.hpp"
// Including type: System.Text.RegularExpressions.RegexCode
#include "System/Text/RegularExpressions/RegexCode.hpp"
// Including type: System.Text.RegularExpressions.RegexTree
#include "System/Text/RegularExpressions/RegexTree.hpp"
// Including type: System.ArgumentException
#include "System/ArgumentException.hpp"
// Including type: System.Text.RegularExpressions.RegexNode
#include "System/Text/RegularExpressions/RegexNode.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Text.RegularExpressions.RegexWriter.Write
System::Text::RegularExpressions::RegexCode* System::Text::RegularExpressions::RegexWriter::Write(System::Text::RegularExpressions::RegexTree* t) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::RegularExpressions::RegexCode*>("System.Text.RegularExpressions", "RegexWriter", "Write", t));
}
// Autogenerated method: System.Text.RegularExpressions.RegexWriter.PushInt
void System::Text::RegularExpressions::RegexWriter::PushInt(int I) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PushInt", I));
}
// Autogenerated method: System.Text.RegularExpressions.RegexWriter.EmptyStack
bool System::Text::RegularExpressions::RegexWriter::EmptyStack() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EmptyStack"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexWriter.PopInt
int System::Text::RegularExpressions::RegexWriter::PopInt() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "PopInt"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexWriter.CurPos
int System::Text::RegularExpressions::RegexWriter::CurPos() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "CurPos"));
}
// Autogenerated method: System.Text.RegularExpressions.RegexWriter.PatchJump
void System::Text::RegularExpressions::RegexWriter::PatchJump(int Offset, int jumpDest) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PatchJump", Offset, jumpDest));
}
// Autogenerated method: System.Text.RegularExpressions.RegexWriter.Emit
void System::Text::RegularExpressions::RegexWriter::Emit(int op) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Emit", op));
}
// Autogenerated method: System.Text.RegularExpressions.RegexWriter.Emit
void System::Text::RegularExpressions::RegexWriter::Emit(int op, int opd1) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Emit", op, opd1));
}
// Autogenerated method: System.Text.RegularExpressions.RegexWriter.Emit
void System::Text::RegularExpressions::RegexWriter::Emit(int op, int opd1, int opd2) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Emit", op, opd1, opd2));
}
// Autogenerated method: System.Text.RegularExpressions.RegexWriter.StringCode
int System::Text::RegularExpressions::RegexWriter::StringCode(::CsString* str) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "StringCode", str));
}
// Autogenerated method: System.Text.RegularExpressions.RegexWriter.MakeException
System::ArgumentException* System::Text::RegularExpressions::RegexWriter::MakeException(::CsString* message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::ArgumentException*>(this, "MakeException", message));
}
// Autogenerated method: System.Text.RegularExpressions.RegexWriter.MapCapnum
int System::Text::RegularExpressions::RegexWriter::MapCapnum(int capnum) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "MapCapnum", capnum));
}
// Autogenerated method: System.Text.RegularExpressions.RegexWriter.RegexCodeFromRegexTree
System::Text::RegularExpressions::RegexCode* System::Text::RegularExpressions::RegexWriter::RegexCodeFromRegexTree(System::Text::RegularExpressions::RegexTree* tree) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::RegularExpressions::RegexCode*>(this, "RegexCodeFromRegexTree", tree));
}
// Autogenerated method: System.Text.RegularExpressions.RegexWriter.EmitFragment
void System::Text::RegularExpressions::RegexWriter::EmitFragment(int nodetype, System::Text::RegularExpressions::RegexNode* node, int CurIndex) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EmitFragment", nodetype, node, CurIndex));
}
// Autogenerated method: System.Text.RegularExpressions.RegexWriter..ctor
System::Text::RegularExpressions::RegexWriter* System::Text::RegularExpressions::RegexWriter::New_ctor() {
  return (RegexWriter*)THROW_UNLESS(il2cpp_utils::New("System.Text.RegularExpressions", "RegexWriter"));
}
