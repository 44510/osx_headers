//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IP_IPHDiffLink : NSObject
{
    NSString *localID;
    int localState;
    int distantState;
}

- (void)setDistantState:(int)arg1;
- (int)distantState;
- (void)setLocalState:(int)arg1;
- (int)localState;
- (void)setLocalID:(id)arg1;
- (id)localID;
- (void)dealloc;
- (id)init;

@end

