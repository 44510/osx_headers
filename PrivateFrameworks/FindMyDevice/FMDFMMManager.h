//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface FMDFMMManager : NSObject
{
    NSXPCConnection *_xpcConnection;
    struct AuthorizationOpaqueRef *_authRef;
}

+ (id)sharedInstance;
@property(nonatomic) struct AuthorizationOpaqueRef *authRef; // @synthesize authRef=_authRef;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (id)_adminAuthDataForRight:(const char *)arg1;
- (void)_createAuthRight;
- (id)newErrorForCode:(int)arg1 message:(id)arg2;
- (id)retrieveFMMAccount:(id *)arg1;
- (id)removeFMMAccountWithUsername:(id)arg1 authRight:(id)arg2;
- (id)removeFMMAccountWithUsername:(id)arg1;
- (id)addFMMAccount:(id)arg1;
- (BOOL)isFMMEnabled;
- (void)retrieveFMMAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeFMMAccountWithUsername:(id)arg1 authRight:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeFMMAccountWithUsername:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addFMMAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_destroyXPCConnection;
- (id)currentXPCConnection;
- (void)dealloc;
- (id)init;

@end

