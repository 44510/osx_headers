//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NSDeferredSheet : NSObject
{
    NSString *_childIdentifier;
    NSString *_parentIdentifier;
    CDUnknownBlockType _reply;
    struct CGSize _size;
    BOOL _isCritical;
}

@property(readonly) BOOL isCritical; // @synthesize isCritical=_isCritical;
@property(readonly) struct CGSize size; // @synthesize size=_size;
@property(copy) CDUnknownBlockType reply; // @synthesize reply=_reply;
@property(retain) NSString *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property(retain) NSString *childIdentifier; // @synthesize childIdentifier=_childIdentifier;
- (id)initWithChildIdentifier:(id)arg1 parentIdentifier:(id)arg2 size:(struct CGSize)arg3 isCritical:(BOOL)arg4 withReply:(CDUnknownBlockType)arg5;
- (void)dealloc;

@end

