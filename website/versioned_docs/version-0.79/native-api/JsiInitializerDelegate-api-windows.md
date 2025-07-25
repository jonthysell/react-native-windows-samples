---
id: version-0.79-JsiInitializerDelegate
title: JsiInitializerDelegate
original_id: JsiInitializerDelegate
---

![Architecture](https://img.shields.io/badge/architecture-new_&_old-green)

Kind: `delegate`

A delegate that sets `reactContext` for a module.
We use it for a stand-alone initialize method, strongly typed JS events and functions.
Experimental code uses it to initialize TurboModule `CallInvoker`.

## Invoke
void **`Invoke`**([`IReactContext`](IReactContext) reactContext, Object runtimeHandle)

## Referenced by
- [`IReactModuleBuilder`](IReactModuleBuilder)
