//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@interface AMWorkspace : NSObject
{
    id _reserved;
    id _reserved2;
    id _reserved3;
    NSError *_error;
    BOOL _didStart;
    BOOL _finishedRunning;
}

+ (id)sharedWorkspace;
- (void)automatorRunnerDied;
- (void)workflowRunner:(id)arg1 didError:(id)arg2;
- (void)workflowRunnerDidStop:(id)arg1;
- (void)workflowRunnerDidRun:(id)arg1;
- (void)workflowRunnerWillRun:(id)arg1;
- (void)workflowDidError:(id)arg1;
- (id)runWorkflowAtPath:(id)arg1 withInput:(id)arg2 error:(id *)arg3;
- (id)UUID;
- (void)setError:(id)arg1;
- (id)error;
- (void)setOutput:(id)arg1;
- (id)output;
- (id)runnerInterface;
- (void)dealloc;
- (id)init;

@end
