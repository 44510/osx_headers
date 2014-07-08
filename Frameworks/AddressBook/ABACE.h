//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface ABACE : NSObject <NSCopying>
{
    NSString *_principal;
    int _type;
    BOOL _read;
    BOOL _write;
    BOOL _inherited;
    BOOL _protected;
}

- (id)description;
- (BOOL)isProtected;
- (BOOL)isInherited;
- (void)setCanWrite:(BOOL)arg1;
- (BOOL)canWrite;
- (void)setCanRead:(BOOL)arg1;
- (BOOL)canRead;
- (void)setType:(int)arg1;
- (int)type;
- (void)setPrincipal:(id)arg1;
- (id)principal;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCurrentUserPrivNode:(id)arg1;
- (id)initWithACENode:(id)arg1;
- (id)initWithPrincipal:(id)arg1;

@end

