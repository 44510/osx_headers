//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface URLWindowPolicyDecider : NSObject
{
}

+ (long long)windowPolicyForOpeningCloudTabs;
+ (long long)windowPolicyFromNavigationAction:(id)arg1;
+ (long long)windowPolicyFromCurrentEventRespectingKeyEquivalents:(BOOL)arg1;
+ (long long)windowPolicyFromCurrentEvent;
+ (long long)windowPolicyFromCurrentEventRequireCommandKey:(BOOL)arg1;
+ (long long)windowPolicyFromEventModifierFlags:(unsigned int)arg1 requireCommandKey:(BOOL)arg2;
+ (long long)windowPolicyFromEventModifierFlags:(unsigned int)arg1 isMiddleMouseButton:(BOOL)arg2;
+ (long long)windowPolicyFromEventModifierFlags:(unsigned int)arg1 isMiddleMouseButton:(BOOL)arg2 requireCommandKey:(BOOL)arg3;

@end

