---
id: version-0.79-IReactNonAbiValue
title: IReactNonAbiValue
original_id: IReactNonAbiValue
---

![Architecture](https://img.shields.io/badge/architecture-new_&_old-green)

Kind: `interface`

The `IReactNonAbiValue` helps wrapping a non-ABI-safe C++ value into an `IInspectable` object. Use it to handle native module lifetime.
It also can be used to store values in the [`IReactPropertyBag`](IReactPropertyBag) that do not need to go through the EXE/DLL boundary.

## Methods
### GetPtr
int64_t **`GetPtr`**()

Gets a pointer to the stored value.

## Referenced by
- [`JsiRuntime`](JsiRuntime)
