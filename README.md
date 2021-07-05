# CAIEngine

驰声声音评测 2.2.21+2.0.7.1 SDK XCFramework SwiftPackage

### 工程引用

在 `Link Binary With Libraries` 添加 `libz.tbd` `libc++.tbd` `libsqlite3.tbd` `AVFoundation.framework` `CoreGraphics.framework` `AudioToolbox.framework` `Security.framework` `SystemConfiguration.farmework`

### SwiftPackage 引用

```swift
.target(
    name: "Name",
    dependencies: ["CAIEngine"],
    linkerSettings: [.linkedLibrary("z"), .linkedLibrary("c++"), .linkedLibrary("sqlite3"), .linkedFramework("AVFoundation"), .linkedFramework("CoreGraphics"), .linkedFramework("AudioToolbox"), .linkedFramework("Security"), .linkedFramework("SystemConfiguration")]),
```
