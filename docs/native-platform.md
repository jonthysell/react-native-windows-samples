---
id: native-platform
title: Native Platform
---

Sometimes a React Native app needs to access native functionality that isn't already exposed via `react-native` or an existing community module or library. Whether it's to access a platform API or some other custom native code, React Native was designed to be extensible, making it possible for anyone to write native code and expose that functionality to their app's JavaScript.

The [reactnative.dev Native Platform guide](https://reactnative.dev/docs/native-platform) defines *Native Modules* as native libraries for accessing non-UI native code, and *Native Components* for accessing native platform views. The guide includes steps for implementing new native modules (and/or components) for both the Android and iOS platforms.

This guide covers how to implement new Native Modules (and/or Native Components) for the Windows platform.

> The React Native guide recommends creating *Turbo Native Modules* and/or *Fabric Native Components* to support React Native's New Architecture, rather than the legacy APIs made for the Old Architecture. This guide will detail how to create a single library which supports both architectures on Windows. For information on React Native architectures in React Native Windows, see [New vs. Old Architecture](new-architecture.md).

## Guides

Similar to how the [Getting Started for Windows](./getting-started.md) guide takes you through the process of creating a base React Native app (which supports iOS and Android), and *adding* Windows support, this guide will take you through the steps of *adding* Windows support to a base native library.

1. [Getting Started](./native-platform-getting-started.md): Create a new base native library and initialize React Native for Windows support
1. Define the API surface for your native module in one or more JS spec files
1. Use React Native for Windows' native module codegen to take those JS spec files and create the C++ headers for the Windows code
1. Write the Windows C++ code to implement the functions in the generated headers
1. Register your native module with an app
1. Use your native module from your JavaScript code.
