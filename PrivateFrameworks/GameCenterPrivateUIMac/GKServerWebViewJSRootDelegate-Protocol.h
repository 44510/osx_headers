//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKServerWebViewJSRoot, NSDictionary, NSString, _GKAlert;

@protocol GKServerWebViewJSRootDelegate <NSObject>
- (void)serverWebViewJSRoot:(GKServerWebViewJSRoot *)arg1 changeNavBarWithButtons:(NSDictionary *)arg2 showSpinner:(BOOL)arg3;
- (void)serverWebViewJSRoot:(GKServerWebViewJSRoot *)arg1 reauthenticateWithCompletionHandler:(void (^)(GKPlayer *, NSString *))arg2;
- (void)serverWebViewJSRoot:(GKServerWebViewJSRoot *)arg1 presentAlert:(_GKAlert *)arg2 withCompletionHandler:(void (^)(long long))arg3;
- (void)serverWebViewJSRoot:(GKServerWebViewJSRoot *)arg1 saveFile:(NSString *)arg2 suggestedFilename:(NSString *)arg3 mimeType:(NSString *)arg4;
@end

