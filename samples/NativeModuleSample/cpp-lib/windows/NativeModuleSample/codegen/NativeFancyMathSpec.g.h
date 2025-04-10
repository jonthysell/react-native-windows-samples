
/*
 * This file is auto-generated from a NativeModule spec file in js.
 *
 * This is a C++ Spec class that should be used with MakeTurboModuleProvider to register native modules
 * in a way that also verifies at compile time that the native module matches the interface required
 * by the TurboModule JS spec.
 */
#pragma once
// clang-format off

// #include "NativeFancyMathDataTypes.g.h" before this file to use the generated type definition
#include <NativeModules.h>
#include <tuple>

namespace NativeModuleSampleCodegen {

inline winrt::Microsoft::ReactNative::FieldMap GetStructInfo(FancyMathSpec_Constants*) noexcept {
    winrt::Microsoft::ReactNative::FieldMap fieldMap {
        {L"E", &FancyMathSpec_Constants::E},
        {L"Pi", &FancyMathSpec_Constants::Pi},
    };
    return fieldMap;
}

struct FancyMathSpec : winrt::Microsoft::ReactNative::TurboModuleSpec {
  static constexpr auto constants = std::tuple{
      TypedConstant<FancyMathSpec_Constants>{0},
  };
  static constexpr auto methods = std::tuple{
      Method<void(double, double, Callback<double>) noexcept>{0, L"add"},
  };

  template <class TModule>
  static constexpr void ValidateModule() noexcept {
    constexpr auto constantCheckResults = CheckConstants<TModule, FancyMathSpec>();
    constexpr auto methodCheckResults = CheckMethods<TModule, FancyMathSpec>();

    REACT_SHOW_CONSTANT_SPEC_ERRORS(
          0,
          "FancyMathSpec_Constants",
          "    REACT_GET_CONSTANTS(GetConstants) FancyMathSpec_Constants GetConstants() noexcept {/*implementation*/}\n"
          "    REACT_GET_CONSTANTS(GetConstants) static FancyMathSpec_Constants GetConstants() noexcept {/*implementation*/}\n");

    REACT_SHOW_METHOD_SPEC_ERRORS(
          0,
          "add",
          "    REACT_METHOD(add) void add(double a, double b, std::function<void(double)> const & callback) noexcept { /* implementation */ }\n"
          "    REACT_METHOD(add) static void add(double a, double b, std::function<void(double)> const & callback) noexcept { /* implementation */ }\n");
  }
};

} // namespace NativeModuleSampleCodegen
