//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface IDSSockAddrWrapper : NSObject <NSCopying>
{
    struct sockaddr_storage _sa;
}

+ (id)wrapperWithWrapper:(id)arg1 andPortHostOrder:(unsigned short)arg2;
+ (id)wrapperWithAddressString:(id)arg1 withPortHostOrder:(unsigned short)arg2;
+ (id)wrapperWithAddressString:(id)arg1 withPortHostOrder:(unsigned short)arg2 withInterfaceName:(id)arg3;
+ (id)wrapperWithSockAddr:(const struct sockaddr *)arg1;
- (void)copySockAddr:(struct sockaddr *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)ipString;
- (id)ipData;
- (BOOL)isEqualToWrapper:(id)arg1;
- (BOOL)isEqualToSockAddr:(const struct sockaddr *)arg1;
@property(readonly, nonatomic) unsigned short saPortHostOrder;
@property(readonly, nonatomic) const struct sockaddr_in6 *sa6;
@property(readonly, nonatomic) const struct sockaddr_in *sa4;
@property(readonly, nonatomic) const struct sockaddr *sa;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithSockAddr:(const struct sockaddr *)arg1;

@end

