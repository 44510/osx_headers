//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface SiteMetadataRequest : NSObject <NSCopying>
{
    int _type;
    NSURL *_url;
    NSDictionary *_extraInfo;
}

+ (id)requestWithURL:(id)arg1 type:(int)arg2;
@property(readonly, copy, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1 type:(int)arg2;
- (id)initWithURL:(id)arg1 type:(int)arg2 extraInfo:(id)arg3;

@end

