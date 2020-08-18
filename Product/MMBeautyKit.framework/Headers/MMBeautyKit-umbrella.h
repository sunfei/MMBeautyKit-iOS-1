#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "CosmosBeautySDK.h"
#import "MMBeautyError.h"
#import "MMBeautyLog.h"
#import "MMRenderFilterBeautyModule.h"
#import "MMRenderFilterBeautyKey.h"
#import "MMRenderFilterBigHeadEffectModule.h"
#import "MMRenderFilterLookupModule.h"
#import "MMRenderFilterModule.h"
#import "MMRenderModuleManager.h"
#import "MMRenderInputType.h"
#import "MMRenderEffectConfiguration.h"
#import "MMRenderPointsRenderFilter.h"
#import "MMRenderFilterStickerModule.h"

FOUNDATION_EXPORT double MMBeautyKitVersionNumber;
FOUNDATION_EXPORT const unsigned char MMBeautyKitVersionString[];

