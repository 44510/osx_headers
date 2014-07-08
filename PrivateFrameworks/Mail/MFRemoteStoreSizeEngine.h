//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFSizeEngine.h>

@class NSMutableDictionary, NSMutableSet;

@interface MFRemoteStoreSizeEngine : MFSizeEngine
{
    NSMutableDictionary *_usageByMailbox;
    NSMutableSet *_mailboxesToSize;
}

- (void).cxx_destruct;
- (void)_handleMailboxSizeChanged:(id)arg1;
- (void)_refetchListing:(id)arg1;
- (BOOL)_shouldStartWorkerThread;
- (BOOL)_prepareToRefresh;
- (id)usageForMailbox:(id)arg1;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;
- (id)allUsageByMailboxKeys;
- (void)addMailboxesToSizeFromArray:(id)arg1;
- (id)popMailboxToSize;
- (unsigned long long)countOfMailboxesToSize;
- (void)_mailboxBecameInvalid:(id)arg1;
- (void)_mailboxSizeChanged:(id)arg1;
- (void)_sizeChangedForMailbox:(id)arg1;
- (BOOL)_changeUsageInfo:(CDStruct_1dee9796 *)arg1 forMailbox:(id)arg2 refetchQuotas:(BOOL)arg3;
- (void)_getSizeForMailbox:(id)arg1;

@end

