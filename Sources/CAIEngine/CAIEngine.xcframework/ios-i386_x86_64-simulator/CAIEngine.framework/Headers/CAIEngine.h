//
//  CAIEngine.h
//  CAIEngine
//
//  Created by 韦烽传 on 2021/7/5.
//

#import <Foundation/Foundation.h>

//! Project version number for CAIEngine.
FOUNDATION_EXPORT double CAIEngineVersionNumber;

//! Project version string for CAIEngine.
FOUNDATION_EXPORT const unsigned char CAIEngineVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <CAIEngine/PublicHeader.h>

/**
 在 `Link Binary With Libraries` 添加 `libz.tbd` `libc++.tbd` `libsqlite3.tbd` `AVFoundation.framework` `CoreGraphics.framework` `AuidoToolbox.framework` `Security.framework` `SystemConfiguration.farmework`
 */

/// 驰声头文件
#import <CAIEngine/ChivoxAISdkInfo.h>
#import <CAIEngine/ChivoxAIRetValue.h>
#import <CAIEngine/ChivoxAIEngine.h>
#import <CAIEngine/ChivoxAIEvalResult.h>
#import <CAIEngine/ChivoxAIRecorderNotify.h>
#import <CAIEngine/ChivoxAIResTool.h>
#import <CAIEngine/ChivoxAILogLevel.h>
#import <CAIEngine/ChivoxAIAudioPlayer.h>
#import <CAIEngine/ChivoxAIRecordParam.h>
#import <CAIEngine/ChivoxAIAudioSrc.h>
#import <CAIEngine/ChivoxAIGlobalCfg.h>
