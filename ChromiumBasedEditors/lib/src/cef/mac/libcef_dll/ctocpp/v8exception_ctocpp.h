// Copyright (c) 2017 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=454802fd5ee72ffafd720eab24f754c58a2ff4a8$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_V8EXCEPTION_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_V8EXCEPTION_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_v8_capi.h"
#include "include/cef_v8.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefV8ExceptionCToCpp : public CefCToCppRefCounted<CefV8ExceptionCToCpp,
                                                        CefV8Exception,
                                                        cef_v8exception_t> {
 public:
  CefV8ExceptionCToCpp();

  // CefV8Exception methods.
  CefString GetMessage() OVERRIDE;
  CefString GetSourceLine() OVERRIDE;
  CefString GetScriptResourceName() OVERRIDE;
  int GetLineNumber() OVERRIDE;
  int GetStartPosition() OVERRIDE;
  int GetEndPosition() OVERRIDE;
  int GetStartColumn() OVERRIDE;
  int GetEndColumn() OVERRIDE;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_V8EXCEPTION_CTOCPP_H_
