//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSString;

@interface SASyncAnchor : AceObject <SAAceSerializable>
{
}

+ (id)anchorWithDictionary:(id)arg1 context:(id)arg2;
+ (id)anchor;
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) NSString *validity;
@property(copy, nonatomic) NSString *key;
@property(copy, nonatomic) NSString *generation;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

