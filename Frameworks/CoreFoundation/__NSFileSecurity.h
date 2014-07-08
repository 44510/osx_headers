//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/NSFileSecurity.h>

#import "NSCoding.h"
#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface __NSFileSecurity : NSFileSecurity <NSCopying, NSCoding>
{
    struct _filesec *_filesec;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)__new:(struct _filesec *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)finalize;
- (void)dealloc;
- (BOOL)clearProperties:(unsigned long long)arg1;
- (BOOL)setAccessControlList:(struct _acl *)arg1;
- (BOOL)copyAccessControlList:(struct _acl **)arg1;
- (BOOL)setGroupUUID:(unsigned char [16])arg1;
- (BOOL)getGroupUUID:(unsigned char (*)[16])arg1;
- (BOOL)setOwnerUUID:(unsigned char [16])arg1;
- (BOOL)getOwnerUUID:(unsigned char (*)[16])arg1;
- (BOOL)setMode:(unsigned short)arg1;
- (BOOL)getMode:(unsigned short *)arg1;
- (BOOL)setGroup:(unsigned int)arg1;
- (BOOL)getGroup:(unsigned int *)arg1;
- (BOOL)setOwner:(unsigned int)arg1;
- (BOOL)getOwner:(unsigned int *)arg1;
- (struct _filesec *)_filesec;

@end

