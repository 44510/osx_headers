//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface TKTlvRecord : NSObject
{
    unsigned long long _tag;
    NSData *_value;
    NSData *_data;
}

+ (id)recordFromArray:(id)arg1 forTag:(unsigned long long)arg2 error:(id *)arg3;
+ (id)recordsFromData:(id)arg1 error:(id *)arg2;
+ (id)recordWithTag:(unsigned long long)arg1 value:(id)arg2;
+ (id)recordFromData:(id)arg1 expectedTag:(unsigned long long)arg2 error:(id *)arg3;
+ (id)recordFromData:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSData *value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (id)initWithTag:(unsigned long long)arg1 value:(id)arg2 data:(id)arg3;
- (id)initFromData:(id)arg1 expectedTag:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithTag:(unsigned long long)arg1 value:(id)arg2;
- (id)initWithSource:(id)arg1 error:(id *)arg2;

@end
