//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCActivityTarget.h"

@class MFMessageStore, NSConditionLock, NSMutableArray, NSString;

@interface MFMessageRouter : NSObject <MCActivityTarget>
{
    NSMutableArray *_queuedMessages;
    NSConditionLock *_queuedMessagesFull;
    NSConditionLock *_queuedMessagesEmpty;
    NSConditionLock *_queuedMessagesRouting;
    unsigned long long _bytesInQueue;
    unsigned long long _queueSize;
    BOOL _routingThreadShouldQuit;
    BOOL _isUserAction;
    MFMessageStore *_store;
    unsigned long long _numMessagesRoutedSoFar;
    unsigned long long _numMessagesToBeRouted;
}

+ (void)saveRulesIfNeeded;
+ (id)syncedRulesSyncedFile;
+ (void)addInvitationsToCalendarFromMessages:(id)arg1;
+ (void)setAddInvitationsToCalendarAutomatically:(BOOL)arg1;
+ (BOOL)_addICalRule;
+ (BOOL)addInvitationsToCalendarAutomatically;
+ (void)applyRulesAsynchronouslyToMailboxes:(id)arg1;
+ (void)_applyRulesToMailboxes:(id)arg1;
+ (id)junkMailHeaderFlags;
+ (void)setJunkMailTrustHeaders:(BOOL)arg1;
+ (BOOL)junkMailTrustHeaders;
+ (void)setJunkMailEvaluationAfterRules:(BOOL)arg1;
+ (BOOL)junkMailEvaluationAfterRules;
+ (void)reloadRules;
+ (id)defaultJunkMailRule;
+ (id)userJunkMailRule;
+ (void)setJunkMailRule:(id)arg1;
+ (id)junkMailRule;
+ (id)_junkMailRuleForBehavior:(long long)arg1 abCriterion:(BOOL)arg2 ahCriterion:(BOOL)arg3 fnCriterion:(BOOL)arg4;
+ (void)routeJunkMessagesInMailboxes:(id)arg1;
+ (void)_ensureJunkRuleBehaviorMatchesPreference;
+ (void)evaluateJunkMailBehaviorFromRules;
+ (void)setJunkMailBehavior:(long long)arg1;
+ (long long)junkMailBehavior;
+ (id)colorForMessage:(id)arg1 highlightTextUsingColor:(char *)arg2;
+ (void)_putRulesThatWantsToHandleMessage:(id)arg1 intoArray:(id)arg2 colorRulesOnly:(BOOL)arg3 fetchingBody:(BOOL)arg4 needsBody:(char *)arg5;
+ (void)headersRequiredForRoutingDidChange;
+ (id)headersRequiredForRouting;
+ (void)_mailboxListingChanged:(id)arg1;
+ (void)loadDestinationMailboxes;
+ (void)tryToReconnectAutoDeactivatedRules;
+ (void)_updateUnrecognizedRulesAfterRemovingIndex:(unsigned long long)arg1;
+ (void)_updateUnrecognizedRulesAfterAddingIndex:(unsigned long long)arg1;
+ (void)removeRule:(id)arg1;
+ (void)addRule:(id)arg1;
+ (void)insertRule:(id)arg1 atIndex:(unsigned long long)arg2;
+ (void)removeRuleAtIndex:(unsigned long long)arg1;
+ (id)ruleAtIndex:(unsigned long long)arg1;
+ (unsigned long long)numberOfRules;
+ (id)rules;
+ (void)_synchronouslyWriteRulesToDisk;
+ (void)_writeRulesToDiskInBackground;
+ (id)_readRulesFromDisk;
+ (void)_setupSortRules;
+ (id)_sortRuleDictionaryRepresentations;
+ (id)_sortRulesFromDictionaryRepresentations:(id)arg1 junkRule:(id *)arg2 iCalRule:(id *)arg3;
+ (BOOL)_setICalRule:(id)arg1;
+ (id)iCalRule;
+ (id)_defaultSortRules;
+ (id)defaultAppleEmailAddresses;
+ (void)_mailboxWasRenamed:(id)arg1;
+ (void)_accountWillBeDeleted:(id)arg1;
+ (void)_mailboxBecameInvalid:(id)arg1;
+ (void)mailboxWillBeRenamedOrInvalidated;
+ (void)ruleDidChange:(id)arg1;
+ (void)ruleAffectingColorsDidChange:(id)arg1;
+ (BOOL)colorsUpdateDynamically;
+ (BOOL)_colorRuleExistsAfterRule:(id)arg1;
+ (void)enqueueColorRulesDidChange;
+ (void)setColorChangeCounter:(long long)arg1;
+ (long long)colorChangeCounter;
+ (BOOL)_hasColorRules;
+ (void)_iCalSettingChangedFromICal:(id)arg1;
+ (void)_setupAddInvitationDefault;
+ (void)_updateICalRule:(BOOL)arg1;
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
+ (void)_unScheduleWriteRules;
+ (void)scheduleWriteRules;
+ (void)setWriteRulesTimer:(id)arg1;
+ (id)writeRulesTimer;
+ (void)initialize;
@property(nonatomic) BOOL isUserAction; // @synthesize isUserAction=_isUserAction;
@property(nonatomic) unsigned long long numMessagesToBeRouted; // @synthesize numMessagesToBeRouted=_numMessagesToBeRouted;
@property(nonatomic) unsigned long long numMessagesRoutedSoFar; // @synthesize numMessagesRoutedSoFar=_numMessagesRoutedSoFar;
@property(nonatomic) __weak MFMessageStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)setEstimatedNumberOfMessagesToRoute:(unsigned long long)arg1;
- (void)waitForRoutingToFinish;
- (void)_routeQueuedMessages;
- (void)asynchronouslyRouteMessages:(id)arg1;
- (id)routeMessages:(id)arg1 fromStores:(id)arg2 fetchingBodies:(BOOL)arg3 messagesNeedingBodies:(id)arg4;
- (BOOL)_routeMessagesIndividually;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

