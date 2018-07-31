/*
 * CsHelper.h
 * 
 * This file is part of the "LLGL" project (Copyright (c) 2015-2018 by Lukas Hermanns)
 * See "LICENSE.txt" for license information.
 */

#pragma once

#include <vcclr.h>
#include <string>


namespace LHermanns
{

namespace LLGL
{


std::string ToStdString(System::String^ s);
std::wstring ToStdWString(System::String^ s);

System::String^ ToManagedString(const std::string& s);
System::String^ ToManagedString(const std::wstring& s);
System::String^ ToManagedString(const char* s);
System::String^ ToManagedString(const wchar_t* s);


} // /namespace LLGL

} // /namespace LHermanns



// ================================================================================