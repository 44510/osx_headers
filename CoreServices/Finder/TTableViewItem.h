//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary;

@interface TTableViewItem : NSObject <NSCopying>
{
    struct TNSRef<NSMutableDictionary *> _data;
}

+ (id)keyPathForKey:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
@property(readonly, retain, nonatomic) NSDictionary *data; // @dynamic data;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

