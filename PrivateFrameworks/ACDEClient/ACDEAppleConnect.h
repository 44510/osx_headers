//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ACDEAppleConnect : NSObject
{
    id _private;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void)authenticate:(id)arg1 withPassword:(id)arg2;
@property(nonatomic) int logLevel;
@property(readonly) NSString *version;
@property id <ACDEAppleConnectDelegate> delegate;
- (id)private;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

