//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSInvocation.h"

@interface NSInvocation (MailCoreAdditions)
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 object3:(id)arg5 object4:(id)arg6;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 object3:(id)arg5;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2;
@property(readonly) unsigned char priority;
@end

