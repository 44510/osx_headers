//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EWSAutodiscoverOperation, NSString;

@interface EWSAutodiscoverBinding : NSObject
{
    NSString *_host;
    EWSAutodiscoverOperation *_operation;
    id <EWSAutodiscoverBindingDelegate> _delegate;
    BOOL _logsActivity;
}

@property BOOL logsActivity; // @synthesize logsActivity=_logsActivity;
@property(readonly, nonatomic) id <EWSAutodiscoverBindingDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *host; // @synthesize host=_host;
- (void)cancel;
- (void)sendMessage:(id)arg1;
- (id)sendSynchronousMessage:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithHost:(id)arg1 delegate:(id)arg2;
- (void)setOperation:(id)arg1;

@end

